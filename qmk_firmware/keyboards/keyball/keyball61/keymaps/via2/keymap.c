#include QMK_KEYBOARD_H

#include "quantum.h"

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_universal(
    KC_ESC   , KC_1     , KC_2     , KC_3     , KC_4     , KC_5     ,                                          KC_6     , KC_7     , KC_8     , KC_9     , KC_0     , KC_BSPC  ,
    XXXXXXX  , KC_Q     , KC_W     , KC_E     , KC_R     , KC_T     ,                                          KC_Y     , KC_U     , KC_I     , KC_O     , KC_P     , KC_MINS  ,
    KC_TAB   , KC_A     , KC_S     , KC_D     , KC_F     , KC_G     ,                                          KC_H     , KC_J     , KC_K     , KC_L     , KC_SCLN  , KC_ENT   ,
    KC_LSFT  , KC_Z     , KC_X     , KC_C     , KC_V     , KC_B     , LT(1,KC_RBRC),            LT(2,KC_NUHS), KC_N     , KC_M     , KC_COMM  , KC_DOT   , KC_SLSH  , KC_RSFT  ,
    KC_LCTL  , KC_LWIN  , KC_LALT  , TO(2)    , LT(1,KC_LNG2) , LT(2,KC_SPC) , LT(3,KC_LNG1) ,  LT(2,KC_ENT) , LT(1,KC_SPC) ,XXXXXXX , XXXXXXX , XXXXXXX , TO(3)    , TO(4)
  ),

  [1] = LAYOUT_universal(
    _______  , _______  , _______    , _______ , _______    , _______  ,                                  KC_NUM   , KC_P7    , KC_P8    , KC_P9    , KC_PSLS  , _______  ,
    _______  , A(KC_ENT), KC_PGUP    , KC_UP   , KC_PGDN    , KC_VOLU  ,                                  _______  , KC_P4    , KC_P5    , KC_P6    , KC_PAST  , _______  ,
    _______  , A(KC_X)  , KC_LEFT    , KC_SPC  , KC_RGHT    , KC_VOLD  ,                                  _______  , KC_P1    , KC_P2    , KC_P3    , KC_PMNS  , _______  ,
    _______  , C(KC_M)  , S(KC_LEFT) , KC_DOWN , S(KC_RGHT) , _______  , _______  ,            _______  , _______  , KC_P0    , _______  , KC_PDOT  , KC_PPLS  , _______  ,
    _______  , _______  , _______    , TO(0)   , _______    , _______  , _______  ,            _______  , _______  , _______  , _______  , _______  , _______  , _______
  ),

  [2] = LAYOUT_universal(
    _______  , KC_F1    , KC_F2    , KC_F3    , KC_F4    , KC_F5    ,                                  KC_F6    , KC_F7    , KC_F8    , KC_F9    , KC_F10   , KC_F11   ,
    _______  , _______  , _______  , _______  , _______  , _______  ,                                  _______  , _______  , _______  , _______  , _______  , KC_F12   ,
    _______  , C(KC_A)  , _______  , _______  , KC_MINS  , _______  ,                                  _______  , _______  , _______  , _______  , _______  , _______  ,
    _______  , C(KC_Z)  , C(KC_X)  , C(KC_C)  , C(KC_V)  , _______  , _______  ,            _______  , _______  , _______  , _______  , _______  , _______  , _______  ,
    _______  , _______  , _______  , _______  , _______  , _______  , _______  ,            _______  , _______  , _______  , _______  , _______  , _______  , _______
  ),

  [3] = LAYOUT_universal(
    RGB_TOG  , AML_TO   , AML_I50  , AML_D50  , _______  , TO(0)    ,                                  RGB_M_P  , RGB_M_B  , RGB_M_R  , RGB_M_SW , RGB_M_SN , RGB_M_K  ,
    RGB_MOD  , RGB_HUI  , RGB_SAI  , RGB_VAI  , _______  , _______  ,                                  RGB_M_X  , RGB_M_G  , RGB_M_T  , RGB_M_TW , _______  , _______  ,
    RGB_RMOD , RGB_HUD  , RGB_SAD  , RGB_VAD  , _______  , _______  ,                                  CPI_D1K  , CPI_D100 , CPI_I100 , CPI_I1K  , KBC_SAVE , KBC_RST  ,
    _______  , _______  , SCRL_DVD , SCRL_DVI , SCRL_MO  , SCRL_TO  , EE_CLR   ,            EE_CLR   , KC_HOME  , KC_PGDN  , KC_PGUP  , KC_END   , _______  , _______  ,
    QK_BOOT  , _______  , KC_LEFT  , KC_DOWN  , KC_UP    , KC_RGHT  , _______  ,            _______  , KC_BSPC  , _______  , _______  , _______  , _______  , TO(0)
  ),
  [4] = LAYOUT_universal(
    _______  , _______  , _______  , _______  , _______  , _______  ,                                  _______  , _______  , _______  , _______  , _______  , _______  ,
    _______  , _______  , _______  , _______  , _______  , _______  ,                                  _______  , KC_LEFT  , KC_UP    , KC_RGHT  , _______  , _______  ,
    _______  , _______  , _______  , _______  , _______  , _______  ,                                  KC_PGUP  , KC_BTN1  , KC_DOWN  , KC_BTN2  , KC_BTN3  , _______  ,
    _______  , _______  , _______  , _______  , _______  , _______  , _______  ,            S(KC_9)  , KC_PGDN  , _______  , _______  , _______  , _______  , _______  ,
    _______  , _______  , _______  , _______  , _______  , _______  , _______  ,            _______  , _______  , _______  , _______  , _______  , _______  , _______
  ),
};

// clang-format on

layer_state_t layer_state_set_user(layer_state_t state) {
    // Auto enable scroll mode when the highest layer is 3
    keyball_set_scroll_mode(get_highest_layer(state) == 3);
    return state;
}

#ifdef OLED_ENABLE

#    include "lib/oledkit/oledkit.h"

void oledkit_render_info_user(void) {
    keyball_oled_render_keyinfo();
    keyball_oled_render_ballinfo();
    keyball_oled_render_layerinfo();
}
#endif
