#include QMK_KEYBOARD_H
#include "version.h"
#include "keymap_german.h"
#include "keymap_nordic.h"
#include "keymap_french.h"
#include "keymap_spanish.h"
#include "keymap_hungarian.h"
#include "keymap_swedish.h"
#include "keymap_br_abnt2.h"
#include "keymap_canadian_multilingual.h"
#include "keymap_german_ch.h"
#include "keymap_jp.h"

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

enum custom_keycodes {
  RGB_SLD = EZ_SAFE_RANGE,
  DYNAMIC_MACRO_RANGE,
};
#include "dynamic_macro.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_ergodox_pretty(
    RALT_T(KC_ESCAPE),KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           LCTL(KC_H),                                     RCTL(KC_U),     KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_MINUS,
    OSM(MOD_LALT),  KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           LCTL(KC_X),                                     RCTL(KC_G),     KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSLASH,
    OSM(MOD_LCTL),  KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                                                           KC_H,           KC_J,           KC_K,           KC_L,           KC_SCOLON,      KC_QUOTE,
    OSM(MOD_LSFT),  KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,           LALT(KC_X),                                     RCTL(KC_C),     KC_N,           KC_M,           KC_UP,          KC_COMMA,       KC_DOT,         OSM(MOD_LSFT),
    KC_APPLICATION, TG(10),         TO(1),          TT(5),          TO(6),                                                                                                          KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_SLASH,       KC_APPLICATION,
                                                                                                    OSM(MOD_LGUI),  TG(2),          TG(2),          OSM(MOD_RGUI),
                                                                                                                    OSL(3),         OSL(3),
                                                                                    LCTL_T(KC_SPACE),LALT_T(KC_BSPACE),TG(4),          TG(4),          RALT_T(KC_TAB), RCTL_T(KC_ENTER)
  ),
  [1] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, TG(10),         TO(0),          KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_ergodox_pretty(
    KC_GRAVE,       KC_EXLM,        KC_AT,          KC_HASH,        KC_DLR,         KC_PERC,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_CIRC,        KC_AMPR,        KC_KP_ASTERISK, KC_KP_SLASH,    KC_KP_MINUS,    KC_EQUAL,
    KC_TRANSPARENT, KC_QUES,        KC_DLR,         KC_LCBR,        KC_RCBR,        KC_AMPR,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_PIPE,        KC_KP_7,        KC_8,           KC_KP_9,        KC_KP_PLUS,     KC_TRANSPARENT,
    KC_TRANSPARENT, KC_DOT,         KC_HASH,        KC_LPRN,        KC_RPRN,        KC_PIPE,                                                                        KC_BSLASH,      KC_KP_4,        KC_5,           KC_6,           KC_KP_PLUS,     KC_TRANSPARENT,
    KC_TRANSPARENT, KC_MINUS,       KC_PERC,        KC_LBRACKET,    KC_RBRACKET,    KC_CIRC,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_EQUAL,       KC_KP_1,        KC_2,           KC_3,           KC_KP_ENTER,    KC_TRANSPARENT,
    KC_TRANSPARENT, TO(0),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_ergodox_pretty(
    LCTL_T(KC_LALT),KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         RCTL_T(KC_RALT),
    KC_TRANSPARENT, KC_F11,         KC_F12,         KC_F13,         KC_F14,         KC_F15,         KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F16,         KC_F17,         KC_F18,         KC_F19,         KC_F20,         KC_NO,
    KC_TRANSPARENT, TO(1),          TO(2),          KC_NO,          TO(4),          TO(5),                                                                          TO(6),          TO(7),          TO(8),          TO(9),          TO(0),          KC_NO,
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT,
    KC_TRANSPARENT, TO(0),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, LALT(LCTL(KC_F1)),LALT(LCTL(KC_F2)),LALT(LCTL(KC_F3)),LALT(LCTL(KC_F4)),LALT(LCTL(KC_F5)),KC_TRANSPARENT,                                 KC_X,           RALT(RCTL(KC_F6)),RALT(RCTL(KC_F7)),LALT(LCTL(KC_F8)),RALT(RCTL(KC_F9)),KC_O,           RCTL(KC_BSLASH),
    KC_TRANSPARENT, KC_INSERT,      KC_HOME,        KC_UP,          KC_PGUP,        KC_NO,          KC_TRANSPARENT,                                 KC_PIPE,        KC_TRANSPARENT, KC_MS_ACCEL0,   KC_MS_ACCEL1,   KC_MS_ACCEL2,   KC_TRANSPARENT, KC_Z,
    KC_TRANSPARENT, KC_DELETE,      KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_NO,                                                                          KC_TRANSPARENT, KC_MS_BTN1,     KC_MS_BTN3,     KC_MS_BTN2,     KC_TRANSPARENT, KC_PLUS,
    KC_TRANSPARENT, KC_NO,          KC_END,         KC_NO,          KC_PGDOWN,      KC_NO,          KC_TRANSPARENT,                                 KC_UNDS,        KC_TRANSPARENT, KC_MS_WH_LEFT,  KC_MS_UP,       KC_MS_WH_RIGHT, KC_TRANSPARENT, KC_MINUS,
    KC_TRANSPARENT, TO(0),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_TRANSPARENT, KC_D,
                                                                                                    KC_AUDIO_MUTE,  KC_AUDIO_VOL_UP,KC_MEDIA_REWIND,KC_MEDIA_FAST_FORWARD,
                                                                                                                    KC_AUDIO_VOL_DOWN,KC_MEDIA_EJECT,
                                                                                    LCTL(KC_V),     LALT(KC_V),     KC_TRANSPARENT, KC_TRANSPARENT, KC_MEDIA_STOP,  KC_MEDIA_PLAY_PAUSE
  ),
  [5] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, TO(0),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, DYN_REC_STOP,   DYN_REC_STOP,   KC_TRANSPARENT,
                                                                                                                    DYN_REC_START1, DYN_REC_START2,
                                                                                    DYN_MACRO_PLAY1,KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, DYN_MACRO_PLAY2
  ),
  [6] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, TO(0),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [7] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, TO(0),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [8] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, TO(0),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [9] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, TO(0),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [10] = LAYOUT_ergodox_pretty(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          LALT(LCTL(KC_DELETE)),
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          RALT(KC_PSCREEN),
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          RGUI(KC_L),
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          RGB_VAI,        KC_NO,          KC_NO,          KC_NO,
    KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 RGB_HUD,        RGB_VAD,        RGB_HUI,        KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_NO,          KC_NO,          RGB_SLD,        KC_NO,
                                                                                                                    KC_NO,          RGB_MOD,
                                                                                    DYN_MACRO_PLAY1,KC_NO,          KC_NO,          RGB_TOG,        KC_NO,          DYN_MACRO_PLAY2
  ),
};


