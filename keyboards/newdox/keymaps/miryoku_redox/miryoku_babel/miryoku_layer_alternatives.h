// Copyright 2022 Manna Harbour
// https://github.com/manna-harbour/miryoku
// generated -*- buffer-read-only: t -*-
// target: qmk

// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>.

#pragma once

#define MIRYOKU_ALTERNATIVES_BASE_QWERTY \
LT(U_BUTTON, KC_GRV),   KC_1,         KC_2,         KC_3,         KC_4,             KC_5,                                    /**/                         KC_6,             KC_7,              KC_8,         KC_9,         KC_0,             LT(U_BUTTON, KC_BSLS), \
LALT_T(KC_TAB),         KC_Q,         KC_W,         KC_E,         KC_R,             KC_T,              KC_HOME,              /**/ TD(U_TD_BOOT),          KC_Y,             KC_U,              KC_I,         KC_O,         KC_P,             KC_DQT,  \
LCTL_T(KC_ESC),         LCTL_T(KC_A), LALT_T(KC_S), LGUI_T(KC_D), LSFT_T(KC_F),     KC_G,              KC_END,               /**/ KC_MS_BTN3,             KC_H,             LSFT_T(KC_J),      LGUI_T(KC_K), LALT_T(KC_L), LCTL_T(KC_SCLN),  LCTL_T(KC_QUOT), \
LSFT_T(KC_MINS),        KC_Z,         KC_X,         KC_C,         KC_V,             KC_B,              KC_PGUP, KC_PGDN,     /**/ KC_MS_BTN1, KC_MS_BTN2, KC_N,             KC_M,              KC_COMM,      KC_DOT,       KC_SLSH,          LSFT_T(KC_EQL), \
KC_MS_L,                KC_MS_D,      KC_MS_U,      KC_MS_R,      LT(U_NUM,KC_ESC), LT(U_NAV,KC_BSPC), LT(U_MOUSE,KC_TAB),   /**/ LT(U_MEDIA,KC_ENT),     LT(U_FUN,KC_SPC), LT(U_SYM,KC_BSLS), KC_LEFT,      KC_DOWN,      KC_UP,            KC_RIGHT

#define MIRYOKU_ALTERNATIVES_NUM \
LGUI_T(KC_F12), KC_F1, KC_F2, KC_F3, KC_F4, KC_F5,                                                 /**/ KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, \
LALT_T(KC_TAB),  KC_ASTR, KC_SLSH, KC_LPRN, KC_RPRN, KC_CIRC, U_NA,                                /**/ U_NA, KC_EQL, KC_7, KC_8, KC_9, KC_0, KC_BSLS, \
LCTL_T(KC_ESC),  LCTL_T(KC_DOT), LALT_T(KC_COMM), LGUI_T(KC_LBRC), LSFT_T(KC_RBRC), KC_TILD, U_NA, /**/ KC_BSPC, KC_PLUS, KC_4, KC_5, KC_6, KC_QUOT, KC_DQT, \
LSFT_T(KC_MINS), KC_LT, KC_GT, KC_LCBR, KC_RCBR, KC_UNDS, U_NA, U_NA,                              /**/ KC_ASTR, KC_SLSH, KC_MINS, KC_1, KC_2, KC_3, KC_SCLN, KC_GRV, \
KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, U_NA, TD(U_TD_U_BASE), TD(U_TD_U_NUM),                         /**/ KC_ENT, KC_SPC, KC_0, KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT

#define MIRYOKU_ALTERNATIVES_SYM \
LGUI_T(KC_GRV),  KC_1, KC_2, KC_3, KC_4, KC_5,                          /**/ KC_6, KC_7, KC_8, KC_9, KC_0, KC_INS, \
LALT_T(KC_TAB),  KC_GRV, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, U_NA,      /**/ U_NA, TD(U_TD_U_BASE), KC_LPRN, KC_RPRN, KC_TILD, TD(U_TD_BOOT), KC_LALT, \
LCTL_T(KC_ESC),  KC_EQL, KC_DLR, KC_PERC, KC_CIRC, KC_MINS, U_NA,       /**/ U_NA, KC_DQT, LSFT_T(KC_LBRC), LGUI_T(KC_RBRC), LALT_T(KC_SCLN), LCTL_T(KC_QUOT), KC_LCTL, \
LSFT_T(KC_MINS), KC_QUOT, KC_EXLM, KC_AT, KC_HASH, KC_PLUS, U_NA, U_NA, /**/ U_NA, U_NA, KC_SPC, KC_LCBR, KC_RCBR, KC_DEL, KC_BSPC, KC_LSFT, \
KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, KC_BSLS, KC_UNDS, KC_SLSH,          /**/ TD(U_TD_U_SYM), TD(U_TD_U_MOUSE), U_NA, KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT

#define MIRYOKU_ALTERNATIVES_NAV_INVERTEDT \
LGUI_T(KC_GRV),  KC_1, KC_2, KC_3, KC_4, KC_5,                                                /**/ KC_6, KC_7, KC_8, KC_9, KC_0, KC_INS, \
LALT_T(KC_TAB),  TD(U_TD_BOOT), TD(U_TD_U_TAP), TD(U_TD_U_EXTRA), TD(U_TD_U_BASE), U_NA, U_NA,  /**/ U_NA, KC_INS, KC_HOME, KC_UP, KC_END, KC_PGUP, U_NA, \
LCTL_T(KC_ESC),  KC_LCTL, KC_LALT, KC_LGUI, KC_LSFT, KC_BSPC, U_NP,                             /**/ U_NP, CW_TOGG, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN, U_NP, \
LSFT_T(KC_MINS), U_NA, KC_ALGR, TD(U_TD_U_NUM), TD(U_TD_U_NAV), U_NA, U_NP, U_NP,               /**/ U_NP, U_NP, U_RDO, U_PST, U_CPY, U_CUT, U_UND, U_NP, \
U_NP, U_NP, U_NP, U_NP, U_NA, U_NA, U_NA,                                            /**/ KC_ENT, KC_SPC, KC_DEL, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R


#define MIRYOKU_ALTERNATIVES_MOUSE_INVERTEDT \
LGUI_T(KC_GRV),  KC_1, KC_2, KC_3, KC_4, KC_5,                                               /**/ KC_6, KC_7, KC_8, KC_9, KC_0, KC_INS, \
LALT_T(KC_TAB),  TD(U_TD_BOOT), TD(U_TD_U_TAP), TD(U_TD_U_EXTRA), TD(U_TD_U_BASE), U_NA, U_NA, /**/ U_NA, U_NU, KC_WH_L, KC_MS_U, KC_WH_R, KC_WH_U, U_NA, \
LCTL_T(KC_ESC),  KC_LCTL, KC_LALT, KC_LGUI, KC_LSFT, U_NA, U_NA,                               /**/ U_NA, U_NU, KC_MS_L, KC_MS_D, KC_MS_R, KC_WH_D, U_NA, \
LSFT_T(KC_MINS), U_NA, KC_ALGR, TD(U_TD_U_SYM), TD(U_TD_U_MOUSE), U_NA, U_NA, U_NA,            /**/  U_NA, U_NA, U_RDO, U_CPY, U_PST, U_CUT, U_UND, U_NA, \
U_NP, U_NP, U_NP, U_NP, U_NA, U_NA, U_NA,                                           /**/ KC_BTN2, KC_BTN1, KC_BTN3, KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT

