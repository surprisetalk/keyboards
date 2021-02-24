#!/bin/bash

# rev4 -> rev6

cd qmk_firmware && \
make niu_mini:surprisetalk && \
echo "Please put your keyboard in RESET mode.\n" && \
sudo sleep 10 && \
sudo dfu-programmer atmega32u4 erase && \
sudo dfu-programmer atmega32u4 flash .build/niu_mini_surprisetalk.hex && \
sudo dfu-programmer atmega32u4 start && \
cd ..
