#include QMK_KEYBOARD_H
#include "version.h"
#include "i18n.h"
#define MOON_LED_LEVEL LED_LEVEL
#define ML_SAFE_RANGE SAFE_RANGE

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
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
  ST_MACRO_11,
};




const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    TO(2),          KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           DM_PLY2,        
    CW_TOGG,        KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                                           KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           DK_ARNG,        
    KC_TAB,         KC_A,           MT(MOD_LGUI, KC_S),MT(MOD_LSFT, KC_D),MT(MOD_LCTL, KC_F),KC_G,                                           KC_H,           MT(MOD_RCTL, KC_J),MT(MOD_RSFT, KC_K),MT(MOD_RGUI, KC_L),DK_AE,          DK_OSTR,        
    DM_PLY1,        KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           DK_COMM,        DK_DOT,         DK_QUOT,        DK_MINS,        
                                                    LT(4, KC_ESCAPE),LT(3, KC_ENTER),                                LT(5, KC_SPACE),LT(6, KC_BSPC)
  ),
  [1] = LAYOUT_voyager(
    TO(0),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_W,           KC_G,           KC_D,           KC_F,           KC_B,                                           KC_Q,           KC_L,           KC_U,           KC_O,           KC_Y,           DK_AE,          
    KC_TRANSPARENT, KC_R,           MT(MOD_LGUI, KC_S),MT(MOD_LSFT, KC_T),MT(MOD_LCTL, KC_H),KC_K,                                           KC_J,           MT(MOD_RCTL, KC_N),MT(MOD_RSFT, KC_E),MT(MOD_RGUI, KC_A),KC_I,           DK_OSTR,        
    KC_TRANSPARENT, KC_X,           KC_C,           KC_M,           KC_P,           KC_V,                                           KC_Z,           DK_COMM,        DK_DOT,         DK_MINS,        DK_QUOT,        DK_ARNG,        
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_voyager(
    TO(0),          KC_NO,          TO(9),          TO(10),         TO(1),          TO(7),                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
                                                    TO(0),          KC_NO,                                          KC_NO,          KC_NO
  ),
  [3] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          DK_BSLS,        DK_QUES,        DK_TILD,        DK_PIPE,                                        DK_GRV,         DK_DQUO,        DK_LCBR,        DK_RCBR,        KC_NO,          KC_NO,          
    KC_NO,          DK_EXLM,        DK_AT,          DK_HASH,        DK_DLR,         DK_PERC,                                        DK_AMPR,        DK_SLSH,        DK_LPRN,        DK_RPRN,        DK_EQL,         KC_NO,          
    KC_NO,          KC_NO,          DK_LABK,        DK_RABK,        DK_LBRC,        DK_RBRC,                                        DK_ASTR,        DK_PLUS,        DK_MINS,        DK_UNDS,        DK_CIRC,        KC_NO,          
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_voyager(
    KC_NO,          KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,                                          KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          ST_MACRO_0,     KC_NO,          KC_NO,          KC_NO,          KC_F12,         
    KC_NO,          OSM(MOD_RALT),  KC_APPLICATION, KC_NO,          KC_FIND,        KC_NO,                                          KC_NO,          ST_MACRO_1,     ST_MACRO_2,     ST_MACRO_3,     ST_MACRO_4,     KC_NO,          
    KC_NO,          KC_PC_UNDO,     KC_PC_CUT,      KC_PC_COPY,     KC_PC_PASTE,    KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_voyager(
    TO(2),          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_AUDIO_MUTE,  KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_BRIGHTNESS_DOWN,KC_BRIGHTNESS_UP,                                KC_HOME,        KC_PGDN,        KC_PAGE_UP,     KC_END,         KC_NO,          KC_NO,          
    KC_NO,          KC_MEDIA_PREV_TRACK,KC_MEDIA_NEXT_TRACK,KC_MEDIA_STOP,  KC_MEDIA_PLAY_PAUSE,KC_NO,                                          KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          LALT(KC_LEFT),  LCTL(KC_TAB),   LCTL(LSFT(KC_TAB)),LALT(KC_RIGHT), KC_NO,          KC_NO,          
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [6] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_MS_WH_DOWN,  KC_MS_UP,       KC_MS_WH_UP,    KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_MS_ACCEL0,   KC_MS_ACCEL1,   KC_MS_ACCEL2,   KC_NO,                                          KC_MS_WH_LEFT,  KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_MS_WH_RIGHT, KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
                                                    KC_TRANSPARENT, KC_MS_BTN2,                                     KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [7] = LAYOUT_voyager(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          
    KC_KP_1,        KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                                           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TAB,         KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                           KC_TRANSPARENT, KC_J,           KC_K,           KC_L,           DK_AE,          KC_TRANSPARENT, 
    OSM(MOD_LALT),  KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_ENTER,       
                                                    MT(MOD_LSFT, KC_KP_0),LT(8, KC_KP_9),                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [8] = LAYOUT_voyager(
    TO(0),          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          
    KC_NO,          KC_KP_4,        KC_KP_5,        KC_UP,          KC_KP_6,        KC_KP_7,                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_KP_2,        KC_KP_3,        KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_KP_8,                                        KC_TRANSPARENT, KC_J,           KC_K,           KC_L,           DK_AE,          KC_TRANSPARENT, 
    KC_NO,          KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,                                          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [9] = LAYOUT_voyager(
    TO(0),          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          RGB_SLD,        RGB_MODE_FORWARD,TOGGLE_LAYER_COLOR,RGB_TOG,        KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          RGB_SPD,        RGB_SPI,        RGB_VAD,        RGB_VAI,        LED_LEVEL,                                      KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          RGB_HUD,        RGB_HUI,        RGB_SAD,        RGB_SAI,        KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
                                                    KC_NO,          KC_NO,                                          KC_NO,          KC_NO
  ),
  [10] = LAYOUT_voyager(
    TO(0),          DM_REC1,        DM_REC2,        DM_RSTP,        KC_NO,          KC_NO,                                          DM_PLY1,        DM_PLY2,        KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, 
    KC_NUM,         KC_NO,          KC_NO,          KC_UP,          LGUI(KC_E),     KC_NO,                                          DK_SLSH,        KC_7,           KC_8,           KC_9,           DK_ASTR,        KC_DELETE,      
    KC_NO,          KC_NO,          KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_NO,                                          DK_MINS,        ST_MACRO_5,     ST_MACRO_6,     KC_6,           DK_PLUS,        LSFT(KC_TAB),   
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          DK_DOT,         ST_MACRO_7,     ST_MACRO_8,     ST_MACRO_9,     DK_EQL,         ST_MACRO_10,    
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 ST_MACRO_11,    KC_TRANSPARENT
  ),
};

// Modified, by me
const char chordal_hold_layout[MATRIX_ROWS][MATRIX_COLS] PROGMEM = LAYOUT(
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  '*', '*', '*', '*'
);



extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [1] = { {169,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {20,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {0,0,0}, {20,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {0,0,0}, {20,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {20,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {20,255,255}, {0,0,0}, {0,0,0} },

    [2] = { {169,255,255}, {213,77,168}, {39,255,255}, {146,221,254}, {70,255,255}, {0,255,255}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {169,255,255}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168} },

    [3] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {31,190,254}, {31,190,254}, {31,190,254}, {31,190,254}, {0,0,0}, {31,190,254}, {31,190,254}, {31,190,254}, {31,190,254}, {31,190,254}, {0,0,0}, {0,0,0}, {15,231,254}, {15,231,254}, {15,231,254}, {15,231,254}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {83,219,202}, {83,219,202}, {15,231,254}, {15,231,254}, {0,0,0}, {0,0,0}, {31,190,254}, {31,190,254}, {15,231,254}, {15,231,254}, {127,219,202}, {0,0,0}, {127,219,202}, {127,219,202}, {127,219,202}, {31,190,254}, {127,219,202}, {0,0,0}, {0,0,0}, {0,0,0} },

    [4] = { {0,0,0}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,255,255}, {0,0,0}, {83,219,202}, {0,0,0}, {0,0,0}, {83,219,202}, {83,219,202}, {83,219,202}, {83,219,202}, {0,0,0}, {0,0,0}, {0,0,0}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {213,77,168}, {0,0,0}, {72,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {213,77,168}, {0,0,0}, {201,218,204}, {201,218,204}, {201,218,204}, {201,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {223,218,204}, {0,0,0} },

    [5] = { {169,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,94,237}, {114,45,252}, {114,45,252}, {38,161,255}, {38,161,255}, {0,0,0}, {211,156,249}, {211,156,249}, {211,156,249}, {211,156,249}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {0,0,0}, {0,0,0}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {0,0,0}, {0,0,0}, {0,232,185}, {0,232,185}, {0,232,185}, {0,232,185}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [6] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {74,255,255}, {74,255,255}, {74,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {31,218,204}, {31,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {38,161,255}, {114,45,252}, {38,161,255}, {0,0,0}, {0,0,0}, {38,161,255}, {114,45,252}, {114,45,252}, {114,45,252}, {38,161,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {31,218,204}, {0,0,0} },

    [7] = { {131,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {41,255,255}, {22,255,255}, {169,255,255}, {169,255,255}, {43,255,255}, {216,161,255}, {169,255,255}, {131,255,255}, {0,245,245}, {0,245,245}, {0,245,245}, {0,245,245}, {22,255,255}, {131,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {131,255,255}, {221,218,204}, {199,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [8] = { {169,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {199,255,255}, {199,255,255}, {131,255,255}, {199,255,255}, {213,77,168}, {131,255,255}, {199,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {213,77,168}, {0,0,0}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [9] = { {169,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,170}, {43,255,255}, {194,255,255}, {22,255,255}, {0,0,0}, {0,0,0}, {172,255,255}, {0,255,255}, {159,255,170}, {0,0,255}, {129,255,170}, {0,0,0}, {129,255,255}, {215,255,255}, {86,116,178}, {86,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [10] = { {169,255,255}, {22,255,255}, {22,255,255}, {0,255,255}, {0,0,0}, {0,0,0}, {40,195,255}, {0,0,0}, {0,0,0}, {131,255,255}, {118,255,252}, {0,0,0}, {0,0,0}, {0,0,0}, {131,255,255}, {131,255,255}, {131,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {225,218,255}, {225,218,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {251,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {74,255,255}, {223,218,204}, {251,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {74,255,255}, {131,255,255}, {223,218,204}, {188,255,255}, {188,255,255}, {188,255,255}, {42,218,204}, {131,255,255}, {188,255,255}, {223,218,204} },

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
    case 10:
      set_layer_color(10);
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
    case ST_MACRO_5:
    if (record->event.pressed) {
      SEND_STRING(SS_LGUI(SS_TAP(X_M))SS_DELAY(10)  SS_TAP(X_4)SS_DELAY(10)  SS_TAP(X_TAB));
    }
    break;
    case ST_MACRO_6:
    if (record->event.pressed) {
      SEND_STRING(SS_LGUI(SS_TAP(X_M))SS_DELAY(10)  SS_TAP(X_5)SS_DELAY(10)  SS_TAP(X_TAB));
    }
    break;
    case ST_MACRO_7:
    if (record->event.pressed) {
      SEND_STRING(SS_LGUI(SS_TAP(X_M))SS_DELAY(10)  SS_TAP(X_1)SS_DELAY(10)  SS_TAP(X_TAB));
    }
    break;
    case ST_MACRO_8:
    if (record->event.pressed) {
      SEND_STRING(SS_LGUI(SS_TAP(X_M))SS_DELAY(10)  SS_TAP(X_2)SS_DELAY(10)  SS_TAP(X_TAB));
    }
    break;
    case ST_MACRO_9:
    if (record->event.pressed) {
      SEND_STRING(SS_LGUI(SS_TAP(X_M))SS_DELAY(10)  SS_TAP(X_3)SS_DELAY(10)  SS_TAP(X_TAB));
    }
    break;
    case ST_MACRO_10:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_DOWN)SS_DELAY(10)  SS_LCTL(SS_TAP(X_LEFT))SS_DELAY(10)  SS_TAP(X_RIGHT));
    }
    break;
    case ST_MACRO_11:
    if (record->event.pressed) {
      SEND_STRING(SS_LGUI(SS_TAP(X_M))SS_DELAY(10)  SS_TAP(X_0)SS_DELAY(10)  SS_TAP(X_TAB));
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








// Custom qmk-config, merged with https://github.com/angryluck/my-custom-zsa-keymap
// Fix CAPS_WORD
bool caps_word_press_user(uint16_t keycode) {
    switch (keycode) {
        // Keycodes that continue Caps Word, with shift applied.
        case KC_A ... KC_Z:
        // Danish placement of KC_MINS
        case KC_SLSH:
            add_weak_mods(MOD_BIT(KC_LSFT));  // Apply shift to next key.
            return true;

        // Keycodes that continue Caps Word, without shifting.
        case KC_1 ... KC_0:
        case KC_BSPC:
        case KC_DEL:
        case KC_UNDS:
            return true;

        default:
            return false;  // Deactivate Caps Word.
    }
}
