#!/bin/bash

rm -rf release
mkdir release

cp build/libPaceLib.a release
cp -r PaceLib/include release
