#!/bin/bash

# rev4 -> rev6

cd qmk_firmware && \
make planck/rev6:surprisetalk:dfu-util && \
echo "Please put your keyboard in RESET mode.\n" && \
sudo sleep 10 && \
sudo dfu-programmer atmega32u4 erase && \
sudo dfu-programmer atmega32u4 flash .build/planck_rev4_surprisetalk.hex && \
sudo dfu-programmer atmega32u4 start && \
cd ..
