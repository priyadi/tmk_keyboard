#!/bin/sh

sudo dfu-util -d 1c11:b007 -D build/infinity.bin
