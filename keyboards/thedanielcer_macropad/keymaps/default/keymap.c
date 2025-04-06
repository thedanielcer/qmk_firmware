// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include "thedanielcer_macropad.h"

#include QMK_KEYBOARD_H

// #define MATRIX_COLS 4
// #define MATRIX_ROWS 4

#define SKETCH LCTL(KC_K)
#define OFFSETPLANE LSFT(KC_O)
#define EXTRUDE KC_E
#define FINISHSKETCH LCTL(LALT(KC_F))
#define LINE KC_L
#define CIRCLE KC_C
#define TWOPOINTREC KC_R
#define PROJECT KC_P
#define DISTANCE KC_D
#define MIRROR LSFT(KC_M)
#define SKMIRROR LSFT(LALT(KC_M))
#define OFFSET KC_O
#define CENTERREC LCTL(LSFT(KC_R))
#define THREEPOINTREC LCTL(LSFT(KC_H))
#define RECTPATTERN LSFT(KC_P)
#define CIRCPATTERN LSFT(KC_C)
#define SKCIPATTERN LSFT(LALT(KC_C))
#define SKREPATTERN LSFT(LALT(KC_P))
#define FILLETSKETCH LSFT(KC_F)
#define TRIM KC_T
#define LOFT LSFT(KC_L)
#define FILLETBODY KC_F
#define CHAMFER LCTL(LSFT(KC_C))
#define COMBINEBODY LCTL(LSFT(KC_O))
#define SPLITBODY LSFT(KC_B)
#define MOVE KC_M
#define JOINT KC_J
#define MEASURE KC_I

#define FANCYZONES G(LSFT(KC_F))
#define SPOTLIGHT G(KC_SPACE)
#define TEXTEXTRA G(LSFT(KC_T))
#define ALWONTOP G(LCTL(KC_T))
#define COLORPICK G(LSFT(KC_C))
#define SCRRULER G(LSFT(KC_M))
#define FADING G(LCTL(KC_Y))

#define TOGGLE KC_F13
#define WHITE KC_F14
#define RAINBOW KC_F15
#define SCANNER KC_F16
#define SCANNERD KC_F17
#define METEOR KC_F18
#define AURORA2 KC_F19
#define AMBILIGHT LCTL(KC_F13)
#define RAINBOWM LCTL(KC_F14)
#define FORTNITE LCTL(KC_F15)

#define MUTEMIC KC_F20
#define SOUNDBAR KC_F21
#define HEADPHONES KC_F22

#define FUSION1 0
#define FUSION2 1
#define POWER 2
#define WORD 3
#define NUMPAD 4
#define WLED 5
#define AUDIO 6
#define MENU 7


enum custom_keycodes {
    TITULO1=SAFE_RANGE,
    TITULO2,
    TITULO3,
    TITULO4,
    LETRAGRANDE,
    LETRAPEQ,
    SUPERI,
    SUBI,
    INSECUACION,
    INSSIMBOLO,
    INSIMAGEN,
    SALTODEPAG,
	INSERTARCITA,
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    case TITULO1:
        if (record->event.pressed) {
            // when keycode QMKBEST is pressed
            SEND_STRING(SS_DOWN(X_LSFT) SS_TAP(X_HOME) SS_UP(X_LSFT) SS_TAP(X_LALT) SS_TAP(X_O) SS_TAP(X_B) SS_TAP(X_S) SS_TAP(X_A) "T" SS_TAP(X_DOWN) SS_TAP(X_ENT) SS_TAP(X_END));
        } else {
            // when keycode QMKBEST is released
        }
        break;

    case TITULO2:
        if (record->event.pressed) {
            // when keycode QMKURL is pressed
            SEND_STRING(SS_DOWN(X_LSFT) SS_TAP(X_HOME) SS_UP(X_LSFT) SS_TAP(X_LALT) SS_TAP(X_O) SS_TAP(X_B) SS_TAP(X_S) SS_TAP(X_A) "T" SS_TAP(X_DOWN) SS_TAP(X_DOWN) SS_TAP(X_ENT) SS_TAP(X_END));
        } else {
            // when keycode QMKURL is released
        }
        break;

