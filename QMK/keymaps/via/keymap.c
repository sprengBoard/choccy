        /*
        Copyright 2023 Evan Spreng

        This program is free software: you can redistribute it and/or modify
        it under the terms of the GNU General Public License as published by
        the Free Software Foundation, either version 2 of the License, or
        (at your option) any later version.

        This program is distributed in the hope that it will be useful,
        but WITHOUT ANY WARRANTY; without even the implied warranty of
        MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
        GNU General Public License for more details.

        You should have received a copy of the GNU General Public License
        along with this program.  If not, see <http://www.gnu.org/licenses/>.
        */

        #include QMK_KEYBOARD_H
        #include "choccy.h"

        #define _SC_LK LCMD(LCTL(KC_Q))
        #define _CST_4 SCMD(KC_4)
        #define _CST_5 SCMD(KC_5)
        #define _ZM_IN LCMD(KC_PPLS)
        #define _ZM_OUT LCMD(KC_PMNS)
        #define _ZM_RST LCMD(KC_0)   
        #define _LTAB LAG(KC_LEFT)
        #define _RTAB RAG(KC_RGHT)    
        #define _RFRS LCMD(KC_R)                                     
                               

        enum custom_keycodes {
          SC_LK = SAFE_RANGE,
          CST_4,
          CST_5,
          ZM_IN,
          ZM_OUT,
          ZM_RST,
          LTAB,
          RTAB,
          RFRS
        };

        const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

        //  KEYBOARD MATRIX
        //                                  ┌─────┐                                          ┌─────┐
        //                            ┌─────┤ 0,3 ├─────┬─────┐                  ┌─────┬─────┤ 5,2 ├─────┐ 
        //                      ┌─────┤ 0,2 ├─────┤ 0,4 │ 0,5 │                  │ 5,0 │ 5,1 ├─────┤ 5,3 ├─────┐
        //                      │ 1,1 ├─────┤ 1,3 ├─────┼─────┤                  ├─────┼─────┤ 6,2 ├─────┤ 6,4 │
        //                ┌─────┼─────┤ 1,2 ├─────┤ 1,4 │ 1,5 │                  │ 6,0 │ 6,1 ├─────┤ 6,3 ├─────┼─────┐
        //                │ 1,0 │ 2,1 ├─────┤ 2,3 ├─────┼─────┤                  ├─────┼─────┤ 7,2 ├─────┤ 7,4 │ 6,5 │
        //          ┌─────┼─────┼─────┤ 2,2 ├─────┤ 2,4 │ 2,5 │                  │ 7,0 │ 7,1 ├─────┤ 7,3 ├─────┼─────┼─────┐
        //          │ 0,0 │ 2,0 │ 3,1 ├─────┤ 3,3 ├─────┼─────┼─────┐      ┌─────┼─────┼─────┤ 8,2 ├─────┤ 8,4 │ 7,5 │ 5,5 │
        //          └─────┼─────┼─────┤ 3,2 ├─────┤ 3,4 │ 3,5 │ 0,1 │      │ 5,4 │ 8,0 │ 8,1 ├─────┤ 8,3 ├─────┼─────┼─────┘
        //                │ 3,0 │ 4,1 ├─────┤ 4,3 ├─────┼─────┼─────┤      ├─────┼─────┼─────┤ 9,2 ├─────┤ 9,4 │ 8,5 │
        //                └─────┴─────┤ 4,2 ├─────┤ 4,4 │ 4,5 │ 4,0 │      │ 9,5 │ 9,0 │ 9,1 ├─────┤ 9,3 ├─────┴─────┘
        //                            └─────┘     └─────┴─────┴─────┘      └─────┴─────┴─────┘     └─────┘
        //
        //
        //  MATRIX KEYMAP POSITION
        //
        //     ┌────────┬────────┬────────┬────────┬────────┬────────┐     ┌────────┬────────┬────────┬────────┬────────┬────────┐
        //        0,0      0,1      0,2      0,3      0,4      0,5            5,0      5,1      5,2      5,3      5,4      5,5
        //     ├────────┼────────┼────────┼────────┼────────┼────────┤     ├────────┼────────┼────────┼────────┼────────┼────────┤
        //        1,0      1,1      1,2      1,3      1,4      1,5            6,0      6,1      6,2      6,3      6,4      6,5  
        //     ├────────┼────────┼────────┼────────┼────────┼────────┤     ├────────┼────────┼────────┼────────┼────────┼────────┤
        //        2,0      2,1      2,2      2,3      2,4      2,5            7,0      7,1      7,2      7,3      7,4      7,5
        //     ├────────┼────────┼────────┼────────┼────────┼────────┤     ├────────┼────────┼────────┼────────┼────────┼────────┤
        //        3,0      3,1      3,2      3,3      3,4      3,5            8,0      8,1      8,2      8,3      8,4      8,5
        //     ├────────┼────────┼────────┼────────┼────────┼────────┤     ├────────┼────────┼────────┼────────┼────────┼────────┤
        //        4,0      4,1      4,2      4,3      4,4      4,5            9,0      9,1      9,2      9,3      9,4      9,5
        //     └────────┴────────┴────────┴────────┴────────┴────────┘     └────────┴────────┴────────┴────────┴────────┴────────┘

            [0] = LAYOUT(       // default layer
        //     ┌────────┬────────┬────────┬────────┬────────┬────────┐     ┌────────┬────────┬────────┬────────┬────────┬────────┐
                KC_TAB,  _RFRS,   KC_2,    KC_3,    KC_4,    KC_5,          KC_6,    KC_7,    KC_8,    KC_9,    KC_MUTE, KC_ENT,
        //     ├────────┼────────┼────────┼────────┼────────┼────────┤     ├────────┼────────┼────────┼────────┼────────┼────────┤
                KC_ESC,  KC_1,    KC_W,    KC_E,    KC_R,    KC_T,          KC_Y,    KC_U,    KC_I,    KC_O,    KC_0,    KC_MINS,
        //     ├────────┼────────┼────────┼────────┼────────┼────────┤     ├────────┼────────┼────────┼────────┼────────┼────────┤
                KC_BSPC,  KC_Q,    KC_S,    KC_D,    KC_F,    KC_G,          KC_H,    KC_J,    KC_K,    KC_L,    KC_P,    KC_LBRC,
        //     ├────────┼────────┼────────┼────────┼────────┼────────┤     ├────────┼────────┼────────┼────────┼────────┼────────┤
                KC_LSFT, KC_A,    KC_X,    KC_C,    KC_V,    KC_B,          KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_QUOT, KC_RSFT,
        //     ├────────┼────────┼────────┼────────┼────────┼────────┤     ├────────┼────────┼────────┼────────┼────────┼────────┤
                KC_LCMD, KC_Z,    KC_CAPS, KC_LALT, KC_LCTL, MO(1),         KC_LEFT, KC_UP,   KC_DOWN, KC_RGHT, KC_SLSH, KC_SPC
        //     └────────┴────────┴────────┴────────┴────────┴────────┘     └────────┴────────┴────────┴────────┴────────┴────────┘
                ),

            [1] = LAYOUT(       // activated with left thumb
        //     ┌────────┬────────┬────────┬────────┬────────┬────────┐     ┌────────┬────────┬────────┬────────┬────────┬────────┐
                _______, _______, _______, _SC_LK,  _CST_4,  _CST_5,        _______, _______, _______, _______, _______, _______,
        //     ├────────┼────────┼────────┼────────┼────────┼────────┤     ├────────┼────────┼────────┼────────┼────────┼────────┤
                KC_GRV,  _______, _______, _______, _______, _______,       _______, KC_P7,   KC_P8,   KC_P9,   _______, KC_EQL,
        //     ├────────┼────────┼────────┼────────┼────────┼────────┤     ├────────┼────────┼────────┼────────┼────────┼────────┤
                KC_DEL,  _______, _______, _______, _______, _______,       _______, KC_P4,   KC_P5,   KC_P6,   _______, KC_RBRC,
        //     ├────────┼────────┼────────┼────────┼────────┼────────┤     ├────────┼────────┼────────┼────────┼────────┼────────┤
                _______, _______, _______, _______, _______, _______,       _______, KC_P1,   KC_P2,   KC_P3,   KC_SCLN, _______,
        //     ├────────┼────────┼────────┼────────┼────────┼────────┤     ├────────┼────────┼────────┼────────┼────────┼────────┤
                _______, _______, _______, _______, _______, _______,       KC_HOME, KC_PGDN, KC_PGUP, KC_END,  KC_BSLS, KC_P0
        //     └────────┴────────┴────────┴────────┴────────┴────────┘     └────────┴────────┴────────┴────────┴────────┴────────┘
                ),

            [2] = LAYOUT(       // activated with right thumb
        //     ┌────────┬────────┬────────┬────────┬────────┬────────┐     ┌────────┬────────┬────────┬────────┬────────┬────────┐
                _______, _______, _______, _______, _______, _______,       _______, _______, _______, _______, _______, _______,
        //     ├────────┼────────┼────────┼────────┼────────┼────────┤     ├────────┼────────┼────────┼────────┼────────┼────────┤
                _______, _______, _______, _______, _______, _______,       _______, _______, _______, _______, _______, _______, 
        //     ├────────┼────────┼────────┼────────┼────────┼────────┤     ├────────┼────────┼────────┼────────┼────────┼────────┤
                _______, _______, _______, _______, _______, _______,       _______, _______, _______, _______, _______, _______,
        //     ├────────┼────────┼────────┼────────┼────────┼────────┤     ├────────┼────────┼────────┼────────┼────────┼────────┤
                _______, _______, _______, _______, _______, _______,       _______, _______, _______, _______, _______, _______,
        //     ├────────┼────────┼────────┼────────┼────────┼────────┤     ├────────┼────────┼────────┼────────┼────────┼────────┤
                _______, _______, _______, _______, _______, _______,       _______, _______, _______, _______, _______, _______
        //     └────────┴────────┴────────┴────────┴────────┴────────┘     └────────┴────────┴────────┴────────┴────────┴────────┘
                ),
        };

        #if defined(ENCODER_MAP_ENABLE)
        const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
            [0] = { ENCODER_CCW_CW(_LTAB,     _RTAB),           ENCODER_CCW_CW(KC_VOLD, KC_VOLU)  },
            [1] = { ENCODER_CCW_CW(KC_UP, KC_DOWN),             ENCODER_CCW_CW(_ZM_OUT,   _ZM_IN)  },
            [2] = { ENCODER_CCW_CW(_______, _______),           ENCODER_CCW_CW(_______,     _______)  }
        };
        #endif

        /*
        void matrix_scan_user(void) {
            if(IS_LAYER_ON(3)) {
                register_code(KC_RCMD);    
            } else {
                unregister_code(KC_RCMD);
            }
        };
        */