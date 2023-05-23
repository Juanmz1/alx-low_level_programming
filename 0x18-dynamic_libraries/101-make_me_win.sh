#!/bin/bash
wget -P /tmp https://github.com/juanmz1/alx-low_level_programming/raw/main/0x18-dynamic_libraries/wintest.so
export LD_PRELOAD=/tmp/wintest.so
