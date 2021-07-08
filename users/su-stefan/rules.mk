SRC += su-stefan.c

BOOTMAGIC_ENABLE    = no  # Virtual DIP switch configuration(+1000)
EXTRAKEY_ENABLE     = yes # Audio control and System control(+450)
CONSOLE_ENABLE      = no  # Console for debug(+400)
COMMAND_ENABLE      = no  # Commands for debug and configuration
MOUSEKEY_ENABLE     = no  # Mouse keys(+4700)
NKRO_ENABLE         = yes

TAP_DANCE_ENABLE   ?= no
RGBLIGHT_ENABLE    ?= no
RGB_MATRIX_ENABLE  ?= no
OLED_DRIVER_ENABLE ?= no

ifeq ($(strip $(TAP_DANCE_ENABLE)), yes)
	SRC += tap_dances.c
endif
ifeq ($(strip $(RGBLIGHT_ENABLE)), yes)
    SRC += rgb_stuff.c
endif
ifeq ($(strip $(RGB_MATRIX_ENABLE)), yes)
	SRC += rgb_matrix_stuff.c
endif
ifeq ($(strip $(OLED_DRIVER_ENABLE)), yes)
	SRC += oled_stuff.c
endif
