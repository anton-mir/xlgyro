#!/bin/bash

rm -rf build

mkdir -p build

cd build

cmake -DCMAKE_TOOLCHAIN_FILE=../toolchain.cmake ..

make -j"$(nproc)"

exit 0
