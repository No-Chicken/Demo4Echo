import struct
from pyogg import OpusEncoder, OpusDecoder

class AudioProcessor:
    HEADER_FORMAT = "!HHI"  # 版本 (2 字节) + 类型 (2 字节) + 负载大小 (4 字节)
    HEADER_SIZE = struct.calcsize(HEADER_FORMAT)

    def __init__(self, sample_rate=16000, channels=1, frame_duration_ms=20):
        self.sample_rate = sample_rate
        self.channels = channels
        self.frame_duration_ms = frame_duration_ms
        self.frame_size = sample_rate // 1000 * frame_duration_ms

        # 初始化 Opus 编解码器
        self.encoder = OpusEncoder()
        self.encoder.set_sampling_frequency(sample_rate)
        self.encoder.set_channels(channels)
        self.encoder.set_application('voip')

        self.decoder = OpusDecoder()
        self.decoder.set_sampling_frequency(sample_rate)
        self.decoder.set_channels(channels)

    def pack_bin_frame(self, version, type, payload):
        """
        打包 BinProtocol 消息
        :param version: 协议版本 (2 字节)
        :param type: 消息类型 (2 字节)
        :param payload: 消息负载 (字节)
        :return: 打包后的二进制数据
        """
        header = struct.pack(self.HEADER_FORMAT, version, type, len(payload))
        return header + payload

    def unpack_bin_frame(self, data):
        """
        解包 BinProtocol 消息
        :param data: 接收到的二进制数据
        :return: BinProtocol 对象或 None
        """
        if len(data) < self.HEADER_SIZE:
            print("Data too short to contain BinProtocol header")
            return None

        version, type, payload_size = struct.unpack(self.HEADER_FORMAT, data[:self.HEADER_SIZE])
        if len(data) < self.HEADER_SIZE + payload_size:
            print("Data size does not match payload_size")
            return None

        payload = data[self.HEADER_SIZE:self.HEADER_SIZE + payload_size]
        if len(payload) != payload_size:
            print("Payload size mismatch")
            return None

        return (version, type, payload)

    def encode_audio(self, pcm_data):
        """
        编码 PCM 音频数据为 Opus 数据
        :param pcm_data: PCM 音频数据 (字节)
        :return: 编码后的 Opus 数据 (字节)
        """
        if len(pcm_data) % (self.frame_size * 2) != 0:
            print("PCM data size is not a multiple of the frame size")
            return None

        opus_data = b''
        for i in range(0, len(pcm_data), self.frame_size * 2):
            frame = pcm_data[i:i + self.frame_size * 2]
            encoded_frame = self.encoder.encode(frame)
            opus_data += encoded_frame

        return opus_data

    def decode_audio(self, opus_data):
        """
        解码 Opus 数据为 PCM 音频数据
        :param opus_data: Opus 数据 (字节)
        :return: 解码后的 PCM 音频数据 (字节)
        """
        pcm_data = b''
        start = 0
        while start < len(opus_data):
            # 解码一帧 Opus 数据
            encoded_frame_size = min(len(opus_data) - start, 1536)
            encoded_frame = bytearray(opus_data[start:start + encoded_frame_size])
            decoded_frame = self.decoder.decode(encoded_frame)
            pcm_data += decoded_frame
            start += encoded_frame_size

        return pcm_data

    def set_audio_params(self, sample_rate, channels, frame_duration_ms=None):
        """
        设置音频参数
        :param sample_rate: 采样率
        :param channels: 声道数
        :param frame_duration_ms: 每帧的持续时间（可选）
        """
        self.sample_rate = sample_rate
        self.channels = channels
        if frame_duration_ms is not None:
            self.frame_duration_ms = frame_duration_ms
        self.frame_size = sample_rate // 1000 * self.frame_duration_ms

        # 重新初始化编解码器
        self.encoder.set_sampling_frequency(sample_rate)
        self.encoder.set_channels(channels)
        self.decoder.set_sampling_frequency(sample_rate)
        self.decoder.set_channels(channels)

    def load_audio_from_file(self, file_path, frame_duration_ms=None):
        """
        从文件中加载 PCM 音频数据
        :param file_path: PCM 文件路径
        :param frame_duration_ms: 每帧的持续时间（可选）
        :return: 音频数据队列
        """
        if frame_duration_ms is not None:
            self.set_audio_params(self.sample_rate, self.channels, frame_duration_ms)

        with open(file_path, 'rb') as f:
            pcm_data = f.read()

        frames = []
        for i in range(0, len(pcm_data), self.frame_size * 2):
            frame = pcm_data[i:i + self.frame_size * 2]
            frames.append(frame)

        return frames

    def save_audio_to_file(self, pcm_data, file_path):
        """
        将 PCM 音频数据保存到文件
        :param pcm_data: PCM 音频数据 (字节)
        :param file_path: 保存的文件路径
        """
        with open(file_path, 'wb') as f:
            f.write(pcm_data)
