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
};



#define DUAL_FUNC_0 LT(2, KC_O)
#define DUAL_FUNC_1 LT(11, KC_I)
#define DUAL_FUNC_2 LT(7, KC_Z)
#define DUAL_FUNC_3 LT(12, KC_F10)
#define DUAL_FUNC_4 LT(12, KC_F)
#define DUAL_FUNC_5 LT(11, KC_7)
#define DUAL_FUNC_6 LT(13, KC_E)
#define DUAL_FUNC_7 LT(6, KC_V)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    TO(1),          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          DM_REC1,        DM_REC2,        DM_RSTP,        
    KC_NO,          DM_PLY1,        KC_G,           KC_D,           KC_F,           KC_V,                                           KC_Q,           KC_L,           KC_U,           KC_O,           DK_ARNG,        KC_NO,          
    KC_ESCAPE,      KC_W,           MT(MOD_LGUI, KC_S),MT(MOD_LSFT, KC_T),MT(MOD_LCTL, KC_H),KC_B,                                           KC_Z,           MT(MOD_RCTL, KC_N),MT(MOD_RSFT, KC_E),MT(MOD_RGUI, KC_A),KC_Y,           DK_OSTR,        
    CW_TOGG,        MT(MOD_LALT, KC_R),KC_C,           KC_M,           KC_P,           KC_X,                                           DK_COMM,        KC_J,           KC_K,           DK_DOT,         MT(MOD_LALT, KC_I),DK_AE,          
                                                    LT(4, KC_TAB),  LT(3, KC_SPACE),                                LT(2, KC_BSPC), LT(5, KC_ENTER)
  ),
  [1] = LAYOUT_voyager(
    TO(0),          TO(9),          TO(8),          TO(6),          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
                                                    KC_NO,          KC_NO,                                          KC_NO,          KC_NO
  ),
  [2] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          DK_CIRC,        DK_LABK,        DK_RABK,        DK_MINS,        DK_PIPE,                                        KC_NO,          KC_7,           KC_8,           KC_9,           KC_NO,          KC_NO,          
    KC_NO,          DK_TILD,        DUAL_FUNC_0,    DUAL_FUNC_1,    DUAL_FUNC_2,    DK_QUES,                                        DK_DOT,         KC_4,           KC_5,           KC_6,           KC_0,           KC_NO,          
    KC_NO,          DUAL_FUNC_3,    DK_PLUS,        DK_BSLS,        DK_UNDS,        DK_AMPR,                                        DK_COMM,        KC_1,           KC_2,           KC_3,           KC_0,           KC_NO,          
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_APPLICATION, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_PAGE_UP,     KC_UP,          KC_PGDN,        KC_HOME,                                        DK_QUOT,        DK_LCBR,        DK_RCBR,        DK_DLR,         DK_DQUO,        KC_NO,          
    KC_NO,          KC_NO,          KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_END,                                         DK_GRV,         DUAL_FUNC_4,    DUAL_FUNC_5,    DUAL_FUNC_6,    DK_AT,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          LCTL(LSFT(KC_TAB)),LCTL(KC_TAB),   KC_NO,                                          DK_SCLN,        DK_LBRC,        DK_RBRC,        DK_COLN,        DUAL_FUNC_7,    KC_NO,          
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_voyager(
    KC_NO,          KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,                                          KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         
    KC_NO,          KC_AUDIO_MUTE,  KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_BRIGHTNESS_DOWN,KC_BRIGHTNESS_UP,                                KC_NO,          ST_MACRO_0,     KC_NO,          KC_NO,          KC_NO,          KC_F12,         
    KC_NO,          KC_LEFT_ALT,    KC_LEFT_GUI,    KC_LEFT_SHIFT,  KC_LEFT_CTRL,   KC_NO,                                          KC_NO,          ST_MACRO_1,     ST_MACRO_2,     ST_MACRO_3,     ST_MACRO_4,     KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_MS_BTN3,     KC_NO,          KC_NO,                                          KC_NO,          KC_MS_WH_DOWN,  KC_MS_UP,       KC_MS_WH_UP,    KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_MS_ACCEL0,   KC_MS_ACCEL1,   KC_MS_ACCEL2,   KC_NO,                                          KC_MS_WH_LEFT,  KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_MS_WH_RIGHT, KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
                                                    KC_MS_BTN1,     KC_MS_BTN2,                                     KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [6] = LAYOUT_voyager(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_KP_9,        KC_KP_1,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    OSM(MOD_LALT),  KC_TRANSPARENT, KC_S,           KC_T,           KC_H,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_N,           KC_E,           KC_A,           KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TAB,         KC_R,           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_I,           KC_TRANSPARENT, 
                                                    OSM(MOD_LSFT),  LT(7, KC_SPACE),                                KC_TRANSPARENT, KC_NO
  ),
  [7] = LAYOUT_voyager(
    TO(0),          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_NO,          KC_KP_3,        KC_KP_4,        KC_UP,          KC_KP_5,        KC_KP_6,                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_NO,          KC_KP_2,        KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_KP_7,                                        KC_TRANSPARENT, KC_N,           KC_E,           KC_A,           KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_NO,          KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,                                          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_I,           KC_TRANSPARENT, 
                                                    KC_NO,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_NO
  ),
  [8] = LAYOUT_voyager(
    TO(0),          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          RGB_SLD,        RGB_MODE_FORWARD,TOGGLE_LAYER_COLOR,RGB_TOG,        KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          RGB_SPD,        RGB_SPI,        RGB_VAD,        RGB_VAI,        LED_LEVEL,                                      KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          RGB_HUD,        RGB_HUI,        RGB_SAD,        RGB_SAI,        KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
                                                    KC_NO,          KC_NO,                                          KC_NO,          KC_NO
  ),
  [9] = LAYOUT_voyager(
    TO(0),          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NUM,         KC_NO,          LGUI(KC_M),     KC_UP,          LGUI(KC_E),     KC_NO,                                          DK_MINS,        KC_7,           KC_8,           KC_9,           DK_UNDS,        KC_NO,          
    KC_NO,          KC_NO,          KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_NO,                                          DK_DOT,         KC_4,           KC_5,           KC_6,           KC_0,           LSFT(KC_TAB),   
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          DK_COMM,        KC_1,           KC_2,           KC_3,           KC_0,           KC_TAB,         
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
};

const char chordal_hold_layout[MATRIX_ROWS][MATRIX_COLS] PROGMEM = LAYOUT(
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  '*', '*', '*', '*'
);

const uint16_t PROGMEM combo0[] = { KC_J, KC_K, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, KC_ESCAPE),
};

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case KC_LEFT:
            return TAPPING_TERM -150;
        case KC_RIGHT:
            return TAPPING_TERM -150;
        default:
            return TAPPING_TERM;
    }
}


