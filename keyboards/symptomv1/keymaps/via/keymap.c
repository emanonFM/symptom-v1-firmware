/*
 * Copyright 2026 EmanoN
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <https://www.gnu.org/licenses/>.
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 */


#include QMK_KEYBOARD_H



enum layer_names { 
    _BASE = 0, 
    _QWERTY1,
    _FN
   };




const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
   [_BASE] = LAYOUT_mp10(
                                                KC_PSCR, KC_SCRL, KC_PAUSE,       KC_ESC,      KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,    KC_F7,  KC_F8,   KC_F9,   KC_F10,   KC_F11,   KC_F12,
    KC_NUM,  KC_PSLS, KC_PAST,   KC_PMNS,       KC_PGUP, KC_HOME, KC_INS,         KC_GRAVE,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,     KC_7,   KC_8,    KC_9,    KC_0,     KC_MINS,  KC_EQL,  KC_BACKSPACE,
    KC_KP_7, KC_KP_8, KC_KP_9,   KC_PPLS,       KC_PGDN, KC_END,  KC_DEL,         KC_TAB,      KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,     KC_U,   KC_I,    KC_O,    KC_P,     KC_LBRC,  KC_RBRC, KC_ENT,
    KC_KP_4, KC_P5,   KC_P6,                                                      KC_CAPS,     KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,     KC_J,   KC_K,    KC_L,    KC_SCLN,  KC_QUOT, 	KC_BSLS,   	
    KC_KP_1, KC_KP_2, KC_P3,     KC_PENT,                 KC_UP,                  KC_LSFT,     KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,     KC_M,   KC_COMM, KC_DOT,  KC_SLSH,  KC_RSFT,
    KC_KP_0,          KC_KP_DOT,                KC_LEFT, KC_DOWN, KC_RIGHT,       KC_LCTL,     KC_LGUI, KC_LALT,                   KC_SPC,                    KC_RALT, MO(_FN), KC_RGUI,  KC_RCTL
   ),
   [_QWERTY1] = LAYOUT_mp10(
                                                KC_PSCR, KC_SCRL, KC_PAUSE,       KC_ESC,      KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,    KC_F7,  KC_F8,   KC_F9,   KC_F10,   KC_F11,   KC_F12,
    KC_NUM,  KC_PSLS, KC_PAST,   KC_PMNS,       KC_PGUP, KC_HOME, KC_INS,         KC_GRAVE,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,     KC_7,   KC_8,    KC_9,    KC_0,     KC_MINS,  KC_EQL,  KC_CAPS, 
    KC_KP_7, KC_KP_8, KC_KP_9,   KC_PPLS,       KC_PGDN, KC_END,  KC_DEL,         KC_TAB,               KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,     KC_Y,   KC_U,    KC_I,    KC_O,     KC_P,     KC_LBRC, KC_RBRC, KC_ENT,
    KC_KP_4, KC_P5,   KC_P6,                                                      KC_BACKSPACE,         KC_A,    KC_S,    KC_D,    KC_F,    KC_G,     KC_H,   KC_J,    KC_K,    KC_L,     KC_SCLN,  KC_QUOT, KC_BSLS,   	
    KC_KP_1, KC_KP_2, KC_P3,     KC_PENT,                 KC_UP,                  KC_LALT,              KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,     KC_N,   KC_M,    KC_COMM, KC_DOT,   KC_SLSH,  KC_UP,
    KC_KP_0,          KC_KP_DOT,                KC_LEFT, KC_DOWN, KC_RIGHT,       KC_LCTL,     KC_LGUI, KC_LSFT,                            KC_SPC,                    KC_LEFT, MO(_FN),  KC_DOWN,  KC_RIGHT
  ),
   [_FN] = LAYOUT_mp10(
                                                KC_TRNS,  KC_TRNS,  KC_TRNS,      KC_TRNS,     KC_TRNS,    KC_TRNS,        KC_TRNS, KC_TRNS, KC_TRNS, KC_MPRV, KC_MPLY, KC_MNXT, KC_TRNS, KC_VOLD, KC_VOLU, KC_MUTE,
    KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS,       KC_TRNS,  KC_TRNS,  KC_TRNS,      KC_TRNS,     KC_TRNS,    KC_TRNS,        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS,       KC_TRNS,  KC_TRNS,  KC_TRNS,      KC_TRNS,     PDF(_BASE), KC_TRNS,        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS,  KC_TRNS, KC_TRNS,                                                   KC_TRNS,     KC_TRNS,    KC_TRNS,        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    
    KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS,                 KC_TRNS,                KC_TRNS,     KC_TRNS,    KC_TRNS,  PDF(_QWERTY1), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    QK_MAGIC_TOGGLE_NKRO, KC_TRNS,              KC_TRNS,  KC_TRNS,  KC_TRNS,      KC_TRNS,     KC_TRNS,    KC_TRNS,                              KC_TRNS,               KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
  )


    
};


