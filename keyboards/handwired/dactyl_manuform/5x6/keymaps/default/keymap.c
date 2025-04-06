#include "quantum.h"
#include QMK_KEYBOARD_H


#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2
#define FUSION1 3
#define FUSION2 4

#define RAISE MO(_RAISE)
#define LOWER MO(_LOWER)
#define HOME MO(_QWERTY)
#define FUS1 TO(FUSION1)
#define FUS2 TO(FUSION2)

#define RA RALT
#define VENTAT RSA(KC_TAB)
#define VENTAD RALT(KC_TAB)
#define CERRARV A(KC_F4)
#define NXTCODE A(KC_DOT)
#define SELHOME S(KC_HOME)

enum custom_keycodes {
    CORREO = SAFE_RANGE,
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode)
    {
    case CORREO:
    if (record->event.pressed)
    {
        SEND_STRING("daniel.gonzalez.5@hotmail.com");
    }
    else
    {

    }
        break;
    }

    return true;
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_QWERTY] = LAYOUT_5x6(
        KC_ESC , KC_1  , KC_2  , KC_3  , KC_4  , KC_5  ,                         KC_6  , KC_7  , KC_8  , KC_9  , KC_0  ,KC_PSCR,
        KC_TAB , KC_Q  , KC_W  , KC_E  , KC_R  , KC_T  ,                         KC_Y  , KC_U  , KC_I  , KC_O  , KC_P  ,KC_MINS,
        KC_CAPS, KC_A  , KC_S  , KC_D  , KC_F  , KC_G  ,                         KC_H  , KC_J  , KC_K  , KC_L  ,KC_SCLN,KC_QUOT,
        KC_LCTL, KC_Z  , KC_X  , KC_C  , KC_V  , KC_B  ,                         KC_N  , KC_M  ,KC_COMM, KC_DOT,KC_SLSH,KC_BSLS,
                        KC_LBRC,KC_RBRC,                                                       RA(KC_N), KC_EQL,
                                        KC_BSPC,KC_LSFT,                         KC_ENT, KC_SPC,
                                        KC_PGUP,KC_HOME,                         KC_END,KC_LALT,
                                        KC_DEL , RAISE ,                         LOWER ,KC_LGUI
  ),

    [_LOWER] = LAYOUT_5x6(
        QK_BOOT,_______,_______,_______,_______,_______,                        _______,_______,_______,_______,_______,QK_BOOT,
        _______,_______,_______,_______,_______,KC_LBRC,                        KC_RBRC,_______, KC_UP ,_______,_______,_______,
        _______,_______,_______,_______,_______,KC_LPRN,                        KC_RPRN,KC_LEFT,KC_DOWN,KC_RGHT,_______,_______,
        _______,_______,_______,_______,_______, CORREO,                        KC_CALC,KC_MPRV,KC_MPLY,KC_MNXT,_______,_______,
                        _______,_______,                                                        KC_GRV ,_______,
                                        _______,_______,                        _______,_______,
                                        _______,SELHOME,                        _______,_______,
                                        _______,_______,                        _______,_______

  ),

    [_RAISE] = LAYOUT_5x6(
        QK_BOOT, KC_F1 , KC_F2 , KC_F3 , KC_F4 , KC_F5 ,                        KC_F6  , KC_F7 , KC_F8 , KC_F9 ,KC_F10 ,QK_BOOT,
        _______,_______,_______,KC_VOLU,CERRARV,_______,                        _______,_______,_______,_______,_______,_______,
        _______,_______,_______,KC_VOLD,A(KC_D), KC_APP,                        _______,_______,_______,_______,_______,_______,
        _______,_______,_______,KC_MUTE, VENTAT, VENTAD,                        _______,_______,_______,_______,_______,_______,
                        _______,_______,                                                        _______,_______,
                                        _______,_______,                        NXTCODE,_______,
                                        _______,_______,                        _______,_______,
                                        _______,_______,                        _______,_______
  ),
};
