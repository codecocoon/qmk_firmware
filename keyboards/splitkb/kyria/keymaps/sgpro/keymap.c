/* Copyright 2019 Thomas Baart <thomas@splitkb.com>
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

#define KC_MAC_UNDO LGUI(KC_Z)
#define KC_MAC_CUT LGUI(KC_X)
#define KC_MAC_COPY LGUI(KC_C)
#define KC_MAC_PASTE LGUI(KC_V)
#define KC_PC_UNDO LCTL(KC_Z)
#define KC_PC_CUT LCTL(KC_X)
#define KC_PC_COPY LCTL(KC_C)
#define KC_PC_PASTE LCTL(KC_V)
#define ES_LESS_MAC KC_GRAVE
#define ES_GRTR_MAC LSFT(KC_GRAVE)
#define ES_BSLS_MAC ALGR(KC_6)
#define NO_PIPE_ALT KC_GRAVE
#define NO_BSLS_ALT KC_EQUAL
#define LSA_T(kc) MT(MOD_LSFT | MOD_LALT, kc)
#define BP_NDSH_MAC ALGR(KC_8)
#define SE_SECT_MAC ALGR(KC_6)

enum custom_keycodes {
  RGB_SLD = SAFE_RANGE,
  ST_MACRO_0,
  ST_MACRO_1,
  ST_MACRO_2,
  ST_MACRO_3,
  ST_MACRO_4,
  ST_MACRO_5,
  ST_MACRO_6,
  ST_MACRO_7,
  ST_MACRO_8,
  ST_MACRO_9,
  ST_MACRO_10,
};


enum tap_dance_codes {
  DANCE_0,
  DANCE_1,
  DANCE_2,
  DANCE_3,
  DANCE_4,
  DANCE_5,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
     KC_TAB,        KC_Q,       TD(DANCE_0),  KC_E,                  KC_R,           KC_T,                                                                             KC_Y,           KC_U,           KC_I,            KC_O,           KC_P,       KC_BSLASH,
     KC_LCTL,       KC_A,       KC_S,         LT(9,KC_D),            LT(10,KC_F),    KC_G,                                                                             KC_H,           KC_J,           KC_K,            KC_L,           KC_SCOLON,  MT(MOD_RCTL, KC_QUOTE),
     KC_LSHIFT,     KC_Z,       KC_X,         KC_C,                  KC_V,           KC_B,     KC_ESCAPE,       KC_CAPSLOCK,        KC_LANG1,          TD(DANCE_1),    KC_N,           TD(DANCE_2),    KC_COMM,         KC_DOT,         KC_SLASH,   KC_RSHIFT,
                                              LT(11,KC_TRANSPARENT), KC_LGUI,        KC_LALT,  LT(12,KC_SPACE), LT(12,KC_BSPACE),   LT(8,KC_DELETE),   LT(8,KC_ENTER), KC_RALT,        KC_RGUI,        KC_TRANSPARENT
  ),
  [1] = LAYOUT(
    LT(5,KC_TAB),   KC_TRANSPARENT, KC_W,           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, LT(3,KC_S),     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LT(4,KC_C),     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_LANG1,       KC_TRANSPARENT, KC_TRANSPARENT, KC_M,           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LT(2,KC_SPACE), LT(2,KC_BSPACE),KC_TRANSPARENT, KC_TRANSPARENT, KC_F8,          LSFT(KC_F8),    TD(DANCE_3)
  ),
  [2] = LAYOUT(
    KC_WWW_FORWARD, KC_HOME,        KC_PGUP,        KC_APPLICATION, LCTL(KC_F4),    LCTL(KC_A),                                                                     KC_NO,          KC_MS_WH_DOWN,  KC_MS_WH_UP,    KC_NO,          KC_NO,          KC_TRANSPARENT,
    KC_WWW_BACK,    KC_END,         KC_PGDOWN,      KC_MS_BTN2,     KC_MS_BTN1,     KC_ENTER,                                                                       KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_NO,          KC_TRANSPARENT,
    LSFT(KC_PC_UNDO),KC_PC_UNDO,    KC_PC_CUT,      KC_PC_COPY,     KC_PC_PASTE,    KC_F2,         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,  KC_NO,          KC_RCBR,        KC_LCBR,        KC_NO,          KC_NO,          KC_TRANSPARENT,
                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,           KC_F3,          LSFT(KC_F3),    KC_NO
  ),
  [3] = LAYOUT(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          ST_MACRO_0,     KC_NO,                                                                          KC_NO,          LCTL(LSFT(KC_MINUS)),LALT(LCTL(KC_SCOLON)),KC_NO,          KC_NO,          KC_NO,
    KC_TRANSPARENT, LALT(KC_A),     KC_TRANSPARENT, KC_NO,          LCTL(LSFT(KC_F)),KC_NO,                                                                         LCTL(LSFT(KC_H)),LCTL(KC_MINUS),     KC_NO,                LALT(LCTL(KC_L)),KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_PC_COPY,     KC_PC_PASTE,    KC_NO,         KC_NO,          KC_TRANSPARENT,KC_TRANSPARENT, KC_TRANSPARENT,   KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT,
                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,KC_NO,          KC_NO,         KC_NO,          KC_NO,            KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT(
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          TD(DANCE_4),    KC_TRANSPARENT,
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                                                          KC_NO,          KC_NO,          KC_NO,          KC_F9,          KC_F10,         KC_TRANSPARENT,
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_TRANSPARENT, KC_NO,          LALT(LCTL(KC_B)),KC_TRANSPARENT,KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_F11,         KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT,
                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,  KC_NO,         KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT(
    KC_TRANSPARENT, LCTL(KC_1),     LCTL(KC_2),     LCTL(KC_3),     LCTL(KC_E),     LCTL(KC_D),                                                                     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_NO,          KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [6] = LAYOUT(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_W,           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_LANG1,       KC_TRANSPARENT, KC_TRANSPARENT, KC_M,           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                    KC_TRANSPARENT, KC_LALT,        KC_LGUI,        LT(7,KC_SPACE), LT(7,KC_BSPACE),KC_TRANSPARENT, KC_TRANSPARENT, KC_F8,          LSFT(KC_F8),    TD(DANCE_5)
  ),
  [7] = LAYOUT(
    KC_WWW_FORWARD, LGUI(KC_UP),    LALT(KC_UP),    KC_APPLICATION, LGUI(KC_W),     LCTL(KC_A),                                                                     KC_NO,          KC_MS_WH_DOWN,  KC_MS_WH_UP,    KC_NO,          KC_NO,          KC_TRANSPARENT,
    KC_WWW_BACK,    LGUI(KC_DOWN),  LALT(KC_DOWN),  KC_MS_BTN2,     KC_MS_BTN1,     KC_ENTER,                                                                       KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_NO,          KC_TRANSPARENT,
    LSFT(KC_MAC_UNDO),KC_MAC_UNDO,  KC_MAC_CUT,     KC_MAC_COPY,    KC_MAC_PASTE,   KC_ENTER,       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_RCBR,        KC_LCBR,        KC_NO,          KC_NO,          KC_TRANSPARENT,
                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_NO,          KC_F3,          LSFT(KC_F3),    KC_TRANSPARENT
  ),
  [8] = LAYOUT(
    KC_GRAVE,       KC_MINUS,       KC_PLUS,        KC_EQUAL,       KC_LCBR,        KC_RCBR,                                                                          KC_EXLM,        KC_AT,          KC_HASH,        KC_DLR,         KC_PERC,        KC_TRANSPARENT,
    KC_TRANSPARENT, KC_SLASH,       KC_ASTR,        KC_UNDS,        KC_LPRN,        KC_RPRN,                                                                          KC_CIRC,        KC_AMPR,        KC_ASTR,        KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, ST_MACRO_1,     ST_MACRO_2,     KC_NO,          KC_LBRACKET,    KC_RBRACKET,    KC_TRANSPARENT, KC_TRANSPARENT,   KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_3,     ST_MACRO_4,     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LT(12,KC_SPACE),LT(12,KC_BSPACE), KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [9] = LAYOUT(
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                                                            KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_NO,
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_TRANSPARENT, KC_NO,          KC_NO,                                                                            KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_TRANSPARENT,
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT,   KC_TRANSPARENT, KC_NO,          KC_F11,         KC_F12,         KC_F13,         KC_F14,         KC_F15,         KC_TRANSPARENT,
                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LT(12,KC_SPACE),LT(12,KC_BSPACE), KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO
  ),
  [10] = LAYOUT(
    KC_TRANSPARENT, KC_MINUS,       KC_PLUS,        KC_EQUAL,       KC_LCBR,        KC_RCBR,                                                                          KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_TRANSPARENT,
    KC_TRANSPARENT, KC_SLASH,       KC_ASTR,        KC_UNDS,        KC_TRANSPARENT, KC_RPRN,                                                                          KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_TRANSPARENT,
    KC_TRANSPARENT, ST_MACRO_5,     ST_MACRO_6,     KC_NO,          KC_LBRACKET,    KC_RBRACKET,    KC_TRANSPARENT, KC_TRANSPARENT,   KC_TRANSPARENT, KC_NO,          ST_MACRO_7,     ST_MACRO_8,     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LT(12,KC_SPACE),LT(12,KC_BSPACE), KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO
  ),
  [11] = LAYOUT(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                   RGB_TOG,          RGB_MODE_FORWARD, RGB_MODE_REVERSE, RGB_HUI,        RGB_HUD,        RGB_SAI,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                   RGB_SAD,          RGB_VAI,          RGB_VAD,          RGB_SPI,        RGB_SPD,        RGB_MODE_PLAIN,
    LCTL(KC_R),     KC_U,           KC_X,           ST_MACRO_9,     ST_MACRO_10,    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,   KC_TRANSPARENT, KC_NO,          RGB_MODE_BREATHE, RGB_MODE_RAINBOW, RGB_MODE_SWIRL,   RGB_MODE_SNAKE, RGB_MODE_KNIGHT,RGB_MODE_XMAS,
                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LT(12,KC_SPACE),LT(12,KC_BSPACE), KC_TRANSPARENT, KC_TRANSPARENT, RGB_MODE_GRADIENT,RGB_MODE_RGBTEST, KC_TRANSPARENT
  ),
  [12] = LAYOUT(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_NO,          KC_MS_WH_DOWN,  KC_MS_WH_UP,    KC_NO,          KC_NO,          KC_NO,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_NO,          KC_TRANSPARENT,                                                                 KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_NO,          KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT,
                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_NO,          KC_F3,          LSFT(KC_F3),    KC_TRANSPARENT
  ),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_F))) SS_DELAY(100) SS_LALT(SS_TAP(X_A)));
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_BSLASH)) SS_DELAY(100) SS_LSFT(SS_TAP(X_BSLASH)));
    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_7)) SS_DELAY(100) SS_LSFT(SS_TAP(X_7)));
    }
    break;
    case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_SCOLON)) SS_DELAY(100) SS_LSFT(SS_TAP(X_SCOLON)));
    }
    break;
    case ST_MACRO_4:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_MINUS) SS_DELAY(100) SS_LSFT(SS_TAP(X_DOT)));
    }
    break;
    case ST_MACRO_5:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_BSLASH)) SS_DELAY(100) SS_LSFT(SS_TAP(X_BSLASH)));
    }
    break;
    case ST_MACRO_6:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_7)) SS_DELAY(100) SS_LSFT(SS_TAP(X_7)));
    }
    break;
    case ST_MACRO_7:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_SCOLON)) SS_DELAY(100) SS_LSFT(SS_TAP(X_SCOLON)));
    }
    break;
    case ST_MACRO_8:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_MINUS) SS_DELAY(100) SS_LSFT(SS_TAP(X_DOT)));
    }
    break;
    case ST_MACRO_9:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_QUOTE)) SS_DELAY(100) SS_TAP(X_A) SS_DELAY(100) SS_TAP(X_Y));
    }
    break;
    case ST_MACRO_10:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_QUOTE)) SS_DELAY(100) SS_TAP(X_A) SS_DELAY(100) SS_TAP(X_P));
    }
    break;

  }
  return true;
}

/////////////////////////////////////////////////////////////////////////////
// RGB Light
const rgblight_segment_t PROGMEM my_select_os_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 20, HSV_BLACK}
);
const rgblight_segment_t PROGMEM my_win_os_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 20, HSV_BLUE}
);
const rgblight_segment_t PROGMEM my_win_arrfn_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 20, HSV_GREEN}
);
const rgblight_segment_t PROGMEM my_win_msvc_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 20, HSV_PURPLE}
);
const rgblight_segment_t PROGMEM my_win_msvcde_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 20, HSV_PINK}
);
const rgblight_segment_t PROGMEM my_win_etc_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 20, HSV_ORANGE}
);
const rgblight_segment_t PROGMEM my_mac_os_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 20, HSV_CYAN}
);
const rgblight_segment_t PROGMEM my_mac_arrfn_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 20, HSV_GREEN}
);
const rgblight_segment_t PROGMEM my_sp_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 20, HSV_YELLOW}
);
const rgblight_segment_t PROGMEM my_fn_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 20, HSV_GOLD}
);
const rgblight_segment_t PROGMEM my_num_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 20, HSV_CORAL}
);
const rgblight_segment_t PROGMEM my_vim_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 20, HSV_MAGENTA}
);
const rgblight_segment_t PROGMEM my_arr_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 20, HSV_GREEN}
);
const rgblight_segment_t PROGMEM my_capslock_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 20, HSV_RED}
);

// Now define the array of layers. Later layers take precedence
const rgblight_segment_t* const PROGMEM my_rgb_layers[] = RGBLIGHT_LAYERS_LIST(
    my_select_os_layer,//0
    my_win_os_layer,//1
    my_win_arrfn_layer,//2
    my_win_msvc_layer,//3
    my_win_msvcde_layer,//4
    my_win_etc_layer,//5
    my_mac_os_layer,//6
    my_mac_arrfn_layer,//7
    my_sp_layer,//8
    my_fn_layer,//9
    my_num_layer,//10
    my_vim_layer,//11
    my_arr_layer,//12
    my_capslock_layer//13
);

void keyboard_post_init_user(void) {
    // Enable the LED layers
    rgblight_layers = my_rgb_layers;
}

bool led_update_user(led_t led_state) {
    rgblight_set_layer_state(13, led_state.caps_lock);
    return true;
}

layer_state_t default_layer_state_set_user(layer_state_t state) {
    rgblight_set_layer_state(0, layer_state_cmp(state, 0));
    return state;
}

layer_state_t layer_state_set_user(layer_state_t state) {
    rgblight_set_layer_state(0, layer_state_cmp(state, 0));
    rgblight_set_layer_state(1, layer_state_cmp(state, 1));
    rgblight_set_layer_state(2, layer_state_cmp(state, 2));
    rgblight_set_layer_state(3, layer_state_cmp(state, 3));
    rgblight_set_layer_state(4, layer_state_cmp(state, 4));
    rgblight_set_layer_state(5, layer_state_cmp(state, 5));
    rgblight_set_layer_state(6, layer_state_cmp(state, 6));
    rgblight_set_layer_state(7, layer_state_cmp(state, 7));
    rgblight_set_layer_state(8, layer_state_cmp(state, 8));
    rgblight_set_layer_state(9, layer_state_cmp(state, 9));
    rgblight_set_layer_state(10, layer_state_cmp(state, 10));
    rgblight_set_layer_state(11, layer_state_cmp(state, 11));
    rgblight_set_layer_state(12, layer_state_cmp(state, 12));
    return state;
}

// layer_state_t layer_state_set_user(layer_state_t state) {
//     switch (get_highest_layer(state)) {
//     case 0:
//         rgblight_setrgb (0x00,  0x00, 0x00);
//         break;
//     case 1:
//         rgblight_setrgb (0x00,  0x00, 0x55);
//         break;
//     case 3:
//     case 4:
//     case 5:
//         rgblight_setrgb (0x00,  0x55, 0x55);
//         break;

//     case 6:
//         rgblight_setrgb (0x55,  0x55, 0x55);
//         break;

//     case 2:
//     case 7:
//     case 12:
//         rgblight_setrgb (0x00,  0x55, 0x00);
//         break;

//     case 8:
//         rgblight_setrgb (0x55,  0x00, 0x00);
//         break;
//     case 9:
//         rgblight_setrgb (0x55,  0x55, 0x00);
//         break;
//     case 10:
//         rgblight_setrgb (0x33,  0x44, 0x55);
//         break;
//     default: //  for any other layers, or the default layer
//         rgblight_setrgb (0x00,  0xFF, 0xFF);
//         break;
//     }
//   return state;
// };

typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,
    SINGLE_HOLD,
    DOUBLE_TAP,
    DOUBLE_HOLD,
    DOUBLE_SINGLE_TAP,
    MORE_TAPS
};

static tap dance_state[6];

uint8_t dance_step(qk_tap_dance_state_t *state);

uint8_t dance_step(qk_tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void dance_0_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_0_reset(qk_tap_dance_state_t *state, void *user_data);

void dance_0_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case DOUBLE_TAP: layer_move(1); break;
    }
}

void dance_0_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
    }
    dance_state[0].step = 0;
}
void on_dance_1(qk_tap_dance_state_t *state, void *user_data);
void dance_1_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_1_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_1(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_MY_COMPUTER);
        tap_code16(KC_MY_COMPUTER);
        tap_code16(KC_MY_COMPUTER);
    }
    if(state->count > 3) {
        tap_code16(KC_MY_COMPUTER);
    }
}

void dance_1_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case SINGLE_TAP: register_code16(KC_MY_COMPUTER); break;
        case DOUBLE_TAP: register_code16(KC_CALCULATOR); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_MY_COMPUTER); register_code16(KC_MY_COMPUTER);
    }
}

void dance_1_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
        case SINGLE_TAP: unregister_code16(KC_MY_COMPUTER); break;
        case DOUBLE_TAP: unregister_code16(KC_CALCULATOR); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_MY_COMPUTER); break;
    }
    dance_state[1].step = 0;
}
void dance_2_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_2_reset(qk_tap_dance_state_t *state, void *user_data);

void dance_2_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[2].step = dance_step(state);
    switch (dance_state[2].step) {
        case DOUBLE_TAP: layer_move(6); break;
    }
}

void dance_2_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[2].step) {
    }
    dance_state[2].step = 0;
}
void dance_3_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_3_reset(qk_tap_dance_state_t *state, void *user_data);

void dance_3_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[3].step = dance_step(state);
    switch (dance_state[3].step) {
        case DOUBLE_TAP: layer_move(0); break;
    }
}

void dance_3_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[3].step) {
    }
    dance_state[3].step = 0;
}
void on_dance_4(qk_tap_dance_state_t *state, void *user_data);
void dance_4_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_4_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_4(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_F5);
        tap_code16(KC_F5);
        tap_code16(KC_F5);
    }
    if(state->count > 3) {
        tap_code16(KC_F5);
    }
}

void dance_4_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[4].step = dance_step(state);
    switch (dance_state[4].step) {
        case SINGLE_TAP: register_code16(KC_F5); break;
        case DOUBLE_TAP: register_code16(LALT(LCTL(KC_P))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_F5); register_code16(KC_F5);
    }
}

void dance_4_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[4].step) {
        case SINGLE_TAP: unregister_code16(KC_F5); break;
        case DOUBLE_TAP: unregister_code16(LALT(LCTL(KC_P))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_F5); break;
    }
    dance_state[4].step = 0;
}
void dance_5_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_5_reset(qk_tap_dance_state_t *state, void *user_data);

void dance_5_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[5].step = dance_step(state);
    switch (dance_state[5].step) {
        case DOUBLE_TAP: layer_move(0); break;
    }
}

void dance_5_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[5].step) {
    }
    dance_state[5].step = 0;
}

qk_tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_0_finished, dance_0_reset),
        [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_1, dance_1_finished, dance_1_reset),
        [DANCE_2] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_2_finished, dance_2_reset),
        [DANCE_3] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_3_finished, dance_3_reset),
        [DANCE_4] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_4, dance_4_finished, dance_4_reset),
        [DANCE_5] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_5_finished, dance_5_reset),
};






#ifdef OLED_ENABLE
oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    return OLED_ROTATION_180;
}

/*
static void render_kyria_logo(void) {
    static const char PROGMEM kyria_logo[] = {
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,128,128,192,224,240,112,120, 56, 60, 28, 30, 14, 14, 14,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7, 14, 14, 14, 30, 28, 60, 56,120,112,240,224,192,128,128,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  0,  0,  0,  0,  0,192,224,240,124, 62, 31, 15,  7,  3,  1,128,192,224,240,120, 56, 60, 28, 30, 14, 14,  7,  7,135,231,127, 31,255,255, 31,127,231,135,  7,  7, 14, 14, 30, 28, 60, 56,120,240,224,192,128,  1,  3,  7, 15, 31, 62,124,240,224,192,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  0,  0,240,252,255, 31,  7,  1,  0,  0,192,240,252,254,255,247,243,177,176, 48, 48, 48, 48, 48, 48, 48,120,254,135,  1,  0,  0,255,255,  0,  0,  1,135,254,120, 48, 48, 48, 48, 48, 48, 48,176,177,243,247,255,254,252,240,192,  0,  0,  1,  7, 31,255,252,240,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  0,255,255,255,  0,  0,  0,  0,  0,254,255,255,  1,  1,  7, 30,120,225,129,131,131,134,134,140,140,152,152,177,183,254,248,224,255,255,224,248,254,183,177,152,152,140,140,134,134,131,131,129,225,120, 30,  7,  1,  1,255,255,254,  0,  0,  0,  0,  0,255,255,255,  0,  0,  0,  0,255,255,  0,  0,192,192, 48, 48,  0,  0,240,240,  0,  0,  0,  0,  0,  0,240,240,  0,  0,240,240,192,192, 48, 48, 48, 48,192,192,  0,  0, 48, 48,243,243,  0,  0,  0,  0,  0,  0, 48, 48, 48, 48, 48, 48,192,192,  0,  0,  0,  0,  0,
        0,  0,  0,255,255,255,  0,  0,  0,  0,  0,127,255,255,128,128,224,120, 30,135,129,193,193, 97, 97, 49, 49, 25, 25,141,237,127, 31,  7,255,255,  7, 31,127,237,141, 25, 25, 49, 49, 97, 97,193,193,129,135, 30,120,224,128,128,255,255,127,  0,  0,  0,  0,  0,255,255,255,  0,  0,  0,  0, 63, 63,  3,  3, 12, 12, 48, 48,  0,  0,  0,  0, 51, 51, 51, 51, 51, 51, 15, 15,  0,  0, 63, 63,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 48, 48, 63, 63, 48, 48,  0,  0, 12, 12, 51, 51, 51, 51, 51, 51, 63, 63,  0,  0,  0,  0,  0,
        0,  0,  0,  0, 15, 63,255,248,224,128,  0,  0,  3, 15, 63,127,255,239,207,141, 13, 12, 12, 12, 12, 12, 12, 12, 30,127,225,128,  0,  0,255,255,  0,  0,128,225,127, 30, 12, 12, 12, 12, 12, 12, 12, 13,141,207,239,255,127, 63, 15,  3,  0,  0,128,224,248,255, 63, 15,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  0,  0,  0,  0,  0,  3,  7, 15, 62,124,248,240,224,192,128,  1,  3,  7, 15, 30, 28, 60, 56,120,112,112,224,224,225,231,254,248,255,255,248,254,231,225,224,224,112,112,120, 56, 60, 28, 30, 15,  7,  3,  1,128,192,224,240,248,124, 62, 15,  7,  3,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  3,  7, 15, 14, 30, 28, 60, 56,120,112,112,112,224,224,224,224,224,224,224,224,224,224,224,224,224,224,224,224,112,112,112,120, 56, 60, 28, 30, 14, 15,  7,  3,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
    };
    oled_write_raw_P(kyria_logo, sizeof(kyria_logo));
}

static void render_qmk_logo(void) {
  static const char PROGMEM qmk_logo[] = {
    0x80,0x81,0x82,0x83,0x84,0x85,0x86,0x87,0x88,0x89,0x8a,0x8b,0x8c,0x8d,0x8e,0x8f,0x90,0x91,0x92,0x93,0x94,
    0xa0,0xa1,0xa2,0xa3,0xa4,0xa5,0xa6,0xa7,0xa8,0xa9,0xaa,0xab,0xac,0xad,0xae,0xaf,0xb0,0xb1,0xb2,0xb3,0xb4,
    0xc0,0xc1,0xc2,0xc3,0xc4,0xc5,0xc6,0xc7,0xc8,0xc9,0xca,0xcb,0xcc,0xcd,0xce,0xcf,0xd0,0xd1,0xd2,0xd3,0xd4,0};

  oled_write_P(qmk_logo, false);
}
*/

