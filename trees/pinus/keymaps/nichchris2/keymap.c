/* Copyright 2022 @nichchris
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H
#include "quantum.h"
#include "keymap_norwegian.h"
// #include "oneshot.h"

enum layers {
    _BASE,
    _NAV,
    _MOU,
    _SYM,
    _SYS,
    _SYM_COPY,
};

enum custom_keycodes {
    BASE = SAFE_RANGE, 
    L_SYM,
    L_MOU,
    L_NAV,
    SYS,
};

// Shortcut to make keymap more readable

#define L_SYM LT(_SYM, KC_BSPC)
#define L_MOU LT(_MOU, KC_SPC)
#define L_NAV LT(_NAV, KC_ENT)

#define SYS MO(_SYS)

// COMBOS
#include "combos.h"

// global
#define SCRNSHT C(A(S(KC_P)))
#define WRKFLW1 A(C(S(G(KC_K))))
#define WRKFLW2 A(C(S(G(KC_Y))))

// layers
#define MO_NAV MO(1)
#define MO_SYM MO(2)
#define MO_NAVW MO(4)
#define MO_SYMW MO(5)

// mac
// #define PST G(KC_V)
// #define CPY G(KC_C)
// #define CUT G(KC_X)
// #define SALL G(KC_A)
// #define DWRD A(KC_BSPC)
// #define QUIT G(KC_Q)

// windows
#define PSTW C(KC_V)
#define CPYW C(KC_C)
#define CUTW C(KC_X)
#define SALLW C(KC_A)
#define DWRDW C(KC_BSPC)
#define QUITW A(KC_F4)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_BASE] = LAYOUT(
// ╭─────────────────────────────────────────────╮ ╭─────────────────────────────────────────────╮
        KC_K,    KC_W,    KC_F,    KC_P, XXXXXXX,    XXXXXXX,    KC_L,    KC_U,    KC_Y,    KC_X,
// ├─────────────────────────────────────────────┤ ├─────────────────────────────────────────────┤
    GUI_T(KC_R),ALT_T(KC_S),CTL_T(KC_T),SFT_T(KC_H), KC_NUHS, NO_MINS, RSFT_T(KC_N), CTL_T(KC_A), ALT_T(KC_I), GUI_T(KC_O),
// ├─────────────────────────────────────────────┤ ├─────────────────────────────────────────────┤
     XXXXXXX, ALGR_T(KC_C),    KC_G,    KC_D,  NO_COMM,   KC_DOT,    KC_M,    KC_B,ALGR_T(KC_J),  XXXXXXX,
// ╰─────────────────────────────────────────────┤ ├─────────────────────────────────────────────╯
                                L_NAV,   L_MOU,     KC_E,    L_SYM
//                   ╰───────────────────────────╯ ╰──────────────────╯
),

[_SYM]= LAYOUT(
// ╭─────────────────────────────────────────────╮ ╭─────────────────────────────────────────────╮
      NO_EQL,    KC_9,    KC_8,    KC_7, XXXXXXX,    XXXXXXX, NO_AMPR, NO_TILD, NO_PIPE, NO_GRV,//QK_GESC,
// ├─────────────────────────────────────────────┤ ├─────────────────────────────────────────────┤
        KC_3,    KC_2,    KC_1,    KC_0,  NO_MINS,   NO_CIRC, RSFT_T(NO_DQUO), CTL_T(NO_HASH), ALGR_T(NO_DLR),  GUI_T(NO_PERC),
// ├─────────────────────────────────────────────┤ ├─────────────────────────────────────────────┤
     XXXXXXX,    KC_6,    KC_5,    KC_4,  NO_PLUS,    KC_DOT, NO_EXLM, NO_QUES,ALGR_T(ALGR(NO_2)), XXXXXXX,
// ╰─────────────────────────────────────────────┤ ├─────────────────────────────────────────────╯
                                L_NAV,   L_MOU,     KC_ESC,    L_SYM
//                   ╰───────────────────────────╯ ╰──────────────────╯
),

[_SYM_COPY]= LAYOUT(
// ╭─────────────────────────────────────────────╮ ╭─────────────────────────────────────────────╮
      NO_EQL,    KC_9,    KC_8,    KC_7, XXXXXXX,    XXXXXXX, NO_AMPR, NO_TILD, NO_PIPE, NO_GRV,//QK_GESC,
// ├─────────────────────────────────────────────┤ ├─────────────────────────────────────────────┤
        KC_3,    KC_2,    KC_1,    KC_0,  NO_MINS,   NO_CIRC, RSFT_T(NO_DQUO), CTL_T(NO_HASH), ALGR_T(NO_DLR),  GUI_T(NO_PERC),
// ├─────────────────────────────────────────────┤ ├─────────────────────────────────────────────┤
     XXXXXXX,    KC_6,    KC_5,    KC_4,  NO_PLUS,    KC_DOT, NO_EXLM, NO_QUES,ALGR_T(ALGR(NO_2)), XXXXXXX,
// ╰─────────────────────────────────────────────┤ ├─────────────────────────────────────────────╯
                                L_NAV,   L_MOU,     KC_ESC,    L_SYM
//                   ╰───────────────────────────╯ ╰──────────────────╯
),
[_NAV]= LAYOUT(
// ╭─────────────────────────────────────────────╮ ╭─────────────────────────────────────────────╮
     KC_ESC,  KC_F2, KC_F5,  KC_TAB, XXXXXXX,    XXXXXXX, KC_PGDN,   KC_UP, KC_PGUP,  KC_ENT,
// ├─────────────────────────────────────────────┤ ├─────────────────────────────────────────────┤
    KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT,  KC_DEL, C(KC_BSPC), KC_LEFT, KC_DOWN, KC_RIGHT, KC_BTN5,
// ├─────────────────────────────────────────────┤ ├─────────────────────────────────────────────┤
     XXXXXXX,C(KC_X), C(KC_C), C(KC_V), C(KC_Z),    KC_BTN4, KC_HOME,  KC_END, KC_TAB, XXXXXXX,
// ╰─────────────────────────────────────────────┤ ├─────────────────────────────────────────────╯
                                L_NAV,   L_MOU,     KC_E,    L_SYM
//                   ╰───────────────────────────╯ ╰──────────────────╯
),

[_MOU] = LAYOUT(
// ╭─────────────────────────────────────────────╮ ╭─────────────────────────────────────────────╮
      KC_ESC,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,   XXXXXXX, KC_MPRV,  KC_MPLY,  KC_MNXT, KC_BSPC,
// ├─────────────────────────────────────────────┤ ├─────────────────────────────────────────────┤
      KC_TAB,  KC_WH_D, KC_BTN4, KC_BTN5, KC_WH_U,C(KC_BSPC), KC_VOLD,  KC_MUTE,  KC_VOLU, KC_ENT,
// ├─────────────────────────────────────────────┤ ├─────────────────────────────────────────────┤
     XXXXXXX,C(KC_TAB),G(KC_TAB),A(KC_TAB), KC_DEL,    KC_DEL,   XXXXXXX,  XXXXXXX,  XXXXXXX, XXXXXXX,
// ╰─────────────────────────────────────────────┤ ├─────────────────────────────────────────────╯
                                _______,  _______,  XXXXXXX, _______
//                   ╰───────────────────────────╯ ╰──────────────────╯
),

[_SYS] = LAYOUT(
// ╭─────────────────────────────────────────────╮ ╭─────────────────────────────────────────────╮
     KC_F1,    KC_F2,   KC_F3,   KC_F4, XXXXXXX, XXXXXXX,   KC_F7,    KC_F8,    KC_F9,    KC_F10,
// ├─────────────────────────────────────────────┤ ├─────────────────────────────────────────────┤
     KC_TAB,  KC_PSCR, XXXXXXX, KC_SLEP,  KC_F5,   KC_F6, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,
// ├─────────────────────────────────────────────┤ ├─────────────────────────────────────────────┤
     XXXXXXX,  KC_MPLY, KC_MPRV,  KC_MNXT, KC_F11, KC_F12,  KC_HOME,  KC_END, KC_ALGR, XXXXXXX,
// ╰─────────────────────────────────────────────┤ ├─────────────────────────────────────────────╯
                                _______,  _______,  XXXXXXX, _______
//                   ╰───────────────────────────╯ ╰──────────────────╯
),
// [_SYM] = LAYOUT(
// // ╭─────────────────────────────────────────────╮ ╭─────────────────────────────────────────────╮
//         KC_V,    KC_9,    KC_8,    KC_7, XXXXXXX,    XXXXXXX,    KC_L,    KC_U,    KC_Y,    KC_X,
// // ├─────────────────────────────────────────────┤ ├─────────────────────────────────────────────┤
//         KC_0,    KC_3,    KC_2,    KC_1, NO_MINS, KC_QUOT, SFT_T(KC_N), CTL_T(KC_A), ALT_T(KC_I), GUI_T(KC_O),
// // ├─────────────────────────────────────────────┤ ├─────────────────────────────────────────────┤
//      XXXXXXX,    KC_6,    KC_5,    KC_4, NO_COMM, KC_DOT, KC_M, KC_F, KC_J, XXXXXXX,
// // ╰─────────────────────────────────────────────┤ ├─────────────────────────────────────────────╯
//                                 _______,  _______,  XXXXXXX, _______
// //                   ╰───────────────────────────╯ ╰──────────────────╯
// ),

};

layer_state_t layer_state_set_user(layer_state_t state) {
    state = update_tri_layer_state(state, _NAV, _SYM, _SYS);
    state = update_tri_layer_state(state, _NAV, _MOU, _SYM_COPY);
    return state;
}

bool     muse_mode      = false;
uint8_t  last_muse_note = 0;
uint16_t muse_counter   = 0;
uint8_t  muse_offset    = 70;
uint16_t muse_tempo     = 70;