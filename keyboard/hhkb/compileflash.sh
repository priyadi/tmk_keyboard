#!/bin/sh

KEYMAP=victor make -f Makefile.rn42
dfu-programmer atmega32u4 erase
dfu-programmer atmega32u4 flash hhkb_rn42.hex
dfu-programmer atmega32u4 reset
