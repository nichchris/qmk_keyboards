SERIAL_DRIVER = usart
#SPACE SAVING
AUDIO_ENABLE = no
MUSIC_ENABLE = no
# LTO must be disabled for RP2040 builds
LTO_ENABLE = no
SPACE_CADET_ENABLE = no
GRAVE_ESC_ENABLE = no 
MAGIC_ENABLE = no

COMBO_ENABLE = yes
CAPS_WORD_ENABLE = yes

MCU = RP2040
BOOTLOADER = rp2040

# BELOW IS COPU
SPLIT_KEYBOARD = yes
SERIAL_DRIVER = vendor

ENCODER_ENABLE = yes
OLED_ENABLE = no
EXTRAKEY_ENABLE = yes
CAPS_WORD_ENABLE = yes

BACKLIGHT_ENABLE = no
RGB_MATRIX_ENABLE = no
RGBLIGHT_ENABLE = no
MOUSEKEY_ENABLE = no
CONSOLE_ENABLE = no
COMMAND_ENABLE = no
BOOTMAGIC_ENABLE = no
LTO_ENABLE = no