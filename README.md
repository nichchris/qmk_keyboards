# qmk_keyboards
keymap layouts for boards


## Pinouts and schematics

Overview to transefer between systems.
We have Micropython (MP), digital (D) and SPI (primary when applicable).

### XIAO RP2040

Shematic - RP2040

5V - 
GND - GND 
3V3 - IOVDD
MOSI (MP:P3, D10) - GPIO3
MISO (MP:P4, D9) - GPIO4
SCK (MP:P2, D8) - GPIO2
CSn (MP:P1, D7, RX) - GPIO1
TX (MP:P0, D6) - GPIO0
D5 (MP:7, SCL) - GPIO7
D4 (MP:6, SDA) - GPIO6
D3(MP:P29) - GPIO29
D2(MP:P28) - GPIO28
D1(MP:P27) - GPIO27
D0(MP:P26) - GPIO26

XIAO LED INDICATORS
GREEN - GPIO16
RED - GPIO17
BLUE - GPIO25

### KEEBOAR

Shematic - RP2040

5V - 
GND - GND 
3V3 - IOVDD
MOSI (MP:P3, D10) - GPIO3
MISO (MP:P4, D9) - GPIO4
SCK (MP:P2, D8) - GPIO2
CSn (MP:P1, D7, RX) - GPIO1
TX (MP:P0, D6) - GPIO0
D5 (MP:7, SCL) - GPIO7
D4 (MP:6, SDA) - GPIO6
D3(MP:P29) - GPIO29
D2(MP:P28) - GPIO28
D1(MP:P27) - GPIO27
D0(MP:P26) - GPIO26