extern rgb_config_t rgb_matrix_config;

RGB hsv_to_rgb_with_value(HSV hsv) {
  RGB rgb = hsv_to_rgb( hsv );
  float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
  return (RGB){ f * rgb.r, f * rgb.g, f * rgb.b };
}

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [1] = { {169,255,255}, {146,221,254}, {39,255,255}, {0,255,255}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168} },

    [2] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {146,178,255}, {86,142,255}, {86,142,255}, {146,178,255}, {247,144,255}, {0,0,0}, {247,144,255}, {146,178,255}, {146,178,255}, {247,144,255}, {247,144,255}, {0,0,0}, {247,144,255}, {146,178,255}, {247,144,255}, {247,144,255}, {247,144,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {146,178,255}, {146,178,255}, {146,178,255}, {0,0,0}, {0,0,0}, {247,144,255}, {146,178,255}, {146,178,255}, {146,178,255}, {146,178,255}, {0,0,0}, {247,144,255}, {146,178,255}, {146,178,255}, {146,178,255}, {146,178,255}, {0,0,0}, {0,0,0}, {0,0,0} },

    [3] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {86,142,255}, {146,178,255}, {86,142,255}, {86,142,255}, {0,0,0}, {0,0,0}, {146,178,255}, {146,178,255}, {146,178,255}, {86,142,255}, {0,0,0}, {0,0,0}, {0,0,0}, {247,144,255}, {247,144,255}, {0,0,0}, {0,0,0}, {0,0,0}, {181,151,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {247,144,255}, {86,142,255}, {86,142,255}, {247,144,255}, {247,144,255}, {0,0,0}, {247,144,255}, {86,142,255}, {86,142,255}, {247,144,255}, {247,144,255}, {0,0,0}, {247,144,255}, {86,142,255}, {86,142,255}, {247,144,255}, {247,144,255}, {0,0,0}, {0,0,0}, {0,0,0} },

    [4] = { {0,0,0}, {181,151,255}, {181,151,255}, {181,151,255}, {181,151,255}, {181,151,255}, {0,0,0}, {247,144,255}, {146,178,255}, {86,142,255}, {146,178,255}, {86,142,255}, {0,0,0}, {181,151,255}, {181,151,255}, {181,151,255}, {181,151,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {181,151,255}, {181,151,255}, {181,151,255}, {181,151,255}, {181,151,255}, {181,151,255}, {0,0,0}, {247,144,255}, {0,0,0}, {0,0,0}, {0,0,0}, {181,151,255}, {0,0,0}, {247,144,255}, {247,144,255}, {247,144,255}, {247,144,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [5] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {181,151,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {146,178,255}, {86,142,255}, {247,144,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {181,151,255}, {181,151,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {86,142,255}, {146,178,255}, {86,142,255}, {0,0,0}, {0,0,0}, {86,142,255}, {146,178,255}, {146,178,255}, {146,178,255}, {86,142,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [6] = { {181,151,255}, {247,144,255}, {247,144,255}, {247,144,255}, {247,144,255}, {181,151,255}, {181,151,255}, {86,142,255}, {38,117,255}, {86,142,255}, {86,142,255}, {146,178,255}, {181,151,255}, {38,117,255}, {247,144,255}, {247,144,255}, {247,144,255}, {146,178,255}, {181,151,255}, {247,144,255}, {146,178,255}, {146,178,255}, {146,178,255}, {146,178,255}, {181,151,255}, {181,151,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {0,0,0}, {0,0,0}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {181,151,255}, {86,142,255}, {86,142,255}, {213,77,168}, {213,77,168}, {213,77,168}, {181,151,255}, {213,77,168}, {0,0,0} },

    [7] = { {247,144,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {181,151,255}, {181,151,255}, {146,178,255}, {181,151,255}, {181,151,255}, {0,0,0}, {181,151,255}, {146,178,255}, {146,178,255}, {146,178,255}, {181,151,255}, {0,0,0}, {86,142,255}, {86,142,255}, {86,142,255}, {86,142,255}, {86,142,255}, {0,0,0}, {181,151,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {0,0,0}, {0,0,0}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {181,151,255}, {86,142,255}, {86,142,255}, {213,77,168}, {213,77,168}, {213,77,168}, {181,151,255}, {213,77,168}, {0,0,0} },

    [8] = { {169,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,170}, {43,255,255}, {194,255,255}, {22,255,255}, {0,0,0}, {0,0,0}, {172,255,255}, {0,255,255}, {159,255,170}, {0,0,255}, {129,255,170}, {0,0,0}, {129,255,255}, {215,255,255}, {86,116,178}, {86,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [9] = { {169,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {40,195,255}, {0,0,0}, {58,255,255}, {131,255,255}, {58,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {131,255,255}, {131,255,255}, {131,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {223,218,204}, {188,255,255}, {188,255,255}, {188,255,255}, {223,218,204}, {0,0,0}, {223,218,204}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {86,142,255}, {223,218,204}, {188,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {86,142,255}, {0,0,0}, {0,0,0} },

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
        RGB rgb = hsv_to_rgb_with_value(hsv);
        rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (!keyboard_config.disable_layer_led) { 
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
        if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
          rgb_matrix_set_color_all(0, 0, 0);
        }
    }
  } else {
    if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
      rgb_matrix_set_color_all(0, 0, 0);
    }
  }

  return true;
}





bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
  case QK_MODS ... QK_MODS_MAX: 
    // Mouse keys with modifiers work inconsistently across operating systems, this makes sure that modifiers are always
    // applied to the mouse key that was pressed.
    if (IS_MOUSE_KEYCODE(QK_MODS_GET_BASIC_KEYCODE(keycode))) {
    if (record->event.pressed) {
        add_mods(QK_MODS_GET_MODS(keycode));
        send_keyboard_report();
        wait_ms(2);
        register_code(QK_MODS_GET_BASIC_KEYCODE(keycode));
        return false;
      } else {
        wait_ms(2);
        del_mods(QK_MODS_GET_MODS(keycode));
      }
    }
    break;
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_U)))SS_DELAY(10)  SS_TAP(X_2)SS_DELAY(10)  SS_TAP(X_7)SS_DELAY(10)  SS_TAP(X_1)SS_DELAY(10)  SS_TAP(X_4)  SS_DELAY(10) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_0))SS_DELAY(10)  SS_TAP(X_SPACE)SS_DELAY(10)  SS_RALT(SS_TAP(X_7))  SS_DELAY(10) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_RALT(SS_TAP(X_EQUAL))SS_DELAY(10)  SS_LSFT(SS_TAP(X_NUBS))SS_DELAY(10)  SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_0))SS_DELAY(10)  SS_LSFT(SS_TAP(X_NUBS))SS_DELAY(10)  SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_4:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_SLASH)SS_DELAY(10)  SS_LSFT(SS_TAP(X_NUBS))SS_DELAY(10)  SS_TAP(X_SPACE));
    }
    break;

    case DUAL_FUNC_0:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(DK_ASTR);
        } else {
          unregister_code16(DK_ASTR);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_LEFT_GUI);
        } else {
          unregister_code16(KC_LEFT_GUI);
        }  
      }  
      return false;
    case DUAL_FUNC_1:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(DK_SLSH);
        } else {
          unregister_code16(DK_SLSH);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_LEFT_SHIFT);
        } else {
          unregister_code16(KC_LEFT_SHIFT);
        }  
      }  
      return false;
    case DUAL_FUNC_2:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(DK_EQL);
        } else {
          unregister_code16(DK_EQL);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_LEFT_CTRL);
        } else {
          unregister_code16(KC_LEFT_CTRL);
        }  
      }  
      return false;
    case DUAL_FUNC_3:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(DK_EXLM);
        } else {
          unregister_code16(DK_EXLM);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_LEFT_ALT);
        } else {
          unregister_code16(KC_LEFT_ALT);
        }  
      }  
      return false;
    case DUAL_FUNC_4:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(DK_LPRN);
        } else {
          unregister_code16(DK_LPRN);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_LEFT_CTRL);
        } else {
          unregister_code16(KC_LEFT_CTRL);
        }  
      }  
      return false;
    case DUAL_FUNC_5:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(DK_RPRN);
        } else {
          unregister_code16(DK_RPRN);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_LEFT_SHIFT);
        } else {
          unregister_code16(KC_LEFT_SHIFT);
        }  
      }  
      return false;
    case DUAL_FUNC_6:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(DK_HASH);
        } else {
          unregister_code16(DK_HASH);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_LEFT_GUI);
        } else {
          unregister_code16(KC_LEFT_GUI);
        }  
      }  
      return false;
    case DUAL_FUNC_7:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(DK_PERC);
        } else {
          unregister_code16(DK_PERC);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_LEFT_ALT);
        } else {
          unregister_code16(KC_LEFT_ALT);
        }  
      }  
      return false;
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}
