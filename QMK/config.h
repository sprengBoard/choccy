// Copyright 2023 Evan Spreng (@gn3rps)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define EE_HANDS											// Flash handedness to each side (-bl uf2-split-left/right)
#define BOOTMAGIC_LITE_ROW 4 								// ESC key for bootloader mode (left half)
#define BOOTMAGIC_LITE_COLUMN 0 							// ESC key for bootloader mode (left half)
#define BOOTMAGIC_LITE_ROW_RIGHT 9 							// Backspace key for bootloader mode (right half)
#define BOOTMAGIC_LITE_COLUMN_RIGHT 5 						// Backspace key for bootloader mode (right half)
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET 					// Enable double-tapping reset button to enter bootloader mode
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 200U		// How quickly reset button must be tapped to enter bootloader mode

#define SERIAL_USART_TX_PIN GP0     						// USART TX pin

#define DYNAMIC_KEYMAP_LAYER_COUNT 3
#define TAPPING_TERM 500
#define ENCODER_RESOLUTION 2

#define NO_MUSIC_MODE
#define LAYER_STATE_16BIT