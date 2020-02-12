## GL Starterkit = GL board + STM32F4DISCOVERY

### Compile and run pits detection (xlgyro) project with STM32CUBEIDE 
```
1) Download STM32CUBEIDE last version from https://www.st.com/en/development-tools/stm32cubeide.html

2) Extract it from archive and run in terminal sudo ./[extracted_file]

3) In CubeIDE import project -> use ~/src/sbc-platform/src/pits/xlgyro folder

4) Build project

5) Connect STM32F4DISCOVERY with USB cable 

6) To flash it run ./flash.sh (check path to fash utility in the script)
```

### Compile project xlgyro with CMAKE

```
If you want to compile with Cmake:

if you use 64x architecture do sudo apt-get install gcc-multilib

1) Download crosscompiler https://launchpad.net/gcc-arm-embedded/+download

2) Untar it to $HOME 
cd ~
tar xjf gcc-arm-none-eabi-5_4-2016q3-20160926-linux.tar.bz2

3) add to ~/.bashrc
export CROSS_COMPILE="arm-none-eabi-"
PATH="$PATH:$HOME/gcc-arm-none-eabi-5_4-2016q3/bin"

4) Compile with Cmake
mkdir build && cd build && cmake -DCMAKE_TOOLCHAIN_FILE=../toolchain.cmake .. && make -j$(nproc)
```