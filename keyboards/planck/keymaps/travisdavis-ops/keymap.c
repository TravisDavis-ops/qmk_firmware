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


enum planck_layers {
  _BASE,
  _SYMBOLS,
  _NUMS,
  _NAV,
  _NUMPAD,
  _SHORTCUTS,
  _MANAGE,
};

enum planck_keycodes {
  BASE = SAFE_RANGE,
  //Custome Symbols
  RARW, //->
  LARW, //<-
  REARW, //=>
  LEARW, //<=
  //MACRO KEYCODE's
  DPRN, // () <LEFT>
  DBKT, // [] <LEFT>
  DCBKT,// {} <LEFT>
  DQTE, // '' <LEFT>
  DDQTE, // "" <LEFT>
  DGRVE, // `` <LEFT>
  TAG, // <><LEFT>
  JQRY, // $('')<LEFT><LEFT>
  AFN, // ()=>{} <LEFT> <ENTER>
  AAFN, // ()=>{} <LEFT> <ENTER>
  CLS, // ||{} <LEFT><ENTER>
  ACLS, // ||{} <LEFT><ENTER>
  //Common appends
  ASIM, // (vim) <ESCAPE><LSHFT>a;<ESCAPE>
  ACOM, // (vim) <ESCAPE><LSHFT>a,<ESCAPE>
  ADOT, // (vim) <ESCAPE><LSHFT>a.<ESCAPE>
};
#define LSYMQ LT(_SYMBOLS, KC_QUOTE)
#define OSC OSL(_SHORTCUTS)
#define NUMS MO(_NUMS)
#define NUMPAD MO(_NUMPAD)
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_BASE] = LAYOUT_planck_grid(
     KC_TAB,   KC_Q,       KC_W,       KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
     KC_ESC,   KC_A,       KC_S,       KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_ENT,
    KC_LSFT,   KC_Z,       KC_X,       KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_LEAD,
    KC_LCTL, NUMPAD,    KC_LGUI,    KC_LALT, XXXXXXX,  KC_SPC,  XXXXXXX, LSYMQ, OSC,    KC_LEAD, XXXXXXX, NUMS
),

[_SYMBOLS] = LAYOUT_planck_grid(
    _______, KC_EXLM,   KC_AT,  KC_HASH,   KC_DLR,    KC_LBRACKET, KC_RBRACKET,  KC_AMPR,  KC_ASTR, KC_PERC, KC_CIRC, _______,
    _______,   DCBKT,    DPRN, KC_GRAVE, KC_EQUAL,        KC_LPRN,     KC_RPRN, KC_MINUS, KC_QUOTE,    DQTE, DDQTE, KC_BSLS,
    _______,     CLS,     AFN,    REARW,     RARW,        KC_LCBR,     KC_RCBR,     LARW,    LEARW,    AAFN,    ACLS, _______,
    _______, _______, _______,  _______,  _______,        _______,     _______,  _______,  _______, _______, _______, _______
),

[_NUMS] = LAYOUT_planck_grid(
    _______,    DBKT, XXXXXXX, XXXXXXX,    KC_5, XXXXXXX, XXXXXXX,    KC_6,    DQTE,   DDQTE,   DGRVE, _______,
    _______,    KC_1,    KC_2,    KC_3,    KC_4, XXXXXXX, XXXXXXX,    KC_7,    KC_8,    KC_9,    KC_0, _______,
    _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
),

[_NAV] = LAYOUT_planck_grid(
    _______,   KC_PGUP, _______,    KC_UP,  _______,   RESET,    DEBUG, _______,   KC_UP,   _______,   KC_PGUP, _______,
    _______, KC_PGDOWN, KC_LEFT,  KC_DOWN, KC_RIGHT, _______,  _______, KC_LEFT, KC_DOWN,  KC_RIGHT, KC_PGDOWN, _______,
    _______,   _______, _______,  _______,  _______, _______,  _______, _______, _______,   _______,   _______, _______,
    _______,   _______, _______,  _______,  _______, _______,  _______, _______, _______,   _______,   _______, _______
),

