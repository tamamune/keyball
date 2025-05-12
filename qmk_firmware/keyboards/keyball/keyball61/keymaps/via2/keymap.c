#include QMK_KEYBOARD_H

#include "quantum.h"

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_universal(
    XXXXXXX  , KC_1         , KC_2         , KC_3         , KC_4         , KC_5         ,                                          KC_6          , KC_7         , KC_8         , KC_9         , KC_0            , XXXXXXX ,
    XXXXXXX  , KC_Q         , KC_W         , TD(TD_E)     , TD(TD_R)     , TD(TD_T)     ,                                          TD(TD_Y)      , TD(TD_U)     , TD(TD_I)     , TD(TD_O)     , LT(3, KC_P)     , XXXXXXX ,
    XXXXXXX  , LGUI_T(KC_A) , LALT_T(KC_S) , LSFT_T(KC_D) , LCTL_T(KC_F) , TD(TD_G)     ,                                          TD(TD_H)      , RCTL_T(KC_J) , RSFT_T(KC_K) , RALT_T(KC_L) , RGUI_T(KC_SCLN) , XXXXXXX ,
    XXXXXXX  , TD(TD_Z)     , TD(TD_X)     , TD(TD_C)     , TD(TD_V)     , TD(TD_B)     , KC_LNG1      ,          KC_LNG2        , TD(TD_N)      , TD(TD_M)     , TD(TD_COMMA) , TD(TD_DOT)   , LT(2, KC_SLSH)  , XXXXXXX ,
    XXXXXXX  , TO(3)        , TO(2)        , TO(1)        , LT(3,KC_ESC) , LT(2,KC_SPC) , LT(1,KC_TAB) ,          LT(1,KC_ENTER) , LT(2,KC_BSPC) , XXXXXXX      , XXXXXXX      , XXXXXXX      , XXXXXXX         , XXXXXXX
  ),
  [1] = LAYOUT_universal(
    XXXXXXX , XXXXXXX  , KC_PEQL , KC_PSLS , KC_PAST , KC_NUM  ,                                            XXXXXXX , XXXXXXX  , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX ,
    XXXXXXX , XXXXXXX  , KC_P7   , KC_P8   , KC_P9   , KC_PMNS ,                                            XXXXXXX , KC_HOME  , KC_END  , KC_PGUP , KC_GRV  , XXXXXXX ,
    XXXXXXX , XXXXXXX  , KC_P4   , KC_P5   , KC_P6   , KC_PPLS ,                                            KC_LEFT , KC_DOWN  , KC_UP   , KC_RGHT , KC_QUOT , XXXXXXX ,
    XXXXXXX , XXXXXXX  , KC_P1   , KC_P2   , KC_P3   , KC_PENT , TO(0)   ,            TO(0)               , XXXXXXX , KC_MINUS , KC_EQL  , KC_PGDN , KC_BSLS , XXXXXXX ,
    XXXXXXX , XXXXXXX  , KC_0    , KC_PDOT , KC_PCMM , XXXXXXX , XXXXXXX ,            TD(TD_DOUBLE_SHIFT) , KC_DEL  , XXXXXXX  , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX
  ),
  [2] = LAYOUT_universal(
    XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX ,                                  XXXXXXX    , XXXXXXX    , XXXXXXX     , XXXXXXX , XXXXXXX , XXXXXXX ,
    XXXXXXX , KC_F1   , KC_F2   , KC_F3   , KC_F4   , XXXXXXX ,                                  A(KC_F4)   , A(KC_LEFT) , A(KC_RIGHT) , XXXXXXX , XXXXXXX , XXXXXXX ,
    XXXXXXX , KC_F5   , KC_F6   , KC_F7   , KC_F8   , XXXXXXX ,                                  C(KC_W)    , KC_BTN1    , KC_BTN3     , KC_BTN2 , XXXXXXX , XXXXXXX ,
    XXXXXXX , KC_F9   , KC_F10  , KC_F11  , KC_F12  , XXXXXXX , TO(0)   ,             TO(0)    , C(S(KC_T)) , KC_PGUP    , KC_PGDN     , XXXXXXX , XXXXXXX , XXXXXXX ,
    XXXXXXX , KC_F13  , KC_F14  , KC_F15  , XXXXXXX , XXXXXXX , XXXXXXX ,             XXXXXXX  , XXXXXXX    , XXXXXXX    , XXXXXXX     , XXXXXXX , XXXXXXX , XXXXXXX
  ),
  [3] = LAYOUT_universal(
    XXXXXXX , XXXXXXX  , XXXXXXX , XXXXXXX  , XXXXXXX  , XXXXXXX ,                              XXXXXXX  , XXXXXXX    , XXXXXXX    , XXXXXXX , XXXXXXX , XXXXXXX ,
    XXXXXXX , KBC_RST  , XXXXXXX , SSNP_HOR , SSNP_VRT , XXXXXXX ,                              KC_INS   , KC_LBRC    , KC_RBRC    , KC_APP  , KC_GRV  , XXXXXXX ,
    XXXXXXX , KBC_SAVE , XXXXXXX , CPI_D100 , CPI_I100 , QK_BOOT ,                              KC_SCRL  , S(KC_9)    , S(KC_0)    , KC_PSCR , KC_QUOT , XXXXXXX ,
    XXXXXXX , XXXXXXX  , XXXXXXX , SCRL_DVD , SCRL_DVI , EE_CLR  , TO(0)   ,          TO(0)   , KC_PAUSE , S(KC_LBRC) , S(KC_RBRC) , XXXXXXX , KC_BSLS , XXXXXXX ,
    XXXXXXX , XXXXXXX  , XXXXXXX , AML_TO   , XXXXXXX  , KC_SPC  , XXXXXXX ,          XXXXXXX , XXXXXXX  , XXXXXXX    , XXXXXXX    , XXXXXXX , XXXXXXX , XXXXXXX
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
