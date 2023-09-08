#pragma once

/* USB Device descriptor parameter */
#define VENDOR_ID       0xC2AB
#define PRODUCT_ID      0x3939
#define DEVICE_VER      0x0001
#define MANUFACTURER    trees
#define PRODUCT         Pinus

/* key matrix size */
#define MATRIX_ROWS 8
#define MATRIX_COLS 5

/*
 * Keyboard Matrix Assignments
 *
 * Change this to how you wired your keyboard
 * COLS: AVR pins used for columns, left to right
 * ROWS: AVR pins used for rows, top to bottom
 * DIODE_DIRECTION: COL2ROW = COL = Anode (+), ROW = Cathode (-, marked on diode)
 *                  ROW2COL = ROW = Anode (+), COL = Cathode (-, marked on diode)
 *                  NO_DIODE = switches are directly connected to AVR pins
 *
*/
#define DIRECT_PINS { \
    { C6, B4, B2, F7, F4 }, \
    { D4, E6, B6, B1, F5 }, \
    { D0, D7, B5, B3, F6 }, \
    { D2, D3, NO_PIN, NO_PIN, NO_PIN } \
}

#define DIRECT_PINS_RIGHT { \
    { F4, F7, B2, B4, C6 }, \
    { F5, B1, B6, E6, D4 }, \
    { F6, B3, B5, D7, D0 }, \
    { D3, D2, NO_PIN, NO_PIN, NO_PIN } \
}



#define UNUSED_PINS

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* Serial settings */
#define USE_SERIAL

/* serial.c configuration for split keyboard */
#define SOFT_SERIAL_PIN D1

#define EE_HANDS

/* Top left key on left half */
#define BOOTMAGIC_LITE_ROW 0
#define BOOTMAGIC_LITE_COLUMN 0
/* Top right key on right half */
#define BOOTMAGIC_LITE_ROW_RIGHT 4
#define BOOTMAGIC_LITE_COLUMN_RIGHT 4

#define TAPPING_TERM 200