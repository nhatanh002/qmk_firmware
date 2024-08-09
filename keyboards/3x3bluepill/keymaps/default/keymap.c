// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

// tap dancing
enum {
   BOOT_OR_ENT
};

void u_td_fn_boot_or_enter(tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {
        register_code(KC_ENT);
        unregister_code(KC_ENT);
    } else if (state->count >= 2) {
        reset_keyboard();
  }
}

tap_dance_action_t tap_dance_actions[] = {
    [BOOT_OR_ENT] = ACTION_TAP_DANCE_FN(u_td_fn_boot_or_enter),
};

enum LAYERS_33 {
     BASE,
     NAV,
     MOUSE,
     LED,
     MEDIA,
     MACRO,
     _MOD,
     WS,
     RESERVED_3,
     CHANGE_LAYER
 };
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┐
     * │ 7 │ 8 │ 9 │
     * ├───┼───┼───┤
     * │ 4 │ 5 │ 6 │
     * ├───┼───┼───┤
     * │ 1 │ 2 │ 3 │
     * └───┴───┴───┘
     */
    [BASE] = LAYOUT_ortho_3x3(
        KC_7,                  KC_8, KC_9,
        KC_4,                  KC_5, KC_6,
        LT(CHANGE_LAYER,KC_1), LT(_MOD,KC_2), LT(NAV,KC_3)
    ),
    [NAV] = LAYOUT_ortho_3x3(
        KC_PGUP,         KC_UP,                 KC_PGDN,
        KC_LEFT,         KC_DOWN,               KC_RIGHT,
        LCTL_T(KC_HOME), LT(CHANGE_LAYER,KC_0), LALT_T(KC_END)
    ),
    [MOUSE] = LAYOUT_ortho_3x3(
        KC_WH_U, KC_MS_U, KC_WH_D,
        KC_MS_L, KC_MS_D, KC_MS_R,
        KC_BTN1, KC_BTN3, LT(CHANGE_LAYER,KC_BTN2)
    ),
    [LED] = LAYOUT_ortho_3x3(
        RGB_VAI,                  RGB_SAI, RGB_HUI,
        LT(CHANGE_LAYER,KC_ESC),  RGB_MOD, RGB_M_P,
        KC_LSFT,                  RGB_TOG, RGB_M_X
    ),
    [MEDIA] = LAYOUT_ortho_3x3(
        KC_BRID, KC_MSTP,                  KC_BRIU,
        KC_VOLD, LT(CHANGE_LAYER,KC_MUTE), KC_VOLU,
        KC_MPRV, KC_MPLY,                  KC_MNXT
    ),
    [MACRO] = LAYOUT_ortho_3x3(
        KC_7, KC_8, KC_9,
        KC_4, KC_5, LT(CHANGE_LAYER,KC_6),
        KC_1, KC_2, KC_3
    ),
    [_MOD] = LAYOUT_ortho_3x3(
        LT(CHANGE_LAYER,KC_DEL), LSFT_T(KC_BSPC), LALT_T(KC_TAB),
        LCTL_T(KC_ESC),          LSFT_T(KC_SPC),  LALT_T(KC_ENT),
        LGUI_T(KC_TAB),          KC_SPC,          TD(BOOT_OR_ENT)
    ),
    [WS] = LAYOUT_ortho_3x3(
        KC_7, LT(CHANGE_LAYER,KC_8), KC_9,
        KC_4, KC_5,                  KC_6,
        KC_1, KC_2,                  KC_3
    ),
    /* [WS] = LAYOUT_ortho_3x3( */
    /*     QK_MACRO_6, LT(CHANGE_LAYER,QK_MACRO_7), QK_MACRO_8, */
    /*     QK_MACRO_3, QK_MACRO_4,                  QK_MACRO_5, */
    /*     QK_MACRO_0, QK_MACRO_1,                  QK_MACRO_2 */
    /* ), */
    [RESERVED_3] = LAYOUT_ortho_3x3(
        KC_7, KC_8, LT(CHANGE_LAYER,KC_9),
        KC_4, KC_5, KC_6,
        KC_1, KC_2, KC_3
    ),
    [CHANGE_LAYER] = LAYOUT_ortho_3x3(
        TO(_MOD),  TO(WS),    TO(RESERVED_3),
        TO(LED),  TO(MEDIA), TO(MACRO),
        TO(BASE), TO(NAV),   TO(MOUSE)
    )
};
