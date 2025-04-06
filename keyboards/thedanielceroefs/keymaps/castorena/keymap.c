#include QMK_KEYBOARD_H

#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2

#define RAISE MO(_RAISE)
#define LOWER MO(_LOWER)
#define HOME TO(_QWERTY)

#define RA RALT
#define VENTAT RSA(KC_TAB)
#define VENTAD RALT(KC_TAB)
#define CERRARV A(KC_F4)
#define NXTCODE A(KC_DOT)
#define SELHOME S(KC_HOME)
#define SELEND S(KC_END)
#define SWIRL RGB_M_SW
#define HOMESFT SFT_T(KC_HOME)
#define ESCRST LT(3, KC_ESC)
#define PRNTRST LT(3, KC_PSCR)

enum custom_keycodes {
    MACRO1 = SAFE_RANGE,
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode)
    {
    case MACRO1:
    if (record->event.pressed)
    {
        //CUERPO DEL MACRO CUANDO LA TECLA SE PRESIONA
    }
    else
    {
        //CUERPO DEL MARCO CUANDO LA TECLA SE SUELTA
    }
        break;
    }

    return true;
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    LAYOUT(
        ESCRST , KC_1  , KC_2  , KC_3  , KC_4  , KC_5  ,                         KC_6  , KC_7  , KC_8  , KC_9  , KC_0  ,PRNTRST,
        KC_TAB , KC_Q  , KC_W  , KC_E  , KC_R  , KC_T  ,                         KC_Y  , KC_U  , KC_I  , KC_O  , KC_P  ,KC_MINS,
        KC_CAPS, KC_A  , KC_S  , KC_D  , KC_F  , KC_G  ,                         KC_H  , KC_J  , KC_K  , KC_L  ,KC_SCLN,KC_QUOT,
        KC_LCTL, KC_Z  , KC_X  , KC_C  , KC_V  , KC_B  ,                         KC_N  , KC_M  ,KC_COMM, KC_DOT,KC_SLSH,KC_BSLS,
                                        KC_BSPC,KC_LSFT, RAISE ,          LOWER ,KC_ENT, KC_SPC
  ),

    LAYOUT(
        _______,_______,_______,_______,_______,_______,                        _______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,KC_PGUP,KC_LBRC,                        KC_RBRC,_______, KC_UP ,_______,_______,_______,
        _______,_______,_______,_______,KC_PGDN,KC_LPRN,                        KC_RPRN,KC_LEFT,KC_DOWN,KC_RGHT,_______,_______,
        XXXXXXX,_______,_______,_______,_______,_______,                       RA(KC_N),_______,_______, KC_EQL,_______,_______,
                                        SELHOME,HOMESFT,_______,        _______,_______,_______

  ),

    LAYOUT(
        _______, KC_F1 , KC_F2 , KC_F3 , KC_F4 , KC_F5 ,                        KC_F6  , KC_F7 , KC_F8 , KC_F9 ,KC_F10 ,_______,
        _______,_______,_______,KC_VOLU,CERRARV,_______,                        RGB_TOG, SWIRL ,_______,_______,_______,_______,
        _______,_______,_______,KC_VOLD,_______, KC_APP,                        RGB_VAI,RGB_VAD,_______,_______,_______,_______,
        _______,_______,_______,KC_MUTE, VENTAT, VENTAD,                        _______,_______,_______,_______,_______,_______,
                                        _______,_______,_______,        _______, KC_END, SELEND
  ),

    LAYOUT(
        _______,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,                        _______,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,
        XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,                        XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,
        XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,                        XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,
        XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,QK_BOOT,                        XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,QK_BOOT,
                                        XXXXXXX,XXXXXXX,XXXXXXX,        XXXXXXX,XXXXXXX,XXXXXXX
  ),
};