[_NUMPAD] = LAYOUT_planck_grid(
    _______,   KC_F9,  KC_F10,  KC_F11,  KC_F12, _______, _______,    KC_7,    KC_8,    KC_9, _______, _______,
    _______,   KC_F5,   KC_F6,   KC_F7,   KC_F8, _______, _______,    KC_4,    KC_5,    KC_6, _______, _______,
    _______,   KC_F1,   KC_F2,   KC_F3,   KC_F4, _______, _______,    KC_1,    KC_2,    KC_3, _______, _______,
    _______, _______, _______, _______, _______, _______, _______,    KC_0, _______, _______, _______, _______
),

[_SHORTCUTS] = LAYOUT_planck_grid(
    _______,    JQRY, _______,    ASIM,    _______,     TAG, _______,      _______,    _______,    _______, _______, _______,
    _______, _______, _______,    ACOM,    _______, _______, _______,       _______,    _______,    _______, _______, _______,
    _______, _______, _______,    ADOT,   _______, _______, _______,      _______,    _______,    _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______,    _______,    _______,    _______, _______, _______
),

[_MANAGE] = LAYOUT_planck_grid(
    _______,   XXXXXXX,    KC_W,  XXXXXXX,  KC_MINUS, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     KC_UP,   XXXXXXX, _______,
    _______,      KC_A,    KC_S,     KC_D,  XXXXXXX,  XXXXXXX,      KC_H, XXXXXXX, KC_LEFT,   KC_DOWN,  KC_RIGHT, _______,
    _______,   XXXXXXX, XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,   XXXXXXX, XXXXXXX, XXXXXXX,   XXXXXXX,   XXXXXXX, _______,
    _______,   _______, _______,  _______,  _______,  _______,   _______, _______, _______,   _______,   _______, _______

)

};
void set_layer_color(uint16_t layer);

void set_layer_color(uint16_t layer){
  switch(layer){
    case _BASE:
      rgblight_setrgb(0x00,0x50,0x76);
      break;
    case _SYMBOLS:
      rgblight_setrgb(0x00,0x00,0xff);
      break;
    case _NUMS:
        rgblight_setrgb(0x00,0xff,0x00);
        break;
    case _NUMPAD:
        rgblight_setrgb(0x00,0x00,0x50);
        break;
    case _SHORTCUTS:
        rgblight_setrgb(0xff,0x50, 0x00);
        break;
    case _NAV:
        rgblight_setrgb(0xff, 0x00, 0xff);
        break;
    default:
        rgblight_setrgb(0x00,0x00,0x00);
        break;
  }
}

layer_state_t layer_state_set_user(layer_state_t state) {
  set_layer_color(get_highest_layer(state));
  return update_tri_layer_state(state, _SYMBOLS, _NUMS, _NAV);
}
LEADER_EXTERNS();
void matrix_scan_user(void){
  LEADER_DICTIONARY() {
    leading = false;
    leader_end();
    SEQ_ONE_KEY(KC_W) {
      tap_code(KC_ESC);
      SEND_STRING_DELAY(":set wrap!", 10);
      tap_code(KC_ENT);
    }
    SEQ_ONE_KEY(KC_S){
      tap_code(KC_ESC);
      SEND_STRING_DELAY(":set spell!", 0);
      tap_code(KC_ENT);
    }
    SEQ_ONE_KEY(KC_C){
      tap_code(KC_ESC);
      SEND_STRING_DELAY("z=", 0);
    }
  }
  return;
}
void keyboard_pre_init_user(void){ return; }
void matrix_init_user(void) { return; }
void keyboard_post_init_user(void){ return; }
void housekeeping_task_user(void) { return; }
bool handle_macro_keycode(uint16_t keycode, keyrecord_t *record);

