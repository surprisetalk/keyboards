#!/bin/bash

cd qmk_firmware && \
make preonic/rev2:surprisetalk && \
echo "Please put your keyboard in RESET mode.\n" && \
sudo sleep 10 && \
sudo dfu-programmer atmega32u4 erase && \
sudo dfu-programmer atmega32u4 flash .build/preonic_rev2_surprisetalk.hex && \
sudo dfu-programmer atmega32u4 start && \
cd ..
