#!/bin/bash

rm -rf build
mkdir build

cd build
cmake ..
make
cd ..

rm -rf release
mkdir release

cp build/libPaceLib.a release
cp -r PaceLib/include release
