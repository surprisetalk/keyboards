#!/bin/bash


# The preonic3 wouldn't work with this script, so we had to compile the .bin file with this and then flash it using QMK Toolbox.

cd qmk_firmware && \
make preonic/rev3:surprisetalk && \
echo "Please put your keyboard in RESET mode.\n" && \
sudo sleep 10 && \
sudo dfu-programmer atmega32u4 erase && \
sudo dfu-programmer atmega32u4 flash .build/preonic_rev3_surprisetalk.hex && \
sudo dfu-programmer atmega32u4 start && \
cd ..
