
# KEYBOARDS

## MINIVAN

``` bash
sudo aura -A dfu-progrmmer
sudo dfu-programmer atmega32u4 erase
sudo dfu-programmer atmega32u4 flash tv44-rev3_2017-09-10-20-13-46.hex
sudo dfu-programmer atmega32u4 start
```

## PLANCK

Keymap is located in `qmk_firmware/keyboards/planck/keymaps/surprisetalk`.

``` bash
sudo aura -A dfu-programmer
cd qmk_firmware
make planck-rev4-surprisetalk
sudo dfu-programmer atmega32u4 erase
sudo dfu-programmer atmega32u4 flash .build/planck_rev4_surprisetalk.hex
sudo dfu-programmer atmega32u4 start
```
