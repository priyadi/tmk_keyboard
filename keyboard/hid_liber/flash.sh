#!/bin/sh

echo place magnet near controller now
sleep 10
sudo dfu-programmer atmega32u4 erase
sudo dfu-programmer atmega32u4 flash hid_liber_lufa.hex
sudo dfu-programmer atmega32u4 start
