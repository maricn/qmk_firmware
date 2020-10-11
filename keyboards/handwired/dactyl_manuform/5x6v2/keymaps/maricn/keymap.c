/* A standard layout for the Dactyl Manuform 5x6 Keyboard */ 

#include QMK_KEYBOARD_H
#include "5x6v2.h"


#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2

/* #define RAISE MO(_RAISE) */
/* #define LOWER MO(_LOWER) */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWERTY] = LAYOUT_5x6v2(
     KC_TAB , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   ,                         KC_6   ,  KC_7  , KC_8   , KC_9  , KC_0  , KC_BSPC ,
     KC_CAPS, KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   ,                         KC_Y   ,  KC_U  , KC_I   , KC_O  , KC_P  ,KC_BSLASH,
     KC_LSFT, KC_A   , KC_S   , KC_D   , KC_F   , KC_G   ,                         KC_H   ,  KC_J  , KC_K   , KC_L  ,KC_SCLN, KC_QUOT ,
     KC_LCTL, KC_Z   , KC_X   , KC_C   , KC_V   ,                                            KC_N  , KC_M   ,KC_COMM, KC_DOT, KC_SLSH ,
              KC_LCTL, KC_B   ,                                                                              KC_MINS, KC_EQL,
                                KC_LGUI, KC_LCTL, KC_LSFT,                         KC_RSFT, KC_RCTL, KC_RGUI,
                                _______, KC_SPC , KC_LALT,                         KC_RALT, KC_SPC , _______
  )

/*   [_RAISE] = LAYOUT_5x6v2( */
/*        KC_F12 , KC_F1 , KC_F2 , KC_F3 , KC_F4 , KC_F5 ,                        KC_F6  , KC_F7 , KC_F8 , KC_F9 ,KC_F10 ,KC_F11 , */
/*        _______,_______,_______,_______,_______,KC_LBRC,                        KC_RBRC,_______,KC_NLCK,KC_INS ,KC_SLCK,KC_MUTE, */
/*        _______,KC_LEFT,KC_UP  ,KC_DOWN,KC_RGHT,KC_LPRN,                        KC_RPRN,KC_MPRV,KC_MPLY,KC_MNXT,_______,KC_VOLU, */
/*        _______,_______,_______,_______,_______,_______,                        _______,_______,_______,_______,_______,KC_VOLD, */
/*                                                _______,_______,            KC_EQL ,_______, */
/*                                                _______,_______,            _______,_______, */
/*                                                _______,_______,            _______,_______, */
/*                                                _______,_______,            _______,_______ */
/*   ), */
};
