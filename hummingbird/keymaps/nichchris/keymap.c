#include QMK_KEYBOARD_H
#include "hummingbird.h"
#include "keymap_norwegian.h"

//// definitions
// layers
enum layers {
    _BASE,
    _NAV,
    _MOU,
    _SYM,
    _SYS,
    _SYM_COPY,
};
// custom keycodes
enum custom_keycodes
{
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

// LEFT HAND HOME ROW MODS
#define SHT_H MT(MOD_LSFT, KC_H)
#define CTL_T MT(MOD_LCTL, KC_T)
#define ALT_S MT(MOD_LALT, KC_S)
#define GUI_R MT(MOD_LGUI, KC_R)
#define RALT_C MT(MOD_RALT, KC_C)
// RIGHT HAND HOME ROW MODS
#define SHT_N MT(MOD_RSFT, KC_N)
#define CTL_A MT(MOD_LCTL, KC_I)
#define ALT_I MT(MOD_LGUI, KC_A)
#define GUI_O MT(MOD_LALT, KC_O)
#define RALT_J MT(MOD_RALT, KC_J)

// OTHER
#define KC_MDOT LSFT(RALT(KC_SCLN))
// combos


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┬───┐┌───┬───┬───┬───┬───┐
     * │ Q │ W │ F │ P │ B ││ J │ L │ U │ Y │ ; │
     * ├───┼───┼───┼───┼───┤├───┼───┼───┼───┼───┤
     * │ A │ R │ S │ T │ G ││ M │ N │ E │ I │ O │
     * └───┼───┼───┼───┼───┘└───┼───┼───┼───┼───┘
     *     │ X │ C │ D │        │ H │ , │ . │
     *     └───┴───┼───┼───┐┌───┼───┼───┴───┘
     *             │ESC│SPC││RET│BSP│
     *             └───┴───┘└───┴───┘
     */
    [_BASE] = LAYOUT_hummingbird(
        KC_K,    KC_W,    KC_F,    KC_P,   NO_MINS, KC_NUHS,   KC_L,    KC_U,    KC_Y,   KC_X,
       GUI_R,   ALT_S,   CTL_T,   SHT_H,   NO_COMM,  KC_DOT,  SHT_N,   CTL_A,   ALT_I,   GUI_O,  
               RALT_C,    KC_G,    KC_D,                       KC_M,    KC_B,  RALT_J,
                                  L_NAV,     L_MOU,    KC_E,  L_SYM
    ),
    // [_NUM] = LAYOUT_hummingbird(
    //     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_PLUS, KC_7,    KC_8,    KC_9,    KC_ASTR,
    //     KC_LCTL, KC_LALT, KC_LGUI, KC_LSFT, XXXXXXX, KC_MINS, KC_4,    KC_5,    KC_6,    KC_SLASH,
    //              XXXXXXX, XXXXXXX, XXXXXXX,                   KC_1,    KC_2,    KC_3,
    //                                _______, _______, KC_LSFT, KC_0
    // ),
    // [_NAV] = LAYOUT_hummingbird(
    //     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_VOLD, KC_VOLU, KC_BSPC, KC_DEL,  KC_INS,   KC_MPLY,
    //     KC_LCTL, KC_LALT, KC_LGUI, KC_LSFT, KC_MUTE, KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT, KC_TAB,
    //              XXXXXXX, XXXXXXX, XXXXXXX,                   KC_HOME, XXXXXXX, KC_END,
    //                                _______, _______, _______, _______
    // ),
    // [_SYM] = LAYOUT_hummingbird(
    //     KC_GRV,  XXXXXXX, KC_DQT,  KC_MDOT, KC_LBRC, KC_RBRC, KC_BSLS, KC_PIPE, KC_LT,   KC_GT,
    //     KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_LPRN, KC_RPRN, KC_AMPR, KC_ASTR, KC_PERC, KC_CIRC,
    //              XXXXXXX, KC_QUOT, KC_UNDS,                   KC_MINS, KC_PLUS, KC_EQL,
    //                                _______, KC_LSFT, _______, _______
    // ),
    // [_FUN] = LAYOUT_hummingbird(
    //     QK_RBT,  QK_BOOT, _______, _______, _______, XXXXXXX, KC_F7,   KC_F8,   KC_F9,   KC_F12,
    //     _______, _______, _______, _______, _______, XXXXXXX, KC_F4,   KC_F5,   KC_F6,   KC_F11,
    //              _______, _______, _______,                   KC_F1,   KC_F2,   KC_F3,
    //                                _______, _______, _______, _______
    // )
};

layer_state_t layer_state_set_user(layer_state_t state)
{
    state = update_tri_layer_state(state, _NAV, _SYM, _SYS);
    state = update_tri_layer_state(state, _NAV, _MOU, _SYM_COPY);
    return state;
}
