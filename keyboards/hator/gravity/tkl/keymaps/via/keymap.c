/*

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.

#include QMK_KEYBOARD_H


const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [1] = { ENCODER_CCW_CW(RGB_VAD, RGB_VAI) },
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {


/*               +--------------------------------------------------------------------------+----------------+
                 | ESC |  | F1 | F2 | F3 | F4 | | F5 | F6 | F7 | F8 | | F9| F10| F11| F12|  | |PSCR|SCLK|PAUS|
                 +--------------------------------------------------------------------------+------|----|----|
                 |  ~  |  1 |  2 |  3 |  4 |  5 |  6 |  7 |  8 |  9 |  0 |  - |  = | BACKSP | |INS |HOME|PGUP|
                 +--------------------------------------------------------------------------+------|----|----|
                 |  TAB  |  Q |  W |  E |  R |  T |  Y |  U |  I |  O |  P |  [ |  ] |   \  | |DEL |END |PGDN|
                 +--------------------------------------------------------------------------+------|----|----|
                 | CAPSLCK  |  A |  S |  D |  F |  G |  H |  J |  K |  L | ; | ' |  RETURN  |   B1   B2  NC  |
                 +--------------------------------------------------------------------------+      |----|    |
                 | LSHIFT     |  Z |  X |  C |  V |  B |  N |  M | , | . |  / |   RSHIFT    |      | UP |    |
                 +--------------------------------------------------------------------------+------|----|----|
                 |LCTRL| LGUI| LALT |            SPACE            | RALT| RGUI | FN | RCTRL | |LFT |DWN |RGT |
                 +--------------------------------------------------------------------------+----------------+
*/
    /*  Row:        0           1          2          3        4        5        6         7        8        9          10         11         12         13         14         15         16    */
    [0] = {     {   KC_ESC,     KC_F1,     KC_F2,     KC_F3,   KC_F4,   KC_F5,   KC_F6,    KC_F7,   KC_F8,   KC_F9,     KC_F10,    KC_F11,    KC_F12,    KC_NO,     KC_PSCR,   KC_SCRL,   KC_PAUS},
                {   KC_GRV,     KC_1,      KC_2,      KC_3,    KC_4,    KC_5,    KC_6,     KC_7,    KC_8,    KC_9,      KC_0,      KC_MINS,   KC_EQL,    KC_BSPC,   KC_INS,    KC_HOME,   KC_PGUP},
                {   KC_TAB,     KC_Q,      KC_W,      KC_E,    KC_R,    KC_T,    KC_Y,     KC_U,    KC_I,    KC_O,      KC_P,      KC_LBRC,   KC_RBRC,   KC_BSLS,   KC_DEL,    KC_END,    KC_PGDN},
                {   KC_CAPS,    KC_A,      KC_S,      KC_D,    KC_F,    KC_G,    KC_H,     KC_J,    KC_K,    KC_L,      KC_SCLN,   KC_QUOT,   KC_NO,     KC_ENT,    KC_MPRV,   KC_MNXT,   KC_NO},
                {   KC_LSFT,    KC_NO,     KC_Z,      KC_X,    KC_C,    KC_V,    KC_B,     KC_N,    KC_M,    KC_COMM,   KC_DOT,    KC_SLSH,   KC_NO,     KC_RSFT,   KC_NO,     KC_UP,     KC_NO},
                {   KC_LCTL,    KC_LGUI,   KC_LALT,   KC_NO,   KC_NO,   KC_NO,   KC_SPC,   KC_NO,   KC_NO,   KC_NO,     KC_RALT,   MO(1),     KC_APP,   KC_RCTL,   KC_LEFT,   KC_DOWN,   KC_RGHT}
              },

    /*  Row:        0          1          2          3        4        5        6         7        8        9          10         11         12         13         14         15         16        */
    [1] =   {   {   QK_BOOT,  KC_WHOM,  KC_CALC,  KC_MYCM,  KC_MAIL,  RGB_VAD,  RGB_VAI,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,   _______,   _______,  _______,  KC_PSCR,  KC_SLEP,   RGB_TOG },
                {   _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,   _______,   _______,   _______,  _______,    KC_NO,  RGB_M_P,  RGB_HUI },
                {   _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,   _______,   _______,   _______,  _______,    KC_NO,  _______,  RGB_SPI },
                {   _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,   _______,   _______,     KC_NO,  _______,    KC_CONTROL_PANEL,  _______,    KC_NO },
                {   _______,    KC_NO,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,   _______,   _______,     KC_NO,  _______,  _______,  KC_VOLU,  RGB_SAI },
                {   _______,  KC_LALT,  KC_LGUI,    KC_NO,    KC_NO,    KC_NO,  NK_TOGG,    KC_NO,    KC_NO,    KC_NO,   _______,   _______,   _______,  _______,  RGB_MODE_REVERSE,   KC_VOLD,    RGB_MODE_FORWARD }
            },

};

bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
    if (host_keyboard_led_state().caps_lock) {
        RGB_MATRIX_INDICATOR_SET_COLOR(13, 255, 255, 255); // assuming caps lock is at led #13 (rbg)
    } else {
        RGB_MATRIX_INDICATOR_SET_COLOR(13, 0, 0, 0);
    }
    return false;
}