    case TITULO3:
        if (record->event.pressed) {
           SEND_STRING(SS_DOWN(X_LSFT) SS_TAP(X_HOME) SS_UP(X_LSFT) SS_TAP(X_LALT) SS_TAP(X_O) SS_TAP(X_B) SS_TAP(X_S) SS_TAP(X_A) "T" SS_TAP(X_DOWN) SS_TAP(X_DOWN) SS_TAP(X_DOWN) SS_TAP(X_ENT) SS_TAP(X_END)); // selects all and copies
        } else{

        }
        break;
    case TITULO4:
        if (record->event.pressed) {
           SEND_STRING(SS_DOWN(X_LSFT) SS_TAP(X_HOME) SS_UP(X_LSFT) SS_TAP(X_LALT) SS_TAP(X_O) SS_TAP(X_B) SS_TAP(X_S) SS_TAP(X_A) "T" SS_TAP(X_DOWN) SS_TAP(X_DOWN) SS_TAP(X_DOWN) SS_TAP(X_DOWN) SS_TAP(X_ENT) SS_TAP(X_END)); // selects all and copies
        } else{

        }
        break;

    case LETRAPEQ:
        if (record->event.pressed){
            tap_code16(C(S(KC_COMM)));
            //SEND_STRING(SS_DOWN(X_LCTRL) SS_DOWN(X_LSFT) SS_TAP(X_COMM) SS_UP(X_LCTRL) SS_UP(X_LSFT));
        } else {

        }
        break;
    case LETRAGRANDE:
        if (record->event.pressed){
            tap_code16(C(S(KC_DOT)));
            //SEND_STRING(SS_DOWN(X_LCTRL) SS_DOWN(X_LSFT) SS_TAP(X_DOT) SS_UP(X_LCTRL) SS_UP(X_LSFT));
        } else {

        }
        break;
    case SUPERI:
        if (record->event.pressed){
            tap_code16(C(KC_EQL));
            //SEND_STRING(SS_DOWN(X_LCTRL) SS_TAP(X_EQL) SS_UP(X_LCTRL));
        } else {

        }
        break;
    case SUBI:
        if (record->event.pressed){
            tap_code16(C(S(KC_EQL)));
            //SEND_STRING(SS_DOWN(X_LCTRL) SS_DOWN(X_LSFT) SS_TAP(X_EQL) SS_UP(X_LCTRL) SS_UP(X_LSFT));
        } else {

        }
        break;
    case INSECUACION:
        if (record->event.pressed){
            SEND_STRING(SS_DOWN(X_LALT) SS_TAP(X_EQL) SS_UP(X_LALT));
        } else {

        }
        break;
    case INSSIMBOLO:
        if (record->event.pressed){
            SEND_STRING(SS_TAP(X_LALT) SS_TAP(X_B) SS_TAP(X_2) SS_TAP(X_S) SS_TAP(X_M) SS_TAP(X_M));
        } else {

        }
        break;
    case INSIMAGEN:
        if (record->event.pressed){
            SEND_STRING(SS_TAP(X_LALT) SS_TAP(X_B) SS_TAP(X_2) SS_TAP(X_I) SS_TAP(X_1) SS_TAP(X_D));
        } else {

        }
        break;
    case SALTODEPAG:
        if (record->event.pressed){
            tap_code16(C(KC_ENT));
        } else {

        }
        break;
	case INSERTARCITA:
		if (record->event.pressed){
			SEND_STRING(SS_TAP(X_LALT) SS_TAP(X_Y) SS_TAP(X_1) SS_TAP(X_Y) SS_TAP(X_1) SS_DELAY(10000) SS_TAP(X_LALT) SS_TAP(X_O) SS_TAP(X_ENT));
		}else {

		}
		break;
		}
    return true;
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {


	[FUSION1] = LAYOUT(
		SKETCH       ,  OFFSETPLANE,  EXTRUDE   , FINISHSKETCH,
		LINE         ,    CIRCLE   , TWOPOINTREC,   PROJECT   ,
		DISTANCE     ,   SKMIRROR  ,   OFFSET   ,  CENTERREC  ,
		THREEPOINTREC,  SKREPATTERN, SKCIPATTERN,   MO(MENU) ),

	[FUSION2] = LAYOUT(
		FILLETSKETCH ,     TRIM    ,    LOFT    ,    MIRROR   ,
		RECTPATTERN  ,  FILLETBODY ,   CHAMFER  , COMBINEBODY ,
		SPLITBODY    ,     MOVE    ,    JOINT   ,    MEASURE  ,
		XXXXXXX      ,    XXXXXXX  ,   XXXXXXX  ,   MO(MENU) ),

	[POWER] = LAYOUT(
		FANCYZONES   ,  SPOTLIGHT  , TEXTEXTRA  ,  ALWONTOP   ,
		COLORPICK    ,   SCRRULER  ,   FADING   ,   XXXXXXX   ,
		XXXXXXX      ,    XXXXXXX  ,   XXXXXXX  ,   XXXXXXX   ,
		XXXXXXX      ,    XXXXXXX  ,   XXXXXXX  ,   MO(MENU) ),

	[WORD] = LAYOUT(
		TITULO1      ,   TITULO2   ,   TITULO3  ,   TITULO4   ,
		LETRAGRANDE  ,   LETRAPEQ  ,   SUPERI   ,    SUBI     ,
		INSECUACION  ,  INSSIMBOLO , INSIMAGEN  , SALTODEPAG  ,
		INSERTARCITA ,  LCTL(KC_Z) , LCTL(KC_Y) ,   MO(MENU) ),

    [NUMPAD] = LAYOUT(
	    KC_P7        ,    KC_P8    ,    KC_P9   ,    KC_PPLS  ,
		KC_P4        ,    KC_P5    ,    KC_P6   ,    KC_PAST  ,
		KC_P1        ,    KC_P2    ,    KC_P3   ,    KC_PMNS  ,
		KC_PSLS      ,    KC_P0    ,   KC_PDOT  ,   MO(MENU) ),

    [WLED] = LAYOUT(
	    TOGGLE       ,    WHITE    ,   RAINBOW  ,    SCANNER  ,
		SCANNERD     ,    METEOR   ,    AURORA2 ,   AMBILIGHT ,
		RAINBOWM     ,    FORTNITE ,   XXXXXXX  ,   XXXXXXX   ,
		XXXXXXX      ,    XXXXXXX  ,   XXXXXXX  ,   MO(MENU) ),

    [AUDIO] = LAYOUT(
	    MUTEMIC      ,   SOUNDBAR  ,  HEADPHONES,   XXXXXXX   ,
		XXXXXXX      ,    XXXXXXX  ,   XXXXXXX  ,   XXXXXXX   ,
		XXXXXXX      ,    XXXXXXX  ,   XXXXXXX  ,   XXXXXXX   ,
		XXXXXXX      ,    XXXXXXX  ,   XXXXXXX  ,   MO(MENU) ),

	[MENU] = LAYOUT(
		TO(FUSION1)  , TO(FUSION2) ,   TO(WORD)  , TO(POWER)  ,
		TO(NUMPAD)   ,   TO(WLED)  ,   TO(AUDIO) ,   XXXXXXX  ,
		XXXXXXX      ,    XXXXXXX  ,   XXXXXXX   ,   XXXXXXX  ,
		QK_BOOT      ,    XXXXXXX  ,   XXXXXXX   ,   KC_TRNS  ),

};


/*void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	return true;
}

void led_set_user(uint8_t usb_led) {

	if (usb_led & (1 << USB_LED_NUM_LOCK)) {

	} else {

	}

	if (usb_led & (1 << USB_LED_CAPS_LOCK)) {

	} else {

	}

	if (usb_led & (1 << USB_LED_SCROLL_LOCK)) {

	} else {

	}

	if (usb_led & (1 << USB_LED_COMPOSE)) {

	} else {

	}

	if (usb_led & (1 << USB_LED_KANA)) {

	} else {

	}

}*/
