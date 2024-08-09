// Copyright 2023 nhatanh (@nhatanh-zen8)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */
#pragma once

/* #include "config_common.h" */

/* USB Device descriptor parameter */
/* #define VENDOR_ID       0xFEED */
/* #define PRODUCT_ID      0x9235 */
/* #define DEVICE_VER      0x0001 */
/* #define MANUFACTURER    ME */
/* #define PRODUCT         DittoMacro */
/* #define DESCRIPTION     3x3 macropad */

/* key matrix size */
#define MATRIX_ROWS 3
#define MATRIX_COLS 3

// The pin connected to the data pin of the LEDs
#define WS2812_DI_PIN A7
// The number of LEDs connected
#define RGBLED_NUM 9

/* RGB LED Conversion macro from physical array to electric array */
#define LED_LAYOUT( \
    L00, L01, L02,   \
    L03, L04, L05,   \
    L06, L07, L08 ) \
  { \
    L00, L01, L02,   \
    L03, L04, L05,   \
    L06, L07, L08    \
  }

#define RGBLIGHT_LED_MAP LED_LAYOUT( \
  0, 1, 2,        \
  3, 4, 5,        \
  6, 7, 8 )

/* key matrix pins */
#define MATRIX_COL_PINS {A4, A6, B6}
#define MATRIX_ROW_PINS {A1, A2, A3}
/* #define UNUSED_PINS */

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
/* #define DEBOUNCE 5 */
/* disable debug print */
//#define NO_DEBUG

/* #define LAYOUT_default( \ */
/* 	K00, K01, K02, \ */
/* 	K10, K11, K12, \ */
/* 	K20, K21, K22 \ */
/* ) { \ */
/* 	{ K00, K01, K02 }, \ */
/* 	{ K10, K11, K12 }, \ */
/* 	{ K20, K21, K22 }  \ */
/* } */

/* #define LAYOUT LAYOUT_default */
/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

#define MK_INITIAL_SPEED  400
#define MOUSEKEY_BASE_SPEED  3600
#define MOUSEKEY_DECELERATED_SPEED  100
#define MOUSEKEY_ACCELERATED_SPEED  2800

#undef TAPPING_TERM
#define TAPPING_TERM 200
#define QUICK_TAP_TERM 120

/* #define RGBLIGHT_MODE_CHRISTMAS */
/* #define RGBLIGHT_MODE_RGB_TEST */
/* #define RGBLIGHT_MODE_ALTERNATING */

#define RGBLIGHT_SLEEP

#define RGBLIGHT_EFFECT_BREATHING
#define RGBLIGHT_EFFECT_RAINBOW_MOOD
#define RGBLIGHT_EFFECT_RAINBOW_SWIRL
#define RGBLIGHT_EFFECT_KNIGHT
#define RGBLIGHT_EFFECT_CHRISTMAS
#define RGBLIGHT_EFFECT_STATIC_GRADIENT
#define RGBLIGHT_EFFECT_RGB_TEST
#define RGBLIGHT_EFFECT_ALTERNATING
#define RGBLIGHT_EFFECT_TWINKLE

#define RGBLIGHT_MODE_BREATHING_2
#define RGBLIGHT_MODE_RAINBOW_MOOD_2
#define RGBLIGHT_MODE_RAINBOW_SWIRL_3
#define RGBLIGHT_MODE_KNIGHT_1
#define RGBLIGHT_MODE_STATIC_GRADIENT_9
#define RGBLIGHT_MODE_TWINKLE_3