bool handle_macro_keycode(uint16_t keycode, keyrecord_t *record){
  switch(keycode){
    case RARW:
      if(record->event.pressed){
        SEND_STRING_DELAY("->", 0);
      }
      return false;
      break;
    case LARW:
      if(record->event.pressed){
        SEND_STRING_DELAY("<-", 0);
      }
      return false;
      break;
    case REARW:
      if(record->event.pressed){
        SEND_STRING_DELAY("=>", 0);
      }
      return false;
      break;
    case LEARW:
      if(record->event.pressed){
        SEND_STRING_DELAY("<=", 0);
      }
      return false;
      break;
    case DPRN:
      if(record->event.pressed){
        SEND_STRING_DELAY("()", 0);
        tap_code(KC_LEFT);
      }
      return false;
      break;
    case DBKT:
      if(record->event.pressed){
        SEND_STRING_DELAY("[]", 0);
        tap_code(KC_LEFT);
      }
      return false;
      break;
    case DCBKT:
      if(record->event.pressed){
        SEND_STRING_DELAY("{}", 0);
        tap_code(KC_LEFT);
      }
      return false;
      break;
    case DQTE:
      if(record->event.pressed){
        SEND_STRING_DELAY("''", 0);
        tap_code(KC_LEFT);
      }
      return false;
      break;
    case DDQTE:
      if(record->event.pressed){
        SEND_STRING_DELAY("\"\"", 0);
        tap_code(KC_LEFT);
      }
      return false;
      break;
    case DGRVE:
      if(record->event.pressed){
        SEND_STRING_DELAY("``", 0);
        tap_code(KC_LEFT);
      }
      return false;
      break;
    case ASIM:
      if(record->event.pressed){
        tap_code(KC_ESC);
        SEND_STRING_DELAY("A;", 0);
        tap_code(KC_ESC);
      }
      return false;
      break;
    case ACOM:
      if(record->event.pressed){
        tap_code(KC_ESC);
        SEND_STRING_DELAY("A,", 0);
        tap_code(KC_ESC);
      }
      return false;
      break;
    case ADOT:
      if(record->event.pressed){
        tap_code(KC_ESC);
        SEND_STRING_DELAY("A.", 0);
        tap_code(KC_ESC);
      }
      return false;
      break;
    case JQRY:
      if(record->event.pressed){
        SEND_STRING_DELAY("$('')", 0);
        tap_code(KC_LEFT);
        tap_code(KC_LEFT);
      }
      return false;
      break;
    case AFN:
      if(record->event.pressed){
        tap_code(KC_ESC);
        tap_code(KC_A);
        SEND_STRING_DELAY("()=>{}", 0);
        tap_code(KC_LEFT);
        tap_code(KC_ENT);
        tap_code(KC_ESC);
      }
      return false;
      break;
    case CLS:
        if(record->event.pressed){
          tap_code(KC_ESC);
          tap_code(KC_A);
          SEND_STRING_DELAY("||{}", 0);
          tap_code(KC_LEFT);
          tap_code(KC_ENT);
          tap_code(KC_ESC);
        }
        return false;
        break;
    case TAG:
      if(record->event.pressed){
        SEND_STRING_DELAY("<>", 0);
        tap_code(KC_LEFT);
      }
      return false;
      break;
    case AAFN:
      if(record->event.pressed){
        tap_code(KC_ESC);
        tap_code(KC_A);
        SEND_STRING_DELAY("{}<=()", 0);
        tap_code(KC_ESC);
        SEND_STRING_DELAY("ba", 0);
        tap_code(KC_ENT);
        tap_code(KC_ESC);
        register_code(KC_LSFT);
        tap_code(KC_O);
        unregister_code(KC_LSFT);
        tap_code(KC_TAB);
      }
      return false;
      break;
    case ACLS:
      if(record->event.pressed){
        tap_code(KC_ESC);
        tap_code(KC_A);
        SEND_STRING_DELAY("{}||", 0);
        tap_code(KC_ESC);
        SEND_STRING_DELAY("ba", 0);
        tap_code(KC_ENT);
        tap_code(KC_ESC);
        register_code(KC_LSFT);
        tap_code(KC_O);
        unregister_code(KC_LSFT);
        tap_code(KC_TAB);
      }
      return false;
      break;
  }
  return true;
}
void shift_block(uint16_t keycode, keyrecord_t *record);
void shift_block(uint16_t keycode, keyrecord_t *record){
  uint8_t row = record->event.key.row;
  if(row >= 4 && keycode != KC_RSPC){
    del_mods(MOD_BIT(KC_RSFT));
  } else if (row < 4 && keycode != KC_LSPO) {
    del_mods(MOD_BIT(KC_LSFT));
  }
}
#define ENDPROCESSING bool
ENDPROCESSING process_record_user(uint16_t keycode, keyrecord_t *record) {
  //shift_block(keycode, record);
  bool handled = !handle_macro_keycode(keycode, record);
  if(handled){
    return false;
  }
  switch (keycode) {
    case BASE:
      if (record->event.pressed) {
        set_single_persistent_default_layer(_BASE);
      }
      return false;
      break;
    default:
      return true;
  }
}




