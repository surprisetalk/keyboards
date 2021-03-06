/* Copyright 2015-2017 Jack Humbert
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
#include "muse.h"


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
[_DVORAK] = LAYOUT_planck_grid(
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
[_QWERTY] = LAYOUT_planck_grid(
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
[_LOWER] = LAYOUT_planck_grid(
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
[_RAISE] = LAYOUT_planck_grid(
  _______, KC_F1  , KC_F2  , KC_F3  , KC_F4  , RGB_HUD, RGB_HUI, KC_PGDN, KC_UP  , KC_PGUP, _______, DVORAK, // AU_OFF , AU_ON  ,
  _______, KC_F5  , KC_F6  , KC_F7  , KC_F8  , RGB_SAD, RGB_SAI, KC_LEFT, KC_DOWN, KC_RGHT, _______, QWERTY, // MUV_IN , MUV_DE ,
  _______, KC_F9  , KC_F10 , KC_F11 , KC_F12 , RGB_VAD, RGB_VAI, KC_MPRV, KC_MPLY, KC_MNXT, _______, _______, // MU_OFF , MU_ON  ,
  _______, _______, _______, _______, _______, RGB_TOG, RGB_MOD, _______, KC_VOLD, KC_VOLU, _______, RESET  // MI_OFF , MI_ON  ,
)
// TODO: Consider adding PWR, SLP, WAKE, etc.

};

#ifdef AUDIO_ENABLE
  float plover_song[][2]     = SONG(PLOVER_SOUND);
  float plover_gb_song[][2]  = SONG(PLOVER_GOODBYE_SOUND);
#endif

layer_state_t layer_state_set_user(layer_state_t state) {
  return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
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
      // case BACKLIT:
      //   if (record->event.pressed) {
      //     register_code(KC_RSFT);
      //     #ifdef BACKLIGHT_ENABLE
      //       backlight_step();
      //     #endif
      //     #ifdef KEYBOARD_planck_rev5
      //       writePinLow(E6);
      //     #endif
      //   } else {
      //     unregister_code(KC_RSFT);
      //     #ifdef KEYBOARD_planck_rev5
      //       writePinHigh(E6);
      //     #endif
      //   }
      //   return false;
      //   break;
  }
  return true;
}

// bool muse_mode = false;
// uint8_t last_muse_note = 0;
// uint16_t muse_counter = 0;
// uint8_t muse_offset = 70;
// uint16_t muse_tempo = 50;
// 
// void encoder_update(bool clockwise) {
//   if (muse_mode) {
//     if (IS_LAYER_ON(_RAISE)) {
//       if (clockwise) {
//         muse_offset++;
//       } else {
//         muse_offset--;
//       }
//     } else {
//       if (clockwise) {
//         muse_tempo+=1;
//       } else {
//         muse_tempo-=1;
//       }
//     }
//   } else {
//     if (clockwise) {
//       #ifdef MOUSEKEY_ENABLE
//         tap_code(KC_MS_WH_DOWN);
//       #else
//         tap_code(KC_PGDN);
//       #endif
//     } else {
//       #ifdef MOUSEKEY_ENABLE
//         tap_code(KC_MS_WH_UP);
//       #else
//         tap_code(KC_PGUP);
//       #endif
//     }
//   }
// }
// 
// void dip_switch_update_user(uint8_t index, bool active) {
//     switch (index) {
//         case 0: {
// #ifdef AUDIO_ENABLE
//             static bool play_sound = false;
// #endif
//             if (active) {
// #ifdef AUDIO_ENABLE
//                 if (play_sound) { PLAY_SONG(plover_song); }
// #endif
//                 layer_on(_ADJUST);
//             } else {
// #ifdef AUDIO_ENABLE
//                 if (play_sound) { PLAY_SONG(plover_gb_song); }
// #endif
//                 layer_off(_ADJUST);
//             }
// #ifdef AUDIO_ENABLE
//             play_sound = true;
// #endif
//             break;
//         }
//         case 1:
//             if (active) {
//                 muse_mode = true;
//             } else {
//                 muse_mode = false;
//             }
//     }
// }
// 
// void matrix_scan_user(void) {
// #ifdef AUDIO_ENABLE
//     if (muse_mode) {
//         if (muse_counter == 0) {
//             uint8_t muse_note = muse_offset + SCALE[muse_clock_pulse()];
//             if (muse_note != last_muse_note) {
//                 stop_note(compute_freq_for_midi_note(last_muse_note));
//                 play_note(compute_freq_for_midi_note(muse_note), 0xF);
//                 last_muse_note = muse_note;
//             }
//         }
//         muse_counter = (muse_counter + 1) % muse_tempo;
//     } else {
//         if (muse_counter) {
//             stop_all_notes();
//             muse_counter = 0;
//         }
//     }
// #endif
// }
// 
// bool music_mask_user(uint16_t keycode) {
//   switch (keycode) {
//     case RAISE:
//     case LOWER:
//       return false;
//     default:
//       return true;
//   }
// }
