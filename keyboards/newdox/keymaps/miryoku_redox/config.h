// Copyright 2019 Manna Harbour
// https://github.com/manna-harbour/miryoku

// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>.

#pragma once

#include "custom_config.h"

#define USE_SERIAL

#ifndef DYNAMIC_KEYMAP_LAYER_COUNT
#define  DYNAMIC_KEYMAP_LAYER_COUNT 10
#endif
// default but used in macros
#undef TAPPING_TERM
#define TAPPING_TERM 230
// #define TAPPING_TERM 170

#define PERMISSIVE_HOLD
// #define HOLD_ON_OTHER_KEY_PRESS

// Enable rapid switch from tap to hold, disables double tap hold auto-repeat.
#define QUICK_TAP_TERM 100

// Auto Shift
// #define NO_AUTO_SHIFT_ALPHA
// #define AUTO_SHIFT_TIMEOUT TAPPING_TERM
// #define AUTO_SHIFT_NO_SETUP

// Mouse key speed and acceleration.
// #undef MOUSEKEY_DELAY
// #define MOUSEKEY_DELAY          0
// #undef MOUSEKEY_INTERVAL
// #define MOUSEKEY_INTERVAL       16
// #undef MOUSEKEY_WHEEL_DELAY
// #define MOUSEKEY_WHEEL_DELAY    0
// #undef MOUSEKEY_MAX_SPEED
// #define MOUSEKEY_MAX_SPEED      6
// #undef MOUSEKEY_TIME_TO_MAX
// #define MOUSEKEY_TIME_TO_MAX    64

// Thumb Combos
#if defined (MIRYOKU_KLUDGE_THUMBCOMBOS)
  #define COMBO_TERM 200
  #define EXTRA_SHORT_COMBOS
#endif

// layout
#define XXX KC_NO

#define LAYOUT_miryoku_redox(\
K00, K01, K02, K03, K04, K05,                          K06, K07, K08, K09, K10, K11,\
K12, K13, K14, K15, K16, K17, K18,                K19, K20, K21, K22, K23, K24, K25,\
K26, K27, K28, K29, K30, K31, K32,                K33, K34, K35, K36, K37, K38, K39,\
K40, K41, K42, K43, K44, K45, K46, K47,      K48, K49, K50, K51, K52, K53, K54, K55,\
K56, K57, K58, K59,    K60,   K61, K62,      K63, K64,    K65,   K66, K67, K68, K69\
)\
LAYOUT(\
K00, K01, K02, K03, K04, K05,                          K06, K07, K08, K09, K10, K11,\
K12, K13, K14, K15, K16, K17, K18,                K19, K20, K21, K22, K23, K24, K25,\
K26, K27, K28, K29, K30, K31, K32,                K33, K34, K35, K36, K37, K38, K39,\
K40, K41, K42, K43, K44, K45, K46, K47,      K48, K49, K50, K51, K52, K53, K54, K55,\
K56, K57, K58, K59,    K60,   K61, K62,      K63, K64,    K65,   K66, K67, K68, K69\
)
