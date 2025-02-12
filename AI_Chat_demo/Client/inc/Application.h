#ifndef APPLICATION_H
#define APPLICATION_H

#include "WebsocketClient.h"
#include "StateMachine.h"
#include "AudioProcess.h"
#include <json/json.h>
#include <string>
#include <queue>
#include <vector>
#include <cstdint>
#include <chrono>
#include <thread>
#include <iostream>
#include <mutex>
#include <condition_variable>
#include <optional>

enum class AppState {
    idle,
    listening,
    thinking,
    speaking,
    // Add more states here...
};

enum class AppEvent {
    fault,
    wake_detected,
    vad_no_speech,
    vad_end,
    asr_received,
    speaking_end,
    conversation_end,
    // Add more events here...
};

template<typename T>
class ThreadSafeQueue {
public:
    // 线程安全地添加元素到队列
    void Enqueue(const T& item) {
        std::lock_guard<std::mutex> lock(mutex_);
        queue_.push(item);
        cond_var_.notify_one(); // 通知有新元素
    }

    // 获取并移除队列中的最前面的元素
    std::optional<T> Dequeue() {
        std::unique_lock<std::mutex> lock(mutex_);
        // 等待条件变量，直到有元素或者被通知
        cond_var_.wait(lock, [this]() { return !queue_.empty(); });
        if (!queue_.empty()) {
            T item = queue_.front();
            queue_.pop();
            return item;
        }
        return std::nullopt; // 如果队列为空，则返回空值
    }

private:
    std::queue<T> queue_;
    mutable std::mutex mutex_;
    std::condition_variable cond_var_;
};

class Application {
public:
    Application(const std::string& address, int port, const std::string& token, const std::string& deviceId, int protocolVersion, AudioProcess& audio_processor);
    void Run();

private:
    using AppEvent_t_ = int;
    
    void ws_msg_callback(const std::string& message, bool is_binary);
    AppEvent_t_ handle_message(const std::string& message);
    AppEvent_t_ handle_vad_message(const Json::Value& root);
    AppEvent_t_ handle_asr_message(const Json::Value& root);
    AppEvent_t_ handle_tts_message(const Json::Value& root);

    void idle_enter();
    void idleState_run();
    void idle_exit();

    void listening_enter();
    void listeningState_run();
    void listening_exit();

    void thinking_enter();
    void thinking_exit();

    void speaking_enter();
    void speakingState_run();
    void speaking_exit();

    WebSocketClient ws_client_;
    StateMachine client_state_; // 更改成员变量名称
    int frame_duration_;
    int protocolVersion_;
    std::string asr_text_;
    bool tts_completed_ = false;
    bool conversation_completed_ = false;
    std::atomic<bool> state_running_ = false;
    std::thread state_running_thread_;
    

    // 创建线程安全的消息队列
    ThreadSafeQueue<std::string> messageQueue_;
    // 创建线程安全的事件队列
    ThreadSafeQueue<int> eventQueue_;
    // 创建audio process对象
    AudioProcess& audio_processor_;
    
};

#endif // APPLICATION_H