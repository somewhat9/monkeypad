// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┐
     * │ A │ B │ C │Ent│
     * ├───┼───┼───┼───┘
     * │ D │ E │ F │
     * ├───┼───┼───┼
     * │ G │ H │ I │
     * └───┴───┴───┘
     */
    [0] = LAYOUT_3x4(
        KC_A,   KC_B,   KC_C,   KC_ENT, 
        KC_D,   KC_E,   KC_F, 
        KC_G,   KC_H,   KC_I
    )
};

#ifdef OLED_ENABLE

bool oled_task_user() {
    oled_set_cursor(0, 1);
    oled_write("Hello World!", false);
    return false;
}

#endif
