#!/bin/bash

cd qmk_firmware && \
make planck-rev4-surprisetalk && \
echo "Please put your keyboard in RESET mode.\n" && \
sudo sleep 5 && \
sudo dfu-programmer atmega32u4 erase && \
sudo dfu-programmer atmega32u4 flash .build/planck_rev4_surprisetalk.hex && \
sudo dfu-programmer atmega32u4 start && \
cd ..
