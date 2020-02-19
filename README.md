## GlobalLogic pits on roads detection demo project 

GL Starterkit (GL board + STM32F4DISCOVERY) is used in this demo.
You can either use STM32CUBEIDE (recommended) or compile project with Cmake.

### Compile and run pits detection (xlgyro) project with STM32CUBEIDE 

1) Download STM32CUBEIDE last version from https://www.st.com/en/development-tools/stm32cubeide.html

2) Extract it from archive and run in terminal ``` $ sudo ./[extracted_file] ```

3) After installing please auto-update it through "_Help->Check for Updates_" menu.

4) In CubeIDE import xlgyro project - use **~/src/sbc-platform/src/pits/xlgyro** folder.

4) Build project.

5) Connect STM32F4DISCOVERY with USB cable. 

6) To flash use "_Flash xlgyro_" external tool configuration in menu or use **flash.sh** script
 (if it doesn't work, check path to flash utility in the script).


### Compile project xlgyro with CMAKE

If you want to compile xlgyro demo with Cmake:

1) If you use 64x architecture, install 
    
    ```$ sudo apt-get install gcc-multilib```

2) Download crosscompiler from https://launchpad.net/gcc-arm-embedded/+download

3) Untar it to your $HOME 
    ```$ cd ~
    $ tar xjf gcc-arm-none-eabi-5_4-2016q3-20160926-linux.tar.bz2
    ```
4) Add this code to **~/.bashrc**:
    ```
    export CROSS_COMPILE="arm-none-eabi-"
    PATH="$PATH:$HOME/gcc-arm-none-eabi-5_4-2016q3/bin"
    ```
5) Compile xlgyro with Cmake:
    ```
    $ cd [xlgyro path]
    $ mkdir build && cd build && cmake -DCMAKE_TOOLCHAIN_FILE=../toolchain.cmake .. 
    $ make -j$(nproc)
    ```