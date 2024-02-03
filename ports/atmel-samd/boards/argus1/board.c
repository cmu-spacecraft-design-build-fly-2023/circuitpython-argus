/*
 * This file is part of the MicroPython project, http://micropython.org/
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2017 Scott Shawcroft for Adafruit Industries
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#include "supervisor/board.h"
#include "mpconfigboard.h"
#include "common-hal/microcontroller/Pin.h"
#include "hal/include/hal_gpio.h"
#include "shared-bindings/pwmio/PWMOut.h"

void board_init(void) {
    // Burn wire PWM for burn wire 1
    pwmio_pwmout_obj_t pwm_burn1;
    common_hal_pwmio_pwmout_construct(&pwm_burn1, &pin_PB31, 4096, 2, false);
    common_hal_pwmio_pwmout_never_reset(&pwm_burn1);

    // Burn wire PWM for burn wire 2
    pwmio_pwmout_obj_t pwm_burn2;
    common_hal_pwmio_pwmout_construct(&pwm_burn2, &pin_PB09, 4096, 2, false);
    common_hal_pwmio_pwmout_never_reset(&pwm_burn2);

    // Burn wire PWM for burn wire 3
    pwmio_pwmout_obj_t pwm_burn3;
    common_hal_pwmio_pwmout_construct(&pwm_burn3, &pin_PA04, 4096, 2, false);
    common_hal_pwmio_pwmout_never_reset(&pwm_burn3);

    // Burn wire PWM for burn wire 4
    pwmio_pwmout_obj_t pwm_burn4;
    common_hal_pwmio_pwmout_construct(&pwm_burn4, &pin_PB14, 4096, 2, false);
    common_hal_pwmio_pwmout_never_reset(&pwm_burn4);
}

// Use the MP_WEAK supervisor/shared/board.c versions of routines not defined here.
