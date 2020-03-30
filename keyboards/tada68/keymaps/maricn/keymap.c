#include QMK_KEYBOARD_H

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.

#define LCTL_MA LCTL_T(KC_ESC)
// #define LSFT_MA LSFT_T(KC_DOWN)
// #define RSFT_MA SFT_T(KC_UP)
#define SPCE_MA LT(1,KC_SPC)
#define TABS_MA LT(2,KC_TAB)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

// Basic layer
[0] = LAYOUT_ansi(
 KC_GRV ,KC_1   ,KC_2   ,KC_3   ,KC_4   ,KC_5   ,KC_6   ,KC_7   ,KC_8   ,KC_9   ,KC_0   ,KC_MINS,KC_EQL ,KC_BSPC,KC_GRV ,\
 TABS_MA,KC_Q   ,KC_W   ,KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   KC_LBRC,KC_RBRC,KC_BSLS,KC_DEL ,\
 KC_CAPS,KC_A   ,KC_S   ,KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN,KC_QUOT,        KC_ENT ,KC_PGUP,\
 KC_LSFT,KC_Z   ,KC_X   ,KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM,KC_DOT, KC_SLSH,        KC_RSFT,KC_UP  ,KC_PGDN,\
 KC_LCTL,KC_LALT,KC_LGUI,                SPCE_MA,                        KC_RALT,KC_RGUI,KC_RCTL,KC_LEFT,KC_DOWN,KC_RGHT),

// Space layer
[1] = LAYOUT_ansi(
 KC_GRV ,KC_F1  ,KC_F2  ,KC_F3  ,KC_F4  ,KC_F5  ,KC_F6  ,KC_F7  ,KC_F8  ,KC_F9  ,KC_F10 ,KC_F11 ,KC_F12 ,_______,_______,\
 _______,_______,_______,KC_ESC ,_______,_______,KC_HOME,KC_PGDN,KC_PGUP,KC_END ,_______,_______,_______,KC_DEL ,_______,\
 KC_CAPS,KC_NUBS,_______,KC_DEL ,_______,_______,KC_LEFT,KC_DOWN,KC_UP  ,KC_RGHT,_______,_______,        _______,_______,\
 _______,BL_BRTG,BL_TOGG,BL_DEC ,BL_INC ,_______,_______,KC_MUTE,KC_VOLD,KC_VOLU,_______,        _______,_______,_______,\
 _______,_______,_______,                _______,                        _______,_______,_______,_______,_______,_______),

// Tab layer
[2] = LAYOUT_ansi(
 KC_GRV ,KC_F1  ,KC_F2  ,KC_F3  ,KC_F4  ,KC_F5  ,KC_F6  ,KC_F7  ,KC_F8  ,KC_F9  ,KC_F10 ,KC_F11 ,KC_F12 ,KC_INS ,_______,\
 _______,KC_BTN4,KC_BTN1,KC_BTN3,KC_BTN2,KC_BTN5,_______,_______,_______,_______,_______,_______,_______,_______,_______,\
 _______,_______,KC_WH_L,KC_WH_U,KC_WH_D,KC_WH_R,KC_MS_L,KC_MS_D,KC_MS_U,KC_MS_R,_______,_______,        _______,_______,\
 _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,        _______,_______,_______,\
 _______,_______,_______,                _______,                        _______,_______,_______,_______,_______,_______),

};