extern bool g_suspend_state;
extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][DRIVER_LED_TOTAL][3] = {
    [0] = { {29,255,255}, {29,255,255}, {29,255,255}, {29,255,255}, {29,255,255}, {29,255,255}, {29,255,255}, {29,255,255}, {29,255,255}, {29,255,255}, {29,255,255}, {105,255,255}, {29,255,255}, {29,255,255}, {29,255,255}, {29,255,255}, {29,255,255}, {12,225,241}, {29,255,255}, {29,255,255}, {12,225,241}, {12,225,241}, {12,225,241}, {29,255,255}, {29,255,255}, {29,255,255}, {29,255,255}, {29,255,255}, {29,255,255}, {29,255,255}, {29,255,255}, {29,255,255}, {29,255,255}, {29,255,255}, {29,255,255}, {105,255,255}, {29,255,255}, {29,255,255}, {29,255,255}, {29,255,255}, {29,255,255}, {29,255,255}, {29,255,255}, {29,255,255}, {254,101,255}, {215,255,255}, {113,255,255}, {0,0,255} },

    [1] = { {113,255,255}, {113,255,255}, {113,255,255}, {113,255,255}, {113,255,255}, {113,255,255}, {113,255,255}, {113,255,255}, {113,255,255}, {113,255,255}, {113,255,255}, {243,222,234}, {113,255,255}, {113,255,255}, {113,255,255}, {113,255,255}, {113,255,255}, {12,225,241}, {113,255,255}, {113,255,255}, {12,225,241}, {12,225,241}, {12,225,241}, {113,255,255}, {113,255,255}, {113,255,255}, {113,255,255}, {113,255,255}, {113,255,255}, {113,255,255}, {113,255,255}, {113,255,255}, {113,255,255}, {113,255,255}, {113,255,255}, {243,222,234}, {113,255,255}, {113,255,255}, {113,255,255}, {113,255,255}, {113,255,255}, {113,255,255}, {113,255,255}, {113,255,255}, {254,101,255}, {215,255,255}, {29,255,255}, {0,0,255} },

    [2] = { {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {233,218,217}, {233,218,217}, {233,218,217}, {0,255,255}, {0,255,255}, {233,218,217}, {233,218,217}, {233,218,217}, {0,255,255}, {0,255,255}, {233,218,217}, {233,218,217}, {233,218,217}, {0,255,255}, {12,225,241}, {12,225,241}, {12,225,241}, {12,225,241}, {0,255,255}, {14,255,255}, {14,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {14,255,255}, {14,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {14,255,255}, {14,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {14,255,255}, {14,255,255}, {0,255,255}, {0,255,255}, {254,101,255}, {215,255,255}, {113,255,255}, {29,255,255} },

    [3] = { {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {254,101,255}, {113,57,234}, {163,38,234}, {43,255,255}, {29,255,255}, {86,255,255}, {86,255,255}, {12,225,241}, {86,255,255}, {86,255,255}, {12,225,241}, {12,225,241}, {12,225,241}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {215,255,255}, {172,255,255}, {86,255,255}, {0,255,255}, {129,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {254,101,255}, {215,255,255}, {113,255,255}, {29,255,255} },

    [4] = { {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {12,225,241}, {12,225,241}, {12,225,241}, {172,255,255}, {172,255,255}, {172,255,255}, {243,222,234}, {172,255,255}, {172,255,255}, {243,222,234}, {243,222,234}, {243,222,234}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {12,225,241}, {172,255,255}, {172,255,255}, {172,255,255}, {12,225,241}, {12,225,241}, {12,225,241}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,255}, {254,101,255}, {215,255,255}, {113,255,255}, {29,255,255} },

    [5] = { {215,255,255}, {215,255,255}, {215,255,255}, {215,255,255}, {215,255,255}, {215,255,255}, {215,255,255}, {215,255,255}, {215,255,255}, {215,255,255}, {215,255,255}, {215,255,255}, {215,255,255}, {215,255,255}, {215,255,255}, {215,255,255}, {215,255,255}, {215,255,255}, {215,255,255}, {215,255,255}, {215,255,255}, {215,255,255}, {215,255,255}, {215,255,255}, {215,255,255}, {215,255,255}, {215,255,255}, {215,255,255}, {215,255,255}, {215,255,255}, {215,255,255}, {215,255,255}, {215,255,255}, {215,255,255}, {215,255,255}, {215,255,255}, {215,255,255}, {215,255,255}, {215,255,255}, {215,255,255}, {215,255,255}, {215,255,255}, {215,255,255}, {215,255,255}, {254,101,255}, {215,255,255}, {113,255,255}, {29,255,255} },

    [6] = { {254,101,255}, {254,101,255}, {254,101,255}, {254,101,255}, {254,101,255}, {254,101,255}, {254,101,255}, {254,101,255}, {254,101,255}, {254,101,255}, {254,101,255}, {254,101,255}, {254,101,255}, {254,101,255}, {254,101,255}, {254,101,255}, {254,101,255}, {254,101,255}, {254,101,255}, {254,101,255}, {254,101,255}, {254,101,255}, {254,101,255}, {254,101,255}, {254,101,255}, {254,101,255}, {254,101,255}, {254,101,255}, {254,101,255}, {254,101,255}, {254,101,255}, {254,101,255}, {254,101,255}, {254,101,255}, {254,101,255}, {254,101,255}, {254,101,255}, {254,101,255}, {254,101,255}, {254,101,255}, {254,101,255}, {254,101,255}, {254,101,255}, {254,101,255}, {254,101,255}, {215,255,255}, {113,255,255}, {29,255,255} },

    [7] = { {113,57,234}, {113,57,234}, {113,57,234}, {113,57,234}, {113,57,234}, {113,57,234}, {113,57,234}, {113,57,234}, {113,57,234}, {113,57,234}, {113,57,234}, {113,57,234}, {113,57,234}, {113,57,234}, {113,57,234}, {113,57,234}, {113,57,234}, {113,57,234}, {113,57,234}, {113,57,234}, {113,57,234}, {113,57,234}, {113,57,234}, {113,57,234}, {113,57,234}, {113,57,234}, {113,57,234}, {113,57,234}, {113,57,234}, {113,57,234}, {113,57,234}, {113,57,234}, {113,57,234}, {113,57,234}, {113,57,234}, {113,57,234}, {113,57,234}, {113,57,234}, {113,57,234}, {113,57,234}, {113,57,234}, {113,57,234}, {113,57,234}, {113,57,234}, {254,101,255}, {215,255,255}, {113,255,255}, {29,255,255} },

    [8] = { {163,38,234}, {163,38,234}, {163,38,234}, {163,38,234}, {163,38,234}, {163,38,234}, {163,38,234}, {163,38,234}, {163,38,234}, {163,38,234}, {163,38,234}, {163,38,234}, {163,38,234}, {163,38,234}, {163,38,234}, {163,38,234}, {163,38,234}, {163,38,234}, {163,38,234}, {163,38,234}, {163,38,234}, {163,38,234}, {163,38,234}, {163,38,234}, {163,38,234}, {163,38,234}, {163,38,234}, {163,38,234}, {163,38,234}, {163,38,234}, {163,38,234}, {163,38,234}, {163,38,234}, {163,38,234}, {163,38,234}, {163,38,234}, {163,38,234}, {163,38,234}, {163,38,234}, {163,38,234}, {163,38,234}, {163,38,234}, {163,38,234}, {163,38,234}, {254,101,255}, {215,255,255}, {113,255,255}, {29,255,255} },

    [9] = { {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {254,101,255}, {215,255,255}, {113,255,255}, {29,255,255} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < DRIVER_LED_TOTAL; i++) {
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

void rgb_matrix_indicators_user(void) {
  if (g_suspend_state || keyboard_config.disable_layer_led) { return; }
  switch (biton32(layer_state)) {
    case 0:
      set_layer_color(0);
      break;
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
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (!process_record_dynamic_macro(keycode, record)) {
    return false;
  }
  switch (keycode) {
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}

uint32_t layer_state_set_user(uint32_t state) {

  uint8_t layer = biton32(state);

  ergodox_board_led_off();
  ergodox_right_led_1_off();
  ergodox_right_led_2_off();
  ergodox_right_led_3_off();
  switch (layer) {
    case 1:
      ergodox_right_led_1_on();
      break;
    case 2:
      ergodox_right_led_2_on();
      break;
    case 3:
      ergodox_right_led_3_on();
      break;
    case 4:
      ergodox_right_led_1_on();
      ergodox_right_led_2_on();
      break;
    case 5:
      ergodox_right_led_1_on();
      ergodox_right_led_3_on();
      break;
    case 6:
      ergodox_right_led_2_on();
      ergodox_right_led_3_on();
      break;
    case 7:
      ergodox_right_led_1_on();
      ergodox_right_led_2_on();
      ergodox_right_led_3_on();
      break;
    default:
      break;
  }
  return state;
};
