#include QMK_KEYBOARD_H

#define LT1_QUOT LT(1, KC_QUOT)
#define LT2_SPC  LT(2, KC_SPC)
#define SFT_DEL  RSFT_T(KC_DEL)
#define SFT_INS  RSFT_T(KC_INS)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  // Default Layer
  LAYOUT(
    KC_ESC,  KC_Q, KC_W, KC_E, KC_R, KC_T,   KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC,
    KC_TAB,  KC_A, KC_S, KC_D, KC_F, KC_G,   KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_ENT,
    KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B,   KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, SFT_DEL,
               KC_LCTL, LT1_QUOT, KC_LGUI,   KC_RALT, LT2_SPC, KC_LALT
  ),
  // F-Keys, Numbers, symbols layer
  LAYOUT(
    KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,         KC_NO,   KC_7,    KC_8,    KC_9,    KC_MINS, KC_GRV,
    KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,        KC_NO,   KC_4,    KC_5,    KC_6,    KC_EQL,  KC_CAPS,
    KC_LSFT, KC_LBRC, KC_RBRC, LSFT(KC_9), LSFT(KC_0), KC_NUHS, KC_NO,   KC_1,    KC_2,    KC_3,    KC_BSLS, SFT_INS,
                               KC_TRNS, KC_NO,   KC_TRNS,       KC_TRNS, KC_0,    KC_TRNS
  ),
  // Navigation, media keys layer
  LAYOUT(
    KC_NO,   KC_NO,   KC_MSTP, KC_BRIU, KC_MPLY, KC_NO,      KC_NO,   KC_PGUP, KC_UP,   KC_PGDN, KC_NO,   KC_NO,
    KC_NO,   KC_NO,   KC_VOLD, KC_MUTE, KC_VOLU, KC_NO,      KC_PSCR, KC_LEFT, KC_DOWN, KC_RGHT, KC_NO,   KC_NO,
    KC_LSFT, KC_NO,   KC_MPRV, KC_BRID, KC_MNXT, KC_NO,      KC_NO,   KC_HOME, KC_NO,   KC_END,  KC_NO,   KC_RSFT,
                               KC_TRNS, KC_NO,   KC_TRNS,    KC_TRNS, KC_NO,   KC_TRNS
  ),
  // unsued, empty layer for copy pasta
  LAYOUT(
    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,      KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,      KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,      KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
                               KC_NO,   KC_NO,   KC_NO,      KC_NO,   KC_NO,   KC_NO
  ),
};

