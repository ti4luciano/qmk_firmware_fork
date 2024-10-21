/* Copyright 2020 bt66tech
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
#include "keymap_brazilian_abnt2.h"

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _BASE,
    _FN
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Base */
[_BASE] = LAYOUT (
		KC_UP, BR_TILD, KC_F6, KC_H, KC_F5, KC_G, KC_F4, BR_BSLS, KC_ESC, KC_LALT,
		KC_LEFT, KC_DOWN, KC_RGHT, BR_SCLN, BR_SLSH, KC_N, KC_SPC, KC_B, KC_MUTE, KC_RALT,
		KC_DOT, BR_RBRC, KC_COMM, KC_M, KC_ENT, KC_V, KC_C, KC_X, KC_Z, KC_RSFT,
		KC_L, BR_CCED, KC_K, KC_J, KC_PGDN, MO(_FN), KC_F, KC_D, KC_S, KC_A,
		KC_O, KC_P, KC_I, KC_U, KC_PGUP, KC_R, KC_E, KC_W, KC_Q,
		KC_END, KC_F11, KC_F12, KC_9, KC_0, KC_8, KC_7, KC_LGUI, KC_F10, KC_4, KC_3, KC_2, KC_1, KC_INS,
		KC_HOME, KC_DEL, KC_PSCR, KC_F8, KC_MINS, KC_EQL, KC_6, KC_F9, KC_5, KC_F2, KC_F1, BR_QUOT, KC_LCTL,
		KC_F7, BR_ACUT, BR_LBRC, KC_Y, KC_APP, KC_BSPC, KC_T, KC_F3, KC_CAPS, KC_TAB, KC_LSFT),
/* Funcao */
  [_FN] = LAYOUT (
		KC_TRNS, KC_TRNS, BL_TOGG, KC_TRNS, KC_BRIU, KC_TRNS, KC_BRID, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MUTE, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_VOLD, KC_VOLU, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MNXT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_MPRV, KC_TRNS, KC_TRNS, KC_TRNS, KC_MPLY, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS)
};