static void render_status(void) {
    // QMK Logo and version information
    //render_qmk_logo();
    //oled_write_P(PSTR("\n\n\n"), false);

    // Host Keyboard Layer Status
    oled_write_P(PSTR("Layer: "), false);

    switch (get_highest_layer(layer_state)) {
        case 0:
            oled_write_P(PSTR("select os\n"), false);
            break;
        case 1:
            oled_write_P(PSTR("Windows OS\n"), false);
            break;
        case 2:
            oled_write_P(PSTR("ArrFn\n"), false);
            break;
        case 3:
            oled_write_P(PSTR("Msvc\n"), false);
            break;
        case 4:
            oled_write_P(PSTR("MsvcDe\n"), false);
            break;
        case 5:
            oled_write_P(PSTR("Etc\n"), false);
            break;
        case 6:
            oled_write_P(PSTR("Mac OS\n"), false);
            break;
        case 7:
            oled_write_P(PSTR("ArrFn\n"), false);
            break;
        case 8:
            oled_write_P(PSTR("Sp\n"), false);
            break;
        case 9:
            oled_write_P(PSTR("FnKey\n"), false);
            break;
        case 10:
            oled_write_P(PSTR("Num\n"), false);
            break;
        case 11:
            oled_write_P(PSTR("Vim\n"), false);
            break;
        case 12:
            oled_write_P(PSTR("Arr\n"), false);
            break;
        default:
            oled_write_P(PSTR("Undefined\n"), false);
    }

    // Host Keyboard LED Status
    uint8_t led_usb_state = host_keyboard_leds();
    oled_write_P(IS_LED_ON(led_usb_state, USB_LED_CAPS_LOCK) ? PSTR("CAPLCK ") : PSTR("       "), false);
    oled_write_P(IS_LED_ON(led_usb_state, USB_LED_NUM_LOCK) ? PSTR("NUMLCK ") : PSTR("       "), false);
    oled_write_P(IS_LED_ON(led_usb_state, USB_LED_SCROLL_LOCK) ? PSTR("SCRLCK ") : PSTR("       "), false);
}

bool oled_task_user(void) {
    if (is_keyboard_master()) {
        render_status(); // Renders the current keyboard state (layer, lock, caps, scroll, etc)
    } else {
        //render_qmk_logo();
        oled_write_P(PSTR("\nKyria rev2.0\n\n"), false);
        //render_kyria_logo();
    }
    return false;
}
#endif

#ifdef ENCODER_ENABLE
bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        // Volume control
        if (clockwise) {
            tap_code(KC_MS_WH_LEFT);
        } else {
            tap_code(KC_MS_WH_RIGHT);
        }
    }
    else if (index == 1) {
        if (clockwise) {
            tap_code(KC_MS_WH_DOWN);
        } else {
            tap_code(KC_MS_WH_UP);
        }
    }
    return true;
}
#endif
