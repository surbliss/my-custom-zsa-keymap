#include QMK_KEYBOARD_H
#include "version.h"
#include "i18n.h"
#define MOON_LED_LEVEL LED_LEVEL
#ifndef ZSA_SAFE_RANGE
#define ZSA_SAFE_RANGE SAFE_RANGE
#endif

enum custom_keycodes {
  RGB_SLD = ZSA_SAFE_RANGE,
  ST_MACRO_0,
  ST_MACRO_1,
  ST_MACRO_2,
  ST_MACRO_3,
  ST_MACRO_4,
  ST_MACRO_5,
};




const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    TO(1),          KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           DM_PLY2,        
    CW_TOGG,        KC_W,           KC_G,           KC_D,           KC_F,           DK_QUOT,                                        KC_Q,           KC_L,           KC_U,           KC_O,           KC_Y,           DK_AE,          
    KC_TAB,         MT(MOD_LALT, KC_R),MT(MOD_LGUI, KC_S),MT(MOD_LSFT, KC_T),MT(MOD_LCTL, KC_H),KC_B,                                           KC_Z,           MT(MOD_RCTL, KC_N),MT(MOD_RSFT, KC_E),MT(MOD_RGUI, KC_A),MT(MOD_LALT, KC_I),DK_OSTR,        
    DM_PLY1,        KC_X,           KC_C,           KC_M,           KC_P,           KC_V,                                           DK_DOT,         KC_J,           KC_K,           DK_COMM,        DK_MINS,        DK_ARNG,        
                                                    LT(9, KC_SPACE),LT(5, KC_BSPC),                                 LT(4, KC_ESCAPE),LT(2, KC_ENTER)
  ),
  [1] = LAYOUT_voyager(
    TO(0),          KC_NO,          TO(8),          TO(9),          TO(6),          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
                                                    KC_NO,          KC_NO,                                          KC_NO,          KC_NO
  ),
  [2] = LAYOUT_voyager(
    KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          
    KC_TRANSPARENT, DK_QUOT,        DK_LABK,        DK_RABK,        DK_DQUO,        DK_GRV,                                         DK_AMPR,        DK_AT,          DK_LCBR,        DK_RCBR,        DK_PERC,        KC_NO,          
    KC_TRANSPARENT, DK_EXLM,        DK_MINS,        DK_PLUS,        DK_EQL,         DK_QUES,                                        DK_TILD,        DK_HASH,        DK_LPRN,        DK_RPRN,        DK_UNDS,        KC_NO,          
    KC_NO,          DK_CIRC,        DK_SLSH,        DK_ASTR,        DK_BSLS,        ST_MACRO_0,                                     DK_PIPE,        DK_DLR,         DK_LBRC,        DK_RBRC,        KC_APPLICATION, KC_NO,          
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_voyager(
    KC_NO,          KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,                                          KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          ST_MACRO_1,     KC_NO,          KC_NO,          KC_NO,          KC_F12,         
    KC_NO,          OSM(MOD_RALT),  KC_APPLICATION, KC_NO,          KC_FIND,        KC_NO,                                          KC_NO,          ST_MACRO_2,     ST_MACRO_3,     ST_MACRO_4,     ST_MACRO_5,     KC_NO,          
    KC_NO,          KC_PC_UNDO,     KC_PC_CUT,      KC_PC_COPY,     KC_PC_PASTE,    KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_voyager(
    TO(1),          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_AUDIO_MUTE,  KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_BRIGHTNESS_DOWN,KC_BRIGHTNESS_UP,                                KC_HOME,        KC_PGDN,        KC_PAGE_UP,     KC_END,         KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_LEFT_GUI,    KC_LEFT_SHIFT,  KC_LEFT_CTRL,   KC_NO,                                          KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          LALT(KC_LEFT),  LCTL(KC_TAB),   LCTL(LSFT(KC_TAB)),LALT(KC_RIGHT), KC_NO,          KC_NO,          
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_MS_WH_DOWN,  KC_MS_UP,       KC_MS_WH_UP,    KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_MS_ACCEL0,   KC_MS_ACCEL1,   KC_MS_ACCEL2,   KC_NO,                                          KC_MS_WH_LEFT,  KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_MS_WH_RIGHT, KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [6] = LAYOUT_voyager(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_KP_1,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TAB,         KC_R,           KC_S,           KC_T,           KC_H,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_N,           KC_E,           KC_A,           KC_I,           KC_TRANSPARENT, 
    OSM(MOD_LALT),  KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    LT(7, KC_SPACE),MT(MOD_LSFT, KC_BSPC),                                KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [7] = LAYOUT_voyager(
    TO(0),          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          
    KC_NO,          KC_KP_3,        KC_KP_4,        KC_UP,          KC_KP_5,        KC_KP_6,                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_NO,          KC_KP_2,        KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_KP_7,                                        KC_TRANSPARENT, KC_J,           KC_K,           KC_L,           KC_I,           KC_TRANSPARENT, 
    KC_NO,          KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,                                          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [8] = LAYOUT_voyager(
    TO(0),          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          RGB_SLD,        RGB_MODE_FORWARD,TOGGLE_LAYER_COLOR,RGB_TOG,        KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          RGB_SPD,        RGB_SPI,        RGB_VAD,        RGB_VAI,        LED_LEVEL,                                      KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          RGB_HUD,        RGB_HUI,        RGB_SAD,        RGB_SAI,        KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
                                                    KC_NO,          KC_NO,                                          KC_NO,          KC_NO
  ),
  [9] = LAYOUT_voyager(
    TO(0),          DM_REC1,        DM_REC2,        DM_RSTP,        KC_NO,          KC_NO,                                          DM_PLY1,        DM_PLY2,        KC_NO,          KC_NO,          KC_NO,          KC_DELETE,      
    KC_NUM,         KC_NO,          LGUI(KC_M),     KC_UP,          LGUI(KC_E),     KC_NO,                                          DK_SLSH,        KC_7,           KC_8,           KC_9,           DK_ASTR,        LSFT(KC_TAB),   
    KC_NO,          KC_NO,          KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_NO,                                          DK_MINS,        KC_4,           KC_5,           KC_6,           DK_PLUS,        KC_TAB,         
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          DK_DOT,         KC_1,           KC_2,           KC_3,           DK_EQL,         KC_ENTER,       
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_0,           KC_BSPC
  ),
};

const char chordal_hold_layout[MATRIX_ROWS][MATRIX_COLS] PROGMEM = LAYOUT(
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  '*', '*', '*', '*'
);

const uint16_t PROGMEM combo0[] = { KC_U, MT(MOD_RGUI, KC_A), COMBO_END};
const uint16_t PROGMEM combo1[] = { MT(MOD_RSFT, KC_E), KC_O, COMBO_END};
const uint16_t PROGMEM combo2[] = { KC_J, KC_K, COMBO_END};
const uint16_t PROGMEM combo3[] = { KC_U, KC_O, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, DK_ARNG),
    COMBO(combo1, DK_AE),
    COMBO(combo2, KC_ESCAPE),
    COMBO(combo3, DK_OSTR),
};


extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [1] = { {169,255,255}, {213,77,168}, {39,255,255}, {146,221,254}, {0,255,255}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168} },

    [2] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {41,255,255}, {22,255,255}, {22,255,255}, {41,255,255}, {41,255,255}, {0,0,0}, {41,255,255}, {83,219,202}, {83,219,202}, {41,255,255}, {41,255,255}, {0,0,0}, {41,255,255}, {83,219,202}, {83,219,202}, {41,255,255}, {201,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {41,255,255}, {41,255,255}, {22,255,255}, {22,255,255}, {41,255,255}, {0,0,0}, {41,255,255}, {41,255,255}, {22,255,255}, {22,255,255}, {41,255,255}, {0,0,0}, {41,255,255}, {41,255,255}, {22,255,255}, {22,255,255}, {201,218,204}, {0,0,0}, {0,0,0}, {0,0,0} },

    [3] = { {0,0,0}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,255,255}, {0,0,0}, {83,219,202}, {0,0,0}, {0,0,0}, {83,219,202}, {83,219,202}, {83,219,202}, {83,219,202}, {0,0,0}, {0,0,0}, {0,0,0}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {0,0,0}, {72,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {213,77,168}, {0,0,0}, {201,218,204}, {201,218,204}, {201,218,204}, {201,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {223,218,204}, {0,0,0} },

    [4] = { {169,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,94,237}, {114,45,252}, {114,45,252}, {38,161,255}, {38,161,255}, {0,0,0}, {0,0,0}, {211,156,249}, {211,156,249}, {211,156,249}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {0,0,0}, {0,0,0}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {0,0,0}, {0,0,0}, {0,232,185}, {0,232,185}, {0,232,185}, {0,232,185}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [5] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {74,255,255}, {74,255,255}, {74,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {31,218,204}, {31,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {38,161,255}, {114,45,252}, {38,161,255}, {0,0,0}, {0,0,0}, {38,161,255}, {114,45,252}, {114,45,252}, {114,45,252}, {38,161,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {31,218,204}, {0,0,0} },

    [6] = { {131,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {41,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {131,255,255}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {58,255,255}, {131,255,255}, {131,255,255}, {43,255,255}, {216,161,255}, {22,255,255}, {131,255,255}, {221,218,204}, {199,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [7] = { {169,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {199,255,255}, {199,255,255}, {131,255,255}, {199,255,255}, {213,77,168}, {0,0,0}, {199,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {58,255,255}, {0,0,0}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [8] = { {169,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,170}, {43,255,255}, {194,255,255}, {22,255,255}, {0,0,0}, {0,0,0}, {172,255,255}, {0,255,255}, {159,255,170}, {0,0,255}, {129,255,170}, {0,0,0}, {129,255,255}, {215,255,255}, {86,116,178}, {86,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [9] = { {169,255,255}, {22,255,255}, {22,255,255}, {0,255,255}, {0,0,0}, {0,0,0}, {40,195,255}, {0,0,0}, {58,255,255}, {131,255,255}, {58,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {131,255,255}, {131,255,255}, {131,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {225,218,255}, {225,218,255}, {0,0,0}, {0,0,0}, {0,0,0}, {223,218,204}, {251,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {74,255,255}, {131,255,255}, {251,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {74,255,255}, {131,255,255}, {223,218,204}, {188,255,255}, {188,255,255}, {188,255,255}, {42,218,204}, {131,255,255}, {188,255,255}, {223,218,204} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (keyboard_config.disable_layer_led) { return false; }
  switch (biton32(layer_state)) {
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
    case 4:
      set_layer_color(4);
      break;
    case 5:
      set_layer_color(5);
      break;
    case 6:
      set_layer_color(6);
      break;
    case 7:
      set_layer_color(7);
      break;
    case 8:
      set_layer_color(8);
      break;
    case 9:
      set_layer_color(9);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
  return true;
}


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_DOT)SS_DELAY(1)  SS_TAP(X_DOT)SS_DELAY(1)  SS_LSFT(SS_TAP(X_7)));
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U)))SS_DELAY(10)  SS_TAP(X_2)SS_DELAY(10)  SS_TAP(X_7)SS_DELAY(10)  SS_TAP(X_1)SS_DELAY(10)  SS_TAP(X_4)  SS_DELAY(10) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_0))SS_DELAY(10)  SS_TAP(X_SPACE)SS_DELAY(10)  SS_RALT(SS_TAP(X_7))  SS_DELAY(10) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING(SS_RALT(SS_TAP(X_EQUAL))SS_DELAY(10)  SS_LSFT(SS_TAP(X_NUBS))SS_DELAY(10)  SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_4:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_0))SS_DELAY(10)  SS_LSFT(SS_TAP(X_NUBS))SS_DELAY(10)  SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_5:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_SLASH)SS_DELAY(10)  SS_LSFT(SS_TAP(X_NUBS))SS_DELAY(10)  SS_TAP(X_SPACE));
    }
    break;

    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}


