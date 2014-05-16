/*
 * Author: Thomas Ingleby <thomas.c.ingleby@intel.com>
 * Copyright (c) 2014 Intel Corporation.
 *
 * Permission is hereby granted, free of charge, to any person obtaining
 * a copy of this software and associated documentation files (the
 * "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, sublicense, and/or sell copies of the Software, and to
 * permit persons to whom the Software is furnished to do so, subject to
 * the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
 * LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
 * OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
 * WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

#include <stdlib.h>
#include <string.h>

#include "maa.h"

maa_board_t*
maa_intel_galileo_rev_d()
{
    maa_board_t* b = (maa_board_t*) malloc(sizeof(maa_board_t));
    if (b == NULL)
        return NULL;

    b->phy_pin_count = 20;
    b->gpio_count = 14;
    b->aio_count = 6;

    b->pins = (maa_pininfo_t*) malloc(sizeof(maa_pininfo_t)*25);

    //GPIO IO0 - IO10
    strncpy(b->pins[0].name, "IO0", 8);
    b->pins[0].capabilites = (maa_pincapabilities_t) {1,1,0,0,0,0,0};
    b->pins[0].gpio.pinmap = 50;
    b->pins[0].gpio.parent_id = 0;
    b->pins[0].gpio.mux_total = 1;
    b->pins[0].gpio.mux[0].pin = 40;
    b->pins[0].gpio.mux[0].value = 1;

    strncpy(b->pins[1].name, "IO1", 8);
    b->pins[1].capabilites = (maa_pincapabilities_t) {1,1,0,0,0,0,0};
    b->pins[1].gpio.pinmap = 51;
    b->pins[1].gpio.mux_total = 1;
    b->pins[1].gpio.mux[0].pin = 41;
    b->pins[1].gpio.mux[0].value = 1;

    strncpy(b->pins[2].name, "IO2", 8);
    b->pins[2].capabilites = (maa_pincapabilities_t) {1,1,0,1,0,0,0};
    b->pins[2].gpio.pinmap = 32;
    b->pins[2].gpio.mux_total = 1;
    b->pins[2].gpio.mux[0].pin = 31;
    b->pins[2].gpio.mux[0].value = 1;

    strncpy(b->pins[3].name, "IO3", 8);
    b->pins[3].capabilites = (maa_pincapabilities_t) {1,1,1,1,0,0,0};
    b->pins[3].gpio.pinmap = 18;
    b->pins[3].gpio.mux_total = 1;
    b->pins[3].gpio.mux[0].pin = 30;
    b->pins[3].gpio.mux[0].value = 1;
    b->pins[3].fast_gpio.pinmap = 15;
    b->pins[3].fast_gpio.mux_total = 1;
    b->pins[3].fast_gpio.mux[0].pin = 30;
    b->pins[3].fast_gpio.mux[0].value = 0;
    b->pins[3].pwm.pinmap = 3;
    b->pins[3].pwm.parent_id = 0;
    b->pins[3].pwm.mux_total = 1;
    b->pins[3].pwm.mux[0].pin = 30;
    b->pins[3].pwm.mux[0].value = 1;


    strncpy(b->pins[4].name, "IO4", 8);
    b->pins[4].capabilites = (maa_pincapabilities_t) {1,1,0,0,0,0,0};
    b->pins[4].gpio.pinmap = 28;
    b->pins[4].gpio.mux_total = 0;

    strncpy(b->pins[5].name, "IO5", 8);
    b->pins[5].capabilites = (maa_pincapabilities_t) {1,1,1,0,0,0,0};
    b->pins[5].gpio.pinmap = 17;
    b->pins[5].gpio.mux_total = 0;
    b->pins[5].pwm.pinmap = 5;
    b->pins[5].pwm.parent_id = 0;
    b->pins[5].pwm.mux_total = 0;

    strncpy(b->pins[6].name, "IO6", 8);
    b->pins[6].gpio.pinmap = 24;
    b->pins[6].capabilites = (maa_pincapabilities_t) {1,1,1,0,0,0,0};
    b->pins[6].gpio.mux_total = 0;
    b->pins[6].pwm.pinmap = 6;
    b->pins[6].pwm.parent_id = 0;
    b->pins[6].pwm.mux_total = 0;

    strncpy(b->pins[7].name, "IO7", 8);
    b->pins[7].capabilites = (maa_pincapabilities_t) {1,1,0,0,0,0,0};
    b->pins[7].gpio.pinmap = 27;
    b->pins[7].gpio.mux_total = 0;

    strncpy(b->pins[8].name, "IO8", 8);
    b->pins[8].capabilites = (maa_pincapabilities_t) {1,1,0,0,0,0,0};
    b->pins[8].gpio.pinmap = 26;
    b->pins[8].gpio.mux_total = 0;

    strncpy(b->pins[9].name, "IO9", 8);
    b->pins[9].capabilites = (maa_pincapabilities_t) {1,1,1,0,0,0,0};
    b->pins[9].gpio.pinmap = 19;
    b->pins[9].gpio.mux_total = 0;

    strncpy(b->pins[10].name, "IO10", 8);
    b->pins[10].capabilites = (maa_pincapabilities_t) {1,1,1,0,1,0,0};
    b->pins[10].gpio.pinmap = 16;
    b->pins[10].gpio.mux_total = 1;
    b->pins[10].gpio.mux[0].pin = 42;
    b->pins[10].gpio.mux[0].value = 1;
    b->pins[10].pwm.pinmap = 7;
    b->pins[10].pwm.parent_id = 0;
    b->pins[10].pwm.mux_total = 1;
    b->pins[10].pwm.mux[0].pin = 42;
    b->pins[10].pwm.mux[0].value = 1;
    b->pins[10].spi.pinmap = 1;
    b->pins[10].spi.mux_total = 1;
    b->pins[10].spi.mux[0].pin = 42;
    b->pins[10].spi.mux[0].value = 0;

    strncpy(b->pins[11].name, "IO11", 8);
    b->pins[11].capabilites = (maa_pincapabilities_t) {1,1,1,0,1,0,0};
    b->pins[11].gpio.pinmap = 25;
    b->pins[11].gpio.mux_total = 1;
    b->pins[11].gpio.mux[0].pin = 43;
    b->pins[11].gpio.mux[0].value = 1;
    b->pins[11].pwm.pinmap = 4;
    b->pins[11].pwm.parent_id = 0;
    b->pins[11].pwm.mux_total = 1;
    b->pins[11].pwm.mux[0].pin = 43;
    b->pins[11].gpio.mux[0].value = 1;
    b->pins[11].spi.pinmap = 1;
    b->pins[11].spi.mux_total = 1;
    b->pins[11].spi.mux[0].pin = 43;
    b->pins[11].spi.mux[0].value = 0;

    strncpy(b->pins[12].name, "IO12", 8);
    b->pins[12].capabilites = (maa_pincapabilities_t) {1,1,0,0,1,0,0};
    b->pins[12].gpio.pinmap = 38;
    b->pins[12].gpio.mux_total = 1;
    b->pins[12].gpio.mux[0].pin = 54;
    b->pins[12].gpio.mux[0].value = 1;
    b->pins[12].spi.pinmap = 1;
    b->pins[12].spi.mux_total = 1;
    b->pins[12].spi.mux[0].pin = 54;
    b->pins[12].spi.mux[0].value = 0;

    strncpy(b->pins[13].name, "IO13", 8);
    b->pins[13].capabilites = (maa_pincapabilities_t) {1,1,0,0,1,0,0};
    b->pins[13].gpio.pinmap = 39;
    b->pins[13].gpio.mux_total = 1;
    b->pins[13].gpio.mux[0].pin = 55;
    b->pins[13].gpio.mux[0].value = 1;
    b->pins[13].spi.pinmap = 1;
    b->pins[13].spi.mux_total = 1;
    b->pins[13].spi.mux[0].pin = 55;
    b->pins[13].spi.mux[0].value = 0;

    strncpy(b->pins[14].name, "A0", 8);
    b->pins[14].capabilites = (maa_pincapabilities_t) {1,1,0,0,0,0,1};
    b->pins[14].gpio.pinmap = 44;
    b->pins[14].gpio.mux_total = 1;
    b->pins[14].gpio.mux[0].pin = 37;
    b->pins[14].gpio.mux[0].value = 1;
    b->pins[14].aio.pinmap = 0;
    b->pins[14].aio.mux_total = 1;
    b->pins[14].aio.mux[0].pin = 37;
    b->pins[14].aio.mux[0].value = 0;

    strncpy(b->pins[15].name, "A1", 8);
    b->pins[15].capabilites = (maa_pincapabilities_t) {1,1,0,0,0,0,1};
    b->pins[15].gpio.pinmap = 45;
    b->pins[15].gpio.mux_total = 1;
    b->pins[15].gpio.mux[0].pin = 36;
    b->pins[15].gpio.mux[0].value = 1;
    b->pins[15].aio.pinmap = 1;
    b->pins[15].aio.mux_total = 1;
    b->pins[15].aio.mux[0].pin = 36;
    b->pins[15].aio.mux[0].value = 0;

    strncpy(b->pins[16].name, "A2", 8);
    b->pins[16].capabilites = (maa_pincapabilities_t) {1,1,0,0,0,0,1};
    b->pins[16].gpio.pinmap = 46;
    b->pins[16].gpio.mux_total = 1;
    b->pins[16].gpio.mux[0].pin = 23;
    b->pins[16].gpio.mux[0].value = 1;
    b->pins[16].aio.pinmap = 2;
    b->pins[16].aio.mux_total = 1;
    b->pins[16].aio.mux[0].pin = 23;
    b->pins[16].aio.mux[0].value = 0;

    strncpy(b->pins[17].name, "A3", 8);
    b->pins[17].capabilites = (maa_pincapabilities_t) {1,1,0,0,0,0,1};
    b->pins[17].gpio.pinmap = 47;
    b->pins[17].gpio.mux_total = 1;
    b->pins[17].gpio.mux[0].pin = 22;
    b->pins[17].gpio.mux[0].value = 1;
    b->pins[17].aio.pinmap = 3;
    b->pins[17].aio.mux_total = 1;
    b->pins[17].aio.mux[0].pin = 22;
    b->pins[17].aio.mux[0].value = 0;

    strncpy(b->pins[18].name, "A4", 8);
    b->pins[18].capabilites = (maa_pincapabilities_t) {1,1,0,0,0,1,1};
    b->pins[18].gpio.pinmap = 48;
    b->pins[18].gpio.mux_total = 2;
    b->pins[18].gpio.mux[0].pin = 29;
    b->pins[18].gpio.mux[0].value = 1;
    b->pins[18].gpio.mux[1].pin = 21;
    b->pins[18].gpio.mux[1].value = 1;
    b->pins[18].i2c.pinmap = 1;
    b->pins[18].i2c.mux_total = 1;
    b->pins[18].i2c.mux[0].pin = 29;
    b->pins[18].i2c.mux[0].value = 0;
    b->pins[18].aio.pinmap = 4;
    b->pins[18].aio.mux_total = 2;
    b->pins[18].aio.mux[0].pin = 29;
    b->pins[18].aio.mux[0].value = 1;
    b->pins[18].aio.mux[1].pin = 21;
    b->pins[18].aio.mux[1].value = 0;

    strncpy(b->pins[19].name, "A5", 8);
    b->pins[19].capabilites = (maa_pincapabilities_t) {1,1,0,0,0,1,1};
    b->pins[19].gpio.pinmap = 49;
    b->pins[19].gpio.mux_total = 2;
    b->pins[19].gpio.mux[0].pin = 29;
    b->pins[19].gpio.mux[0].value = 1;
    b->pins[19].gpio.mux[1].pin = 20;
    b->pins[19].gpio.mux[1].value = 1;
    b->pins[19].i2c.pinmap = 1;
    b->pins[19].i2c.mux_total = 1;
    b->pins[19].i2c.mux[0].pin = 29;
    b->pins[19].i2c.mux[0].value = 0;
    b->pins[19].aio.pinmap = 5;
    b->pins[19].aio.mux_total = 2;
    b->pins[19].aio.mux[0].pin = 29;
    b->pins[19].aio.mux[0].value = 1;
    b->pins[19].aio.mux[1].pin = 20;
    b->pins[19].aio.mux[1].value = 0;

    //BUS DEFINITIONS
    b->i2c_bus_count = 1;
    b->def_i2c_bus = 0;
    b->i2c_bus[0].bus_id = 0;
    b->i2c_bus[0].sda = 17;
    b->i2c_bus[0].scl = 18;

    b->spi_bus_count = 1;
    b->def_spi_bus = 0;
    b->spi_bus[0].bus_id = 1.0;
    b->spi_bus[0].cs = 10;
    b->spi_bus[0].mosi = 11;
    b->spi_bus[0].miso = 12;
    b->spi_bus[0].sclk = 13;

    return b;
}