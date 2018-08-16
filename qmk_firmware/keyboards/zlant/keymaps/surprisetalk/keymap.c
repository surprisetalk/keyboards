#include QMK_KEYBOARD_H

enum planck_layers {
  _DVORAK = 0,
  _QWERTY,
  _LOWER,
  _RAISE,
};

enum planck_keycodes {
  DVORAK = SAFE_RANGE,
  QWERTY,
  LOWER,
  RAISE,

  OS_LNX,
  OS_OSX,
};

#define _______ KC_TRNS

#define TH_ESC  GUI_T( KC_ESC  )
#define TH_SPC  SFT_T( KC_SPC  )
#define TH_LPRN GUI_T( KC_LPRN )
#define TH_BSPC LT(   _LOWER, KC_BSPC )
#define TH_ENT  LT(   _RAISE, KC_ENT  )
// Ideas for the thumb keys.

#define UC_STAR UC(0x2605) // ★

enum unicode_name {
  GRIN , // grinning face 😊
  TJOY , // tears of joy 😂
  SMILE, // grining face with smiling eyes 😁
  HEART, // heart ❤
  EYERT, // smiling face with heart shaped eyes 😍
  CRY  , // crying face 😭
  SMEYE, // smiling face with smiling eyes 😊
  UNAMU, // unamused 😒
  KISS , // kiss 😘
  HART2, // two hearts 💕
  WEARY, // weary 😩
  OKHND, // ok hand sign 👌
  PENSV, // pensive 😔
  SMIRK, // smirk 😏
  RECYC, // recycle ♻
  WINK , // wink 😉
  THMUP, // thumb up 👍
  THMDN, // thumb down 👎
  PRAY , // pray 🙏
  PHEW , // relieved 😌
  MUSIC, // musical notes
  FLUSH, // flushed 😳
  CELEB, // celebration 🙌
  CRY2 , // crying face 😢
  COOL , // smile with sunglasses 😎
  NOEVS, // see no evil
  NOEVH, // hear no evil
  NOEVK, // speak no evil
  POO  , // pile of poo
  EYES , // eyes
  VIC  , // victory hand
  BHART, // broken heart
  SLEEP, // sleeping face
  SMIL2, // smiling face with open mouth & sweat
  HUNRD, // 100
  CONFU, // confused
  TONGU, // face with tongue & winking eye
  DISAP, // disappointed
  YUMMY, // face savoring delicious food
  CLAP , // hand clapping
  FEAR , // face screaming in fear
  HORNS, // smiling face with horns
  HALO , // smiling face with halo
  BYE  , // waving hand
  SUN  , // sun
  MOON , // moon
  SKULL, // skull
  ULAMB, // lambda
};

