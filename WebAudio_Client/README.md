
## 语言助手demo

### 库安装

使用编译之前请安装CmakeList涉及到的库:

1. jsoncpp

```sh
sudo apt-get install libjsoncpp-dev
```

2. opus

```sh
sudo apt install libopus-dev
```

3. portaudio(依赖ALSA)

```sh
sudo apt-get install libasound-dev
sudo apt-get -y install libportaudio2
```

4. websocketpp(依赖boost)

```sh
sudo apt-get install libboost-dev

git clone https://github.com/zaphoyd/websocketpp.git
cd websocketpp #进入目录
cmake CMakeList.txt #执行cmake
sudo make
sudo make install
```

安装好websocketpp之后，查看是否系统有头文件了

```sh
ls /usr/local/include/websocketpp
```

### 如何编译：

1. X86： 
```sh
mkdir build && cd build
cmake ..
make
```

2. arm:

注意, 需要先修改toolchain.cmake中的SDK路径

这个也是一样，需要确保SDK的buildroot已经设置好库并编译好了, 因为会用到sysroot里面的lib和inc

```sh
mkdir build && cd build
cmake -DTARGET_ARM=ON ..
make
```

3. 清除:

```sh
# in dir: build
make clean-all
```
