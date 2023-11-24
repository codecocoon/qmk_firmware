/* Copyright 2022 Thomas Baart <thomas@splitkb.com>
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

#ifdef OLED_ENABLE
  #define OLED_DISPLAY_128X64
#endif

#ifdef RGBLIGHT_ENABLE
// #    define RGBLIGHT_ANIMATIONS
// #    undef RGBLIGHT_EFFECT_STATIC_GRADIENT
// #    undef RGBLIGHT_EFFECT_RAINBOW_SWIRL
#    define RGBLIGHT_MAX_LAYERS 13
#    define RGBLIGHT_LAYERS
#    define RGBLIGHT_SPLIT
#    define RGBLED_NUM 20
#    define RGBLED_SPLIT { 10, 10 }
#    define RGBLIGHT_MAX_LAYERS 13
#    define RGBLIGHT_HUE_STEP  8
#    define RGBLIGHT_SAT_STEP  8
#    define RGBLIGHT_VAL_STEP  8
#    define RGBLIGHT_LIMIT_VAL 150
#    define RGBLIGHT_SLEEP
#endif

// Lets you roll mod-tap keys
#define IGNORE_MOD_TAP_INTERRUPT

#define SPLIT_LAYER_STATE_ENABLE
#define SPLIT_LED_STATE_ENABLE
#define SPLIT_WPM_ENABLE