const uint32_t PROGMEM unicode_map[] = {
  [GRIN ] = 0x1F600,
  [TJOY ] = 0x1F602,
  [SMILE] = 0x1F601,
  [HEART] = 0x2764,
  [EYERT] = 0x1f60d,
  [CRY  ] = 0x1f62d,
  [SMEYE] = 0x1F60A,
  [UNAMU] = 0x1F612,
  [KISS ] = 0x1F618,
  [HART2] = 0x1F495,
  [WEARY] = 0x1F629,
  [OKHND] = 0x1F44C,
  [PENSV] = 0x1F614,
  [SMIRK] = 0x1F60F,
  [RECYC] = 0x267B,
  [WINK ] = 0x1F609,
  [THMUP] = 0x1F44D,
  [THMDN] = 0x1F44E,
  [PRAY ] = 0x1F64F,
  [PHEW ] = 0x1F60C,
  [MUSIC] = 0x1F3B6,
  [FLUSH] = 0x1F633,
  [CELEB] = 0x1F64C,
  [CRY2 ] = 0x1F622,
  [COOL ] = 0x1F60E,
  [NOEVS] = 0x1F648,
  [NOEVH] = 0x1F649,
  [NOEVK] = 0x1F64A,
  [POO  ] = 0x1F4A9,
  [EYES ] = 0x1F440,
  [VIC  ] = 0x270C,
  [BHART] = 0x1F494,
  [SLEEP] = 0x1F634,
  [SMIL2] = 0x1F605,
  [HUNRD] = 0x1F4AF,
  [CONFU] = 0x1F615,
  [TONGU] = 0x1F61C,
  [DISAP] = 0x1F61E,
  [YUMMY] = 0x1F60B,
  [CLAP ] = 0x1F44F,
  [FEAR ] = 0x1F631,
  [HORNS] = 0x1F608,
  [HALO ] = 0x1F607,
  [BYE  ] = 0x1F44B,
  [SUN  ] = 0x2600,
  [MOON ] = 0x1F314,
  [SKULL] = 0x1F480,
  [ULAMB] = 0x039B,
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Dvorak
 * ,-----------------------------------------------------------------------------------.
 * |  `   |   "  |   ,  |   .  |   P  |   Y  |   F  |   G  |   C  |   R  |   L  |  /   |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | Esc  |   A  |   O  |   E  |   U  |   I  |   D  |   H  |   T  |   N  |   S  |  -   |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | Bksp |   ;  |   Q  |   J  |   K  |   X  |   B  |   M  |   W  |   V  |   Z  |  =   |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Tab  |   {  |   [  |   (  |  Gui |Lower |Space |Enter |   )  |   ]  |   }  |  \   |
 * `-----------------------------------------------------------------------------------'
 */
[_DVORAK] = {
  {ALT_T(KC_GRV ), KC_QUOT, KC_COMM, KC_DOT , KC_P   , KC_Y   , KC_F   , KC_G   , KC_C   , KC_R   , KC_L   , ALT_T(KC_SLSH)},
  {CTL_T(KC_ESC ), KC_A   , KC_O   , KC_E   , KC_U   , KC_I   , KC_D   , KC_H   , KC_T   , KC_N   , KC_S   , CTL_T(KC_MINS)},
  {SFT_T(KC_BSPC), KC_SCLN, KC_Q   , KC_J   , KC_K   , KC_X   , KC_B   , KC_M   , KC_W   , KC_V   , KC_Z   , SFT_T(KC_EQL )},
  {GUI_T(KC_TAB ), KC_LCBR, KC_LBRC, TH_LPRN, LOWER  , TH_BSPC, KC_SPC , TH_ENT , KC_RPRN, KC_RBRC, KC_RCBR, GUI_T(KC_BSLS)}
},

/* Qwerty
 * ,-----------------------------------------------------------------------------------.
 * |  `   |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  |  [   |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | Esc  |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |  "   |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | Bksp |   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /  |  ]   |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Tab  |   {  |   -  |   (  |  Gui |Lower |Space |Enter |   )  |   =  |   }  |  \   |
 * `-----------------------------------------------------------------------------------'
 */
[_QWERTY] = {
  // BUG: a lot of these are wrong when translating to dvorak...
  {ALT_T(KC_GRV ), KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   , KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , ALT_T(KC_LBRC)},
  {CTL_T(KC_ESC ), KC_A   , KC_S   , KC_D   , KC_F   , KC_G   , KC_H   , KC_J   , KC_K   , KC_L   , KC_SCLN, CTL_T(KC_MINS)},
  {SFT_T(KC_BSPC), KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   , KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, SFT_T(KC_RBRC)},
  {GUI_T(KC_TAB ), KC_LCBR, KC_MINS, TH_LPRN, LOWER  , TH_BSPC, KC_SPC , TH_ENT , KC_RPRN, KC_EQL , KC_RCBR, GUI_T(KC_BSLS)}
},

/* Lower
 * ,-----------------------------------------------------------------------------------.
 * |   `  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  |      |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |   4  |   5  |   6  |   _  |      |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |   1  |   2  |   3  |   +  |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |   0  |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_LOWER] = {
  {X(MOON), _______, KC_COMM, KC_ASTR, KC_AMPR, _______, _______, KC_7   , KC_8   , KC_9   , KC_DOT , KC_SLSH},
  {KC_CAPS, _______, KC_CIRC, KC_PERC, KC_DLR , _______, _______, KC_4   , KC_5   , KC_6   , KC_UNDS, KC_MINS},
  {_______, _______, KC_HASH, KC_AT  , KC_EXLM, _______, _______, KC_1   , KC_2   , KC_3   , KC_PLUS, KC_EQL },
  {_______, _______, _______, _______, _______, _______, _______, KC_0   , _______, _______, _______, KC_BSLS}
},

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
[_RAISE] = {
  {_______, KC_F1  , KC_F2  , KC_F3  , KC_F4  , _______, _______, KC_PGDN, KC_UP  , KC_PGUP, _______, DVORAK   }, // AU_OFF , AU_ON  ,
  {_______, KC_F5  , KC_F6  , KC_F7  , KC_F8  , _______, _______, KC_LEFT, KC_DOWN, KC_RGHT, _______, QWERTY   }, // MUV_IN , MUV_DE ,
  {_______, KC_F9  , KC_F10 , KC_F11 , KC_F12 , _______, _______, KC_MPRV, KC_MPLY, KC_MNXT, _______, KC_EJCT  }, // MU_OFF , MU_ON  ,
  {_______, _______, _______, _______, _______, _______, _______, _______, KC_VOLD, KC_VOLU, _______, RESET    }  // MI_OFF , MI_ON  ,
}
// TODO: Consider adding PWR, SLP, WAKE, etc.

};

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
    case LOWER:
      if (record->event.pressed) {
        layer_on(_LOWER);
      } else {
        layer_off(_LOWER);
      }
      return false;
      break;
    case RAISE:
      if (record->event.pressed) {
        layer_on(_RAISE);
      } else {
        layer_off(_RAISE);
      }
      return false;
      break;

    case OS_LNX:
      set_unicode_input_mode(UC_LNX);
      return false;
      break;
    case OS_OSX:
      set_unicode_input_mode(UC_OSX);
      return false;
      break;
  }
  return true;
}

void matrix_init_user(void) {
  set_unicode_input_mode(UC_LNX);
};
