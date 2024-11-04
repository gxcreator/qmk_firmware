/*
Copyright 2024 mintyleaf

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

/* Extended keycodes for controlling Bluetooth */
enum BT_keycodes {
    KC_BTPROF0 = SAFE_RANGE,  // Set bluetooth profile 0
    KC_BTPROF1,               // Set bluetooth profile 1
    KC_BTPROF2,               // Set bluetooth profile 2
    KC_BTPAIR,                // Start pairing mode
    KC_BTTOGL,                // Toggle bluetooth mode
    KC_BTRST,                 // Reset bluetooth module
    KC_BTBATT,                // Show battery level
    K2_SAFE_RANGE
};

enum layer_names {
    WIN_BASE = 0, // Windows base layer
    WIN_FN   = 1, // Windows with FN key
    MAC_BASE = 2, // Mac base layer
    MAC_FN   = 3, // Mac with FN key
};

#define KC_TASK LGUI(KC_TAB)       // Task viewer
#define KC_FLXP LGUI(KC_E)         // Windows file explorer
#define KC_MCTL KC_MISSION_CONTROL // Mission Control
#define KC_LPAD KC_LAUNCHPAD       // Launchpad
