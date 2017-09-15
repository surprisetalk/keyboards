#!/bin/bash

cd minivan && \
echo "Please put your keyboard in RESET mode.\n" && \
sudo sleep 10 && \
sudo dfu-programmer atmega32u4 erase && \
sudo dfu-programmer atmega32u4 flash minivan.hex && \
sudo dfu-programmer atmega32u4 start && \
cd ..
