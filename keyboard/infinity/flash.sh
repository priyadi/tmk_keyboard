#!/bin/sh

echo press the programming button at the bottom of the keyboard...
sleep 10
sudo dfu-util -d 1c11:b007 -D build/infinity.bin
