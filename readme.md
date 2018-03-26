
# Keyboards

## Minivan

``` bash
sudo aura -A dfu-progrmmer
sudo dfu-programmer atmega32u4 erase
sudo dfu-programmer atmega32u4 flash minivan.hex
sudo dfu-programmer atmega32u4 start
```

## Planck

Keymap is located in `qmk_firmware/keyboards/planck/keymaps/surprisetalk`.

``` bash
sudo aura -A dfu-programmer
cd qmk_firmware
make planck-rev4-surprisetalk
sudo dfu-programmer atmega32u4 erase
sudo dfu-programmer atmega32u4 flash .build/planck_rev4_surprisetalk.hex
sudo dfu-programmer atmega32u4 start
```

## Preonic

```
      ,-----------------------------------------------------------------------------------------------------------.
      |   `    |    1   |    2   |    3   |    4   |    5   |    6   |    7   |    8   |    9   |    0   |        |
hold  |        |        |        |        |        |        |        |        |        |        |        |        |
raise |        |        |        |        |        |        |        |        |        |        |        |        |
lower |        |        |        |        |        |        |        |        |        |        |        |        |
adjst |        |        |        |        |        |        |        |        |        |        |        |        |
m     |        |        |        |        |        |        |        |        |        |        |        |        |
mshft |        |        |        |        |        |        |        |        |        |        |        |        |
mctrl |        |        |        |        |        |        |        |        |        |        |        |        |
      |--------+--------+--------+--------+--------+-----------------+--------+--------+--------+--------+--------|
      |   `    |    "   |    ,   |    .   |    P   |    Y   |    F   |    G   |    C   |    R   |    L   |   /    |
hold  |  Alt   |        |        |        |        |        |        |        |        |        |        |  Alt   |
raise |   `    |    1   |    2   |    3   |    4   |    5   |    6   |    7   |    8   |    9   |    0   |        |
lower |        |   F1   |   F2   |   F3   |   F4   |        |        |        |   Up   |        |        |        |
adjst |        |        |        |        |        |        |        |        |        |        |        |        |
m     |        |   WS1  |   WS2  |   WS3  |   WS4  |   WS5  |   WS6  |   WS7  |   WS8  |   WS9  |   WS10 |        |
mshft |        | m WS1  | m WS2  | m WS3  | m WS4  | m WS5  | m WS6  | m WS7  | m WS8  | m WS9  | m WS10 |        |
mctrl |        | s WS1  | s WS2  | s WS3  | s WS4  | s WS5  | s WS6  | s WS7  | s WS8  | s WS9  | s WS10 |        |
      |--------+--------+--------+--------+--------+-----------------+--------+--------+--------+--------+--------|
      |  Esc   |    A   |    O   |    E   |    U   |    I   |    D   |    H   |    T   |    N   |    S   |   -    |
hold  |  Ctrl  |        |        |        |        |        |        |        |        |        |        |  Ctrl  |
raise |        |        |        |        |        |        |        |    4   |    5   |    6   |    _   |        |
lower |        |   F5   |   F6   |   F7   |   F8   |        |        |  Left  |  Down  |  Right |        |        |
adjst |        |        |        |        |        |        |        |        |        |        |        |        |
m     |        |  htop  | ranger | vol dn | vol up |  time  |        |   scrn |   scrn |   scrn | srchSP | tiling |
mshft |        | glances|  stig  |winShrnk|winExpnd|  date  |        | m scrn | m scrn | m scrn | slckSP | float  |
mctrl |        |        |        |  win-  |  win+  |  batt  |        | s scrn | s scrn | s scrn |newChrme| 2scrn  |
      |--------+--------+--------+--------+--------+--------|--------+--------+--------+--------+--------+--------|
      |  Bksp  |    ;   |    Q   |    J   |    K   |    X   |    B   |    M   |    W   |    V   |    Z   |   =    |
hold  |  Shift |        |        |        |        |        |        |        |        |        |        | Shift  |
raise |        |        |        |        |        |        |        |    1   |    2   |    3   |    +   |        |
lower |        |   F9   |   F10  |   F11  |   F12  |        |        |        |        |        |        |        |
adjst |        |        |        |        |        |        |        |        |        |        |        |        |
m     |        |  ncdu  |rsXmonad|g dn til|g up til|        |        |  scSP  | cycleLO|  paste | sxlock |        |
mshft |        |   duc  | killWin|m dn til|m up til|        |        | spotSP |resizeLO|        |        |        |
mctrl |        |indx duc| quitX  |focMastr|swpMastr|        |        | amixSP | resetLO|        |        |        |
      |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
      |  Tab   |   {    |    [   |    (   |   Esc  |  Bksp  | Space  |  Enter |    )   |    ]   |    }   |   \    |
hold  |  GUI   |        |        |        |   GUI  | Raise  | Shift  |  Lower |        |        |        |  GUI   |
raise |        |        |        |        |        |        |        |    0   |        |        |        |        |
lower |        |        |        |        |        |        |        |        |        |        |        |        |
adjst |        |        |        |        |        |        |        |        |        |        |        |        |
m     |        |        |        |        |        |        | termSP | emacsSP|        |        |        |        |
mshft |        |        |        |        |        |        | newTerm|newEmacs|        |        |        |        |
mctrl |        |        |        |        |        |        | cycTerm|cycEmacs|        |        |        |        |
      `-----------------------------------------------------------------------------------------------------------'
```

