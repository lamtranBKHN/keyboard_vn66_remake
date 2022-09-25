/*
Copyright 2021-2022 Alin M Elena <alinm.elena@gmail.com>

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

#ifdef OLED_ENABLE

    #define OLED_DISPLAY_128X64
    #define I2C1_SCL_PIN        B9
    #define I2C1_SDA_PIN        B8
    #define OLED_BRIGHTNESS 128
    #define OLED_TIMEOUT 1800000
    #define OLED_FONT_H "keyboards/vn66_remake_oled/lib/glcdfont.c"

#endif