#define MIRYOKU_ALTERNATIVES_FUN \
LGUI_T(KC_GRV),  KC_F1, KC_F2, KC_F3, KC_F4, KC_F5,                  /**/ KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, TD(U_TD_BOOT), \
LALT_T(KC_TAB),  KC_F12, KC_F7, KC_F8, KC_F9, KC_PSCR, KC_F11,       /**/ KC_F12, U_NA, TD(U_TD_U_BASE), TD(U_TD_U_EXTRA), TD(U_TD_U_TAP), TD(U_TD_BOOT), U_NA, \
LCTL_T(KC_ESC),  KC_F11, KC_F4, KC_F5, KC_F6, KC_SCRL, U_NA,         /**/ U_NA, U_NA, KC_LSFT, KC_LGUI, KC_LALT, KC_LCTL, KC_LCTL, \
LSFT_T(KC_MINS), KC_F10, KC_F1, KC_F2, KC_F3, KC_PAUS, U_NA, U_NA,   /**/ KC_MS_BTN1, KC_MS_BTN2, KC_MS_BTN3, TD(U_TD_U_FUN), TD(U_TD_U_MEDIA), KC_ALGR, KC_CAPS, KC_LSFT, \
KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, KC_APP, KC_DEL, KC_TAB,  /**/ KC_ENT, U_NA, KC_SPC, KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT

#define MIRYOKU_ALTERNATIVES_MEDIA_INVERTEDT \
LGUI_T(KC_GRV),  KC_1, KC_2, KC_3, KC_4, KC_5,                                                  /**/ KC_6, KC_7, KC_8, KC_9, KC_0, KC_INS, \
LALT_T(KC_TAB),  TD(U_TD_BOOT), TD(U_TD_U_TAP), TD(U_TD_U_EXTRA), TD(U_TD_U_BASE), KC_MSTP, U_NA, /**/ U_NA, RGB_TOG, RGB_MOD, KC_VOLU, RGB_HUI, RGB_SAI, U_NA, \
LCTL_T(KC_ESC),  KC_LCTL, KC_LALT, KC_LGUI, KC_LSFT, KC_MPLY, U_NA,                               /**/ U_NA, KC_BRIU, KC_MPRV, KC_VOLD, KC_MNXT, RGB_VAI, U_NA, \
LSFT_T(KC_MINS), U_NA, KC_ALGR, TD(U_TD_U_FUN), TD(U_TD_U_MEDIA), KC_MUTE, U_NA, U_NA,            /**/ U_NA, U_NA, KC_BRID, RGB_M_P, RGB_M_T, RGB_M_G, OU_AUTO, U_NA, \
KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, U_NA, U_NA, U_NA,                                              /**/ KC_MSTP, U_NA, KC_MUTE, KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT

#define MIRYOKU_ALTERNATIVES_TAP_QWERTY \
LGUI_T(KC_GRV),  KC_1, KC_2, KC_3, KC_4,   KC_5,                  /**/    KC_6,   KC_7,    KC_8,    KC_9,    KC_0, KC_INS, \
LALT_T(KC_TAB),  KC_Q, KC_W, KC_E, KC_R,   KC_T,    U_NA,         /**/    U_NA,   KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS, \
LCTL_T(KC_ESC),  KC_A, KC_S, KC_D, KC_F,   KC_G,    U_NA,         /**/    U_NA,   KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, \
LSFT_T(KC_MINS), KC_Z, KC_X, KC_C, KC_V,   KC_B,    U_NA, U_NA,   /**/    U_NA,   U_NA,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_EQL, \
KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, KC_ESC, KC_BSPC, KC_TAB,       /**/    KC_ENT, KC_BSPC, KC_DEL,  KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT

#define MIRYOKU_ALTERNATIVES_BUTTON \
KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5,                 /**/ KC_6, KC_7, KC_8, KC_9, KC_0, KC_INS, \
U_NP, U_UND, U_CUT, U_CPY, U_PST, U_RDO, QK_BOOT,        /**/ QK_BOOT, U_RDO, U_PST, U_CPY, U_CUT, U_UND, U_NA, \
U_NP, KC_LCTL, KC_LALT, KC_LGUI, KC_LSFT, U_NU, U_NA, /**/ U_NA, U_NU, KC_LSFT, KC_LGUI, KC_LALT, KC_LCTL, U_NA, \
U_NP, U_UND, U_CUT, U_CPY, U_PST, U_RDO, U_NA, U_NA,  /**/ U_NA, U_NA, U_RDO, U_PST, U_CPY, U_CUT, U_UND, U_NA, \
KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, KC_BTN3, KC_BTN1, KC_BTN2,    /**/ KC_BTN2, KC_BTN1, KC_BTN3, KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT
