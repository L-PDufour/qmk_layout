MOUSEKEY_ENABLE = no    # Mouse keys(+1482)
EXTRAKEY_ENABLE = yes   # Audio control and System control(+470)
OLED_ENABLE = yes
# OLED_DRIVER_ENABLE = yes   # 127X32 OLED Screen
LTO_ENABLE = yes   # Link Time Optimization
VIA_ENABLE = no    # Configuring keyboard with VIA
MIDI_ENABLE = no    # MIDI controls
WPM_ENABLE = yes   # WPM Calculation
CONSOLE_ENABLE = yes
RGB_MATRIX_ENABLE       = no   # Matrix LEDs

CFLAGS                 += -flto
EXTRAFLAGS             += -flto

