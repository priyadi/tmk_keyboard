#!/bin/sh

sleep 10
sudo dfu-programmer atmega32u4 erase
sudo dfu-programmer atmega32u4 flash hid_liber_pjrc.hex
sudo dfu-programmer atmega32u4 start
