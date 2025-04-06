// Copyright 2024 Daniel Cervantes (@thedanielcer)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define DYNAMIC_KEYMAP_LAYER_COUNT 8

/* USB Device descriptor parameter */
/* #define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6060
#define DEVICE_VER      0x0001
#define MANUFACTURER    qmkbuilder
#define PRODUCT         keyboard
#define DESCRIPTION     Keyboard
 */
/* key matrix size */
/* #define MATRIX_ROWS 4
#define MATRIX_COLS 4 */

/* key matrix pins */
/* #define MATRIX_ROW_PINS { D7, E6, B4, B5 }
#define MATRIX_COL_PINS { B1, B3, B2, B6 } */

/* COL2ROW or ROW2COL */
/* #define DIODE_DIRECTION COL2ROW

#ifdef RGB_DI_PIN
#define RGBLED_NUM 0
#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8
#endif */

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
