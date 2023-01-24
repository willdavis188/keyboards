// Copyright 2023 Will Davis (@willdavis188)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/* USB Device descriptor parameter */
//#define VENDOR_ID       0xEEEE
//#define PRODUCT_ID      0x0001
//#define DEVICE_VER      0x0001
//#define MANUFACTURER    Will Davis

/* key matrix size */
//#define MATRIX_ROWS 6
//#define MATRIX_COLS 4

/* key matrix pins */
//#define MATRIX_ROW_PINS {B1, F7, B3, F6, B2, F5}
//#define MATRIX_COL_PINS {D1, D0, D4, C6}
//#define UNUSED_PINS

/* diode direction */
//#define DIODE_DIRECTION COL2ROW

/* debounce */
//#define DEBOUNCE 5

/* VIAL info */
#define VIAL_KEYBOARD_UID {0x57, 0x55, 0xC5, 0x1F, 0xCE, 0xBC, 0xB5, 0x6D}
#define VIAL_UNLOCK_COMBO_ROWS { 0, 2}
#define VIAL_UNLOCK_COMBO_COLS { 0, 1}

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
