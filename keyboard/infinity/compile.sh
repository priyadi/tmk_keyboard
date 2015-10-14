#!/bin/sh

export PATH="/usr/local/gcc-arm-none-eabi-4_9-2015q3/bin:$PATH"
make clean KEYMAP=priyadi
make KEYMAP=priyadi
