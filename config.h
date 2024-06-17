/*
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

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

#pragma once

// #define USE_MATRIX_I2C

/* Select hand configuration */
#define SPLIT_USB_DETECT
#define OLED_DRIVER_ENABLE

// #define EE_HANDS

// #define NO_ACTION_MACRO
// #define NO_ACTION_FUNCTION

// #define OLED_DISABLE_TIMEOUT

#define TAPPING_TERM 200

#define OLED_FONT_H "keyboards/crkbd/lib/glcdfont.c"
