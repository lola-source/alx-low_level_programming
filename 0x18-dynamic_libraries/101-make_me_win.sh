#!/bin/bash
wget https://github.com/lola-source/alx-low_level_programming/raw/master/0x18-dynamic_libraries/inject.so -P ../
export LD_PRELOAD=../inject.so