BOOTLOADER = caterina
AUTO_SHIFT_ENABLE = no
CAPS_WORD_ENABLE = yes
COMBO_ENABLE = yes
LAYER_LOCK_ENABLE = yes
# BOOTLOADER: Teensy     -> halfkay
#             Pro Micro  -> caterina
#             Atmel DFU  -> atmel-dfu
#             LUFA DFU   -> lufa-dfu
#             QMK DFU    -> qmk-dfu
#             ATmega32A  -> bootloadHID
#             ATmega328P -> USBasp
EXTRAFLAGS += -flto
