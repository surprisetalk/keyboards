#!/bin/bash

cd qmk_firmware && \
make zlant:surprisetalk && \
echo "Please put your keyboard in RESET mode.\n" && \
sudo sleep 10 && \
sudo dfu-programmer atmega32u4 erase && \
sudo dfu-programmer atmega32u4 flash .build/zlant_surprisetalk.hex && \
sudo dfu-programmer atmega32u4 start && \
cd ..
