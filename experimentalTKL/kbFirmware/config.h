// Copyright 2023 Remon Pel (@rmpel)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

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

//#define MATRIX_ROW_PINS { GP0, GP1, GP2, GP3, GP4, GP5 }
#define MATRIX_ROW_PINS { GP5, GP4, GP3, GP2, GP1, GP0 }
//#define MATRIX_COL_PINS { GP16, GP17, GP18, GP19, GP20, GP21, GP6, GP7, GP8, GP9, GP10, GP11, GP12, GP13, GP14, GP22, GP26 }
#define MATRIX_COL_PINS { GP26, GP22, GP14, GP13, GP12, GP11, GP10, GP9, GP8, GP7, GP6, GP21, GP20, GP19, GP18, GP17, GP16 }

/* COL2ROW, ROW2COL*/
#define DIODE_DIRECTION COL2ROW

/*
#define BACKLIGHT_PWM_DRIVER PWMD2
#define BACKLIGHT_PWM_CHANNEL 2
#define BACKLIGHT_PAL_MODE 2
#define BACKLIGHT_PWM_OUTPUT_FREQUENCY 1000 // Increases backlight PWM freq if compiled with an unmerged PR. Does no harm without it.
*/