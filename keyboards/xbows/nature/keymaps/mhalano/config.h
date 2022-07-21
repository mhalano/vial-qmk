/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

// x-bows nature vial uid
#define VIAL_KEYBOARD_UID {0x7E, 0x49, 0xEB, 0x6F, 0xA4, 0x26, 0x44, 0x1C}

// esc and enter
#define VIAL_UNLOCK_COMBO_ROWS {0, 3}
#define VIAL_UNLOCK_COMBO_COLS {0, 13}

#ifdef RGB_MATRIX_ENABLE
#    undef RGB_MATRIX_STARTUP_MODE // Unsets the default mode, if none has been set
#    undef ENABLE_RGB_MATRIX_SOLID_COLOR               // Static single hue, no speed support
#    undef ENABLE_RGB_MATRIX_GRADIENT_UP_DOWN          // Static gradient top to bottom, speed controls how much gradient changes
#    undef ENABLE_RGB_MATRIX_GRADIENT_LEFT_RIGHT
#    undef ENABLE_RGB_MATRIX_BAND_SAT                  // Single hue band fading saturation scrolling left to right
#    undef ENABLE_RGB_MATRIX_BAND_VAL                  // Single hue band fading brightness scrolling left to right
#    undef ENABLE_RGB_MATRIX_BAND_PINWHEEL_SAT         // Single hue 3 blade spinning pinwheel fades saturation
#    undef ENABLE_RGB_MATRIX_BAND_SPIRAL_VAT           // Single hue spinning spiral fades saturation
#    undef ENABLE_RGB_MATRIX_CYCLE_OUT_IN_DUAL         // Full dual gradients scrolling out to in
#    undef ENABLE_RGB_MATRIX_CYCLE_SPIRAL              // Full gradient spinning spiral around center of keyboard
#    undef ENABLE_RGB_MATRIX_DIGITAL_RAIN              // That famous computer simulation
#    undef ENABLE_RGB_MATRIX_TYPING_HEATMAP            // How hot is your WPM!
#    undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE       // Hue & value pulse near a single key hit then fades value out
#    undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE  // Hue & value pulse near multiple key hits then fades value out
#    undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_CROSS      // Hue & value pulse the same column and row of a single key hit then fades value out
#    undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTICROSS // Hue & value pulse the same column and row of multiple key hits then fades value out
#    undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS      // Hue & value pulse away on the same column and row of a single key hit then fades value out
#    undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS // Hue & value pulse away on the same column and row of multiple key hits then fades value out
#    undef ENABLE_RGB_MATRIX_SPLASH                    // Full gradient & value pulse away from a single key hit then fades value out
#    undef ENABLE_RGB_MATRIX_MULTISPLASH               // Full gradient & value pulse away from multiple key hits then fades value out
#    undef ENABLE_RGB_MATRIX_SOLID_SPLASH              // Hue & value pulse away from a single key hit then fades value out
#    undef ENABLE_RGB_MATRIX_SOLID_MULTISPLASH         // Hue & value pulse away from multiple key hits then fades value out
#    undef ENABLE_RGB_MATRIX_ALPHAS_MODS
#    undef ENABLE_RGB_MATRIX_BREATHING
#    undef ENABLE_RGB_MATRIX_BAND_PINWHEEL_VAL
#    undef ENABLE_RGB_MATRIX_BAND_SPIRAL_SAT
#    undef ENABLE_RGB_MATRIX_CYCLE_ALL
#    undef ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
#    undef ENABLE_RGB_MATRIX_CYCLE_UP_DOWN
#    undef ENABLE_RGB_MATRIX_CYCLE_OUT_IN
#    undef ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON
#    undef ENABLE_RGB_MATRIX_CYCLE_PINWHEEL
#    undef ENABLE_RGB_MATRIX_DUAL_BEACON
#    undef ENABLE_RGB_MATRIX_RAINBOW_BEACON
#    undef ENABLE_RGB_MATRIX_RAINBOW_PINWHEELS
#    undef ENABLE_RGB_MATRIX_RAINDROPS
#    undef ENABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS
#    undef ENABLE_RGB_MATRIX_HUE_BREATHING
#    undef ENABLE_RGB_MATRIX_HUE_PENDULUM
#    undef ENABLE_RGB_MATRIX_HUE_WAVE
#    undef ENABLE_RGB_MATRIX_EFFECT_MAX

#define RGB_DISABLE_TIMEOUT 600000

/*
 * 17 RGB effects are pre-defined in /keyboards/xbows/nature/config.h
 * add a #undef line below to disable unused RGB effect to release space, e.g.,
//  #undef ENABLE_RGB_MATRIX_BAND_SPIRAL_VAL     // Single hue spinning spiral fades brightness

 * See https://docs.qmk.fm/#/feature_rgb_matrix?id=rgb-matrix-effects for all QMK RGB effects
 * add a #define line below to enable other RGB effect, e.g.,
 #define ENABLE_RGB_MATRIX_BAND_SPIRAL_VAL     // Single hue spinning spiral fades brightness
*/
//  #undef ENABLE_RGB_MATRIX_BAND_SPIRAL_VAL     // Single hue spinning spiral fades brightness
#endif

#define CAPS_WORD_IDLE_TIMEOUT 5000
