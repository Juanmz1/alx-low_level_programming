#!/bin/bash
gcc -wall -wextra -werror -pedantic -c fPIC *.c
gcc -shared -o liball.so *.o
export LD_LIBRARY_PATH=:/root/alx-low_level_programming/0x18-dynamic_libraries
