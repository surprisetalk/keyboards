#include QMK_KEYBOARD_H

enum planck_layers {
  _DVORAK,
  _QWERTY,
  _LOWER,
  _RAISE,
  _ADJUST
};

enum planck_keycodes {
  DVORAK = SAFE_RANGE,
  QWERTY
};

#define LOWER MO(_LOWER)
#define RAISE MO(_RAISE)

#define TH_ESC  GUI_T( KC_ESC )
#define TH_SPC  SFT_T( KC_SPC )
#define TH_BSPC LT( _LOWER, KC_BSPC )
#define TH_ENT  LT( _RAISE, KC_ENT  )
// Ideas for the thumb keys.

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Dvorak
 * ,-----------------------------------------------------------------------------------.
 * |  `   |   "  |   ,  |   .  |   P  |   Y  |   F  |   G  |   C  |   R  |   L  |  /   |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | Esc  |   A  |   O  |   E  |   U  |   I  |   D  |   H  |   T  |   N  |   S  |  -   |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | Bksp |   ;  |   Q  |   J  |   K  |   X  |   B  |   M  |   W  |   V  |   Z  |  =   |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Tab  |   {  |   [  |   (  |  Esc | Bksp |Space |Enter |   )  |   ]  |   }  |  \   |
 * `-----------------------------------------------------------------------------------'
 */
[_DVORAK] = LAYOUT_ortho_4x12(
  ALT_T(KC_GRV ), KC_QUOT, KC_COMM, KC_DOT , KC_P   , KC_Y   , KC_F   , KC_G   , KC_C   , KC_R   , KC_L   , ALT_T(KC_SLSH),
  CTL_T(KC_ESC ), KC_A   , KC_O   , KC_E   , KC_U   , KC_I   , KC_D   , KC_H   , KC_T   , KC_N   , KC_S   , CTL_T(KC_MINS),
  SFT_T(KC_BSPC), KC_SCLN, KC_Q   , KC_J   , KC_K   , KC_X   , KC_B   , KC_M   , KC_W   , KC_V   , KC_Z   , SFT_T(KC_EQL ),
  GUI_T(KC_TAB ), KC_LCBR, KC_LBRC, KC_LPRN, TH_ESC , TH_BSPC, KC_SPC , TH_ENT , KC_RPRN, KC_RBRC, KC_RCBR, GUI_T(KC_BSLS)
),

/* Qwerty
 * ,-----------------------------------------------------------------------------------.
 * |  `   |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  |  [   |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | Esc  |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |  "   |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | Bksp |   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /  |  ]   |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Tab  |   {  |   -  |   (  |  Esc | Bksp |Space |Enter |   )  |   =  |   }  |  \   |
 * `-----------------------------------------------------------------------------------'
 */
[_QWERTY] = LAYOUT_ortho_4x12(
  ALT_T(KC_GRV ), KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   , KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , ALT_T(KC_LBRC),
  CTL_T(KC_ESC ), KC_A   , KC_S   , KC_D   , KC_F   , KC_G   , KC_H   , KC_J   , KC_K   , KC_L   , KC_SCLN, CTL_T(KC_QUOT),
  SFT_T(KC_BSPC), KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   , KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, SFT_T(KC_RBRC),
  GUI_T(KC_TAB ), KC_UNDS, KC_MINS, KC_LPRN, TH_ESC , TH_BSPC, KC_SPC , TH_ENT , KC_RPRN, KC_EQL , KC_PLUS, GUI_T(KC_BSLS)
),

/* Lower
 * ,-----------------------------------------------------------------------------------.
 * |      |      |  ,   |  *   |  &   |      |      |   7  |   8  |   9  |   .  |  /   |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | Caps |      |  ^   |  %   |  $   |      |      |   4  |   5  |   6  |   _  |  -   |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | Bksp |      |  #   |  @   |  !   |      |      |   1  |   2  |   3  |   +  |  =   |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |   0  |      |      |      |  \   |
 * `-----------------------------------------------------------------------------------'
 */
[_LOWER] = LAYOUT_ortho_4x12(
  _______, _______, KC_COMM, KC_ASTR, KC_AMPR, _______, _______, KC_7   , KC_8   , KC_9   , KC_DOT , KC_SLSH,
  KC_CAPS, _______, KC_CIRC, KC_PERC, KC_DLR , _______, _______, KC_4   , KC_5   , KC_6   , KC_UNDS, KC_MINS,
  KC_BSPC, _______, KC_HASH, KC_AT  , KC_EXLM, _______, _______, KC_1   , KC_2   , KC_3   , KC_PLUS, KC_EQL,
  _______, _______, _______, _______, _______, _______, _______, KC_0   , _______, _______, _______, KC_BSLS
),


/* Raise
 * ,-----------------------------------------------------------------------------------.
 * |   `  |  F1  |  F2  |  F3  |  F4  |      |      | VOLD |  UP  | VOLU |      |      |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |  F5  |  F6  |  F7  |  F8  |      |      | LEFT | DOWN | RIGHT|   /  |  =   |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |  F9  |  F10 |  F11 |  F12 |      |      | MPRV | MPLY | MNXT |      |  \   |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_RAISE] = LAYOUT_ortho_4x12(
  _______, KC_F1  , KC_F2  , KC_F3  , KC_F4  , RGB_HUD, RGB_HUI, KC_PGDN, KC_UP  , KC_PGUP, _______, DVORAK, // AU_OFF , AU_ON  ,
  _______, KC_F5  , KC_F6  , KC_F7  , KC_F8  , RGB_SAD, RGB_SAI, KC_LEFT, KC_DOWN, KC_RGHT, _______, QWERTY, // MUV_IN , MUV_DE ,
  _______, KC_F9  , KC_F10 , KC_F11 , KC_F12 , RGB_VAD, RGB_VAI, KC_MPRV, KC_MPLY, KC_MNXT, _______, _______, // MU_OFF , MU_ON  ,
  _______, _______, _______, _______, _______, RGB_TOG, RGB_MOD, _______, KC_VOLD, KC_VOLU, _______, RESET  // MI_OFF , MI_ON  ,
)
// TODO: Consider adding PWR, SLP, WAKE, etc.

};


void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case DVORAK:
      if (record->event.pressed) {
        set_single_persistent_default_layer(_DVORAK);
      }
      return false;
      break;
    case QWERTY:
      if (record->event.pressed) {
        set_single_persistent_default_layer(_QWERTY);
      }
      return false;
      break;
  }
  return true;
}

void led_set_user(uint8_t usb_led) {

    if (IS_LED_ON(usb_led, USB_LED_NUM_LOCK)) {

    } else {

    }

    if (IS_LED_ON(usb_led, USB_LED_CAPS_LOCK)) {

    } else {

    }

    if (IS_LED_ON(usb_led, USB_LED_SCROLL_LOCK)) {

    } else {

    }

    if (IS_LED_ON(usb_led, USB_LED_COMPOSE)) {

    } else {

    }

    if (IS_LED_ON(usb_led, USB_LED_KANA)) {

    } else {

    }

}
