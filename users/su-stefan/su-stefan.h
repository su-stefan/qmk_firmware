#pragma once
#include QMK_KEYBOARD_H

#include "action.h"
#include "version.h"
#include "wrappers.h"

#ifdef TAP_DANCE_ENABLE
//#    include "tap_dances.h"
#endif  // TAP_DANCE_ENABLE

#if defined(RGBLIGHT_ENABLE)
//#    include "rgb_stuff.h"
#endif

#if defined(RGB_MATRIX_ENABLE)
//#    include "rgb_matrix_stuff.h"
#endif

#if defined(OLED_DRIVER_ENABLE)
//#    include "oled_stuff.h"
#endif

// Each layer gets a name for readability
enum layers {
  _QWERTY,
  _COLEMAK,
  _GAME,
  _LOWER,
  _RAISE,
  _ADJUST
};

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
  COLEMAK,
  GAME,
  LOWER,
  RAISE,
  ADJUST,
  RGBRST,
  KC_RACL, // right alt / colon
  KC_MAKE,
  NEW_SAFE_RANGE  //use "NEW_SAFE_RANGE" for keymap specific codes
};

#define _______ KC_TRNS
#define ___X___ KC_NO

#define LOWER MO(_LOWER)
#define RAISE MO(_RAISE)

#define CTL_ESC CTL_T(KC_ESC)
