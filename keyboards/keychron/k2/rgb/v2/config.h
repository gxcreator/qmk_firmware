/* Copyright 2022 Philip Mourdjis <philip.j.m@gmail.com>
 * Copyright 2023 KeijoMika (https://github.com/KeijoMika)
 * Copyright 2023 Santanu Paik (https://github.com/ITNerd69)
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

#pragma once

/* RGB defines */
#define SN32F2XX_RGB_MATRIX_ROW_PINS { C3, C1, C0, C6, C5, C4, C9, C8, C7, C12, C11, C10, B13, C14, C13, B14, B15, D3 }

/* DIP switch defines */
#define DIP_BT_EN   (0) // 0: Disable, 1: Enable
#define DIP_WIN_MAC (1) // 0: Windows, 1: Mac
#define DIP_SWITCH_PINS { D4, D5 }

/* Bluetooth defines */
#define ITON_BT_ENABLE_ACK
#define BLUETOOTH_MANUAL_INIT

/* QMK defines */
#define DYNAMIC_KEYMAP_LAYER_COUNT 4
