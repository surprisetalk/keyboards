#!/bin/bash

cd qmk_firmware && \
make planck/light:surprisetalk && \
echo "Please put your keyboard in RESET mode.\n" && \
sudo sleep 10 && \
sudo dfu-programmer at90usb1286 erase && \
sudo dfu-programmer at90usb1286 flash .build/planck_light_surprisetalk.hex && \
sudo dfu-programmer at90usb1286 start && \
cd ..
