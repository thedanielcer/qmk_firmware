#include QMK_KEYBOARD_H

#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2

#define RAISE MO(_RAISE)
#define LOWER MO(_LOWER)
#define HOME TO(_QWERTY)
#define iPadLay TO(3)

#define RA RALT
#define VENTAT RSA(KC_TAB)
#define VENTAD RALT(KC_TAB)
#define CERRARV A(KC_F4)
#define NXTCODE A(KC_DOT)
#define SELHOME S(KC_HOME)
#define SELEND S(KC_END)
#define SWIRL RGB_M_SW
#define HOMESFT SFT_T(KC_HOME)
#define ESCRST LT(6, KC_ESC)
#define PRNTRST LT(6, KC_PSCR)

//iPad shortcuts
#define HOMESC LCMD(KC_H)
#define SEARCH LCMD(KC_SPC)
#define SWAPP C(KC_TAB)
#define SCSHOT LCMD(S(KC_3))
#define DOCK C(KC_A)
#define APPLIB C(S(KC_A))
#define QCKNOTE C(KC_Q)
#define SIRI C(KC_S)
#define CTRLCNT C(KC_C)
#define NOTICNT C(KC_N)
#define APPSWCH C(KC_UP)
#define PRVAPP C(KC_LEFT)
#define NXTAPP C(KC_RIGHT)
#define PGUP LCMD(KC_UP)
#define PGDN LCMD(KC_DOWN)
#define HOMEMAC SFT_T(LCMD(KC_LEFT))
#define ENDMAC LCMD(KC_RIGHT)
#define iSLHOME SCMD(KC_LEFT)
#define iSELEND SCMD(KC_RIGHT)

enum custom_keycodes {
    ENYE = SAFE_RANGE,
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode)
    {
    case ENYE:
    if (record->event.pressed)
    {
        SEND_STRING(SS_RALT("n") SS_TAP(X_N));
    }
    else
    {

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
                                        KC_BSPC,KC_LSFT, MO(2) ,          MO(1) ,KC_ENT, KC_SPC
  ),

    LAYOUT(
        _______,_______,_______,_______,_______,_______,                        _______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,KC_PGUP,KC_LBRC,                        KC_RBRC,_______, KC_UP ,_______,_______,_______,
        _______,_______,_______,_______,KC_PGDN,KC_LPRN,                        KC_RPRN,KC_LEFT,KC_DOWN,KC_RGHT,_______,_______,
        iPadLay,_______,_______,_______,_______,_______,                       RA(KC_N),_______,_______, KC_EQL,_______,_______,
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
        KC_ESC , KC_1  , KC_2  , KC_3  , KC_4  , KC_5  ,                         KC_6  , KC_7  , KC_8  , KC_9  , KC_0  , SCSHOT,
        KC_TAB , KC_Q  , KC_W  , KC_E  , KC_R  , KC_T  ,                         KC_Y  , KC_U  , KC_I  , KC_O  , KC_P  ,KC_MINS,
        KC_CAPS, KC_A  , KC_S  , KC_D  , KC_F  , KC_G  ,                         KC_H  , KC_J  , KC_K  , KC_L  ,KC_SCLN,KC_QUOT,
        KC_LCMD, KC_Z  , KC_X  , KC_C  , KC_V  , KC_B  ,                         KC_N  , KC_M  ,KC_COMM, KC_DOT,KC_SLSH,KC_BSLS,
                                        KC_BSPC,KC_LSFT, MO(5) ,          MO(4) ,KC_ENT, KC_SPC
  ),

    LAYOUT(
        _______,_______,_______,_______,_______,_______,                        _______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______, PGUP  ,KC_LBRC,                        KC_RBRC,_______, KC_UP ,_______,_______,_______,
        _______,_______,_______,_______, PGDN  ,KC_LPRN,                        KC_RPRN,KC_LEFT,KC_DOWN,KC_RGHT,_______,_______,
        HOME   ,_______,_______,_______,_______,_______,                          ENYE ,_______,_______, KC_EQL,_______,_______,
                                        iSLHOME,HOMEMAC,_______,        _______,_______,_______

  ),

    LAYOUT(
        _______, KC_F1 , KC_F2 , KC_F3 , KC_F4 , KC_F5 ,                        KC_F6  , KC_F7 , KC_F8 , KC_F9 ,KC_F10 ,_______,
        _______,_______,_______,KC_VOLU,_______,_______,                        HOMESC , SEARCH,APPSWCH,  DOCK , APPLIB,_______,
        _______,_______,_______,KC_VOLD,_______,_______,                        CTRLCNT,  SIRI ,KC_LCTL,_______,_______,_______,
        _______,_______,_______,KC_MUTE,_______,_______,                        _______, PRVAPP, NXTAPP,_______,_______,_______,
                                        _______,_______,_______,        _______, ENDMAC,iSELEND
  ),

    LAYOUT(
        _______,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,                        _______,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,
        XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,                        XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,
        XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,                        XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,
        XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX, QK_BOOT ,                        XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX, QK_BOOT ,
                                        XXXXXXX,XXXXXXX,XXXXXXX,        XXXXXXX,XXXXXXX,XXXXXXX
  ),
};
