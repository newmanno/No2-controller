/*
Copyright 2019 Danny Nguyen <danny@keeb.io>
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

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xCB10
#define PRODUCT_ID      0x1133
#define DEVICE_VER      0x0100
#define MANUFACTURER    No2 designs
#define PRODUCT         BDN9 Rev. 1

/* key matrix size */
#define MATRIX_ROWS 1
#define MATRIX_COLS 12

/* Keyboard Matrix Assignments */
#define DIRECT_PINS { \
    {      F6,            F7, \
           D4,         B1,   B3, \
       C6,     D7, \
	       E6,         B6,   B2, \
               B4, B5} \
}



/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE