#include QMK_KEYBOARD_H
#include "quantum.h"

#define LAYER_LED_ENABLE
#include "layer_led.c"

enum my_keyball_keycodes {
    // 既存の末尾に追加
    OLED_IN,  // OLED ページ変更
    LAY_TOG = KEYBALL_SAFE_RANGE,
};

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_universal(
    KC_ESC      , KC_1     , KC_2     , KC_3     , KC_4     , KC_5     ,                                          KC_6     , KC_7     , KC_8     , KC_9     , KC_0     , KC_BSPC  ,
    LT(4,KC_TAB), KC_Q     , KC_W     , KC_E     , KC_R     , KC_T     ,                                          KC_Y     , KC_U     , KC_I     , KC_O     , KC_P     , LT(4,KC_MINS),
    KC_CAPS     , KC_A     , KC_S     , KC_D     , KC_F     , KC_G     ,                                          KC_H     , KC_J     , KC_K     , KC_L     , KC_SCLN  , KC_ENT   ,
    KC_LSFT     , KC_Z     , KC_X     , KC_C     , KC_V     , KC_B     , LT(1,KC_RBRC),            LT(2,KC_NUHS), KC_N     , KC_M     , KC_COMM  , KC_DOT   , KC_SLSH  , KC_RSFT  ,
    KC_LCTL     , KC_LWIN  , KC_LALT  , TG(1)    , LT(1,KC_LNG2) , LT(2,KC_SPC) , LT(3,KC_LNG1) ,  LT(2,KC_ENT) , LT(1,KC_SPC) ,XXXXXXX , XXXXXXX , XXXXXXX , TG(2)    , TG(3)
  ),
    //KC_MUTE KC_VOLU KC_VOLD
  [1] = LAYOUT_universal(
    _______  , XXXXXXX  , XXXXXXX    , XXXXXXX  , XXXXXXX    , XXXXXXX  ,                                  KC_NUM   , KC_P7    , KC_P8    , KC_P9    , KC_PSLS  , _______  ,
    _______  , A(KC_ENT), KC_PGUP    , KC_UP    , KC_PGDN    , XXXXXXX  ,                                  XXXXXXX  , KC_P4    , KC_P5    , KC_P6    , KC_PAST  , _______  ,
    _______  , A(KC_X)  , KC_LEFT    , KC_SPC   , KC_RGHT    , XXXXXXX  ,                                  XXXXXXX  , KC_P1    , KC_P2    , KC_P3    , KC_PMNS  , _______  ,
    _______  , C(KC_M)  , S(KC_LEFT) , KC_DOWN  , S(KC_RGHT) , XXXXXXX  , XXXXXXX  ,            XXXXXXX  , XXXXXXX  , KC_P0    , XXXXXXX  , KC_PDOT  , KC_PPLS  , _______  ,
    _______  , XXXXXXX  , XXXXXXX    , _______  , XXXXXXX    , OLED_IN  , LAY_TOG  ,            XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , _______  , _______
  ),

  [2] = LAYOUT_universal(
    _______  , KC_F1    , KC_F2       , KC_F3       , KC_F4    , KC_F5    ,                                  KC_F6    , KC_F7    , KC_F8    , KC_F9    , KC_F10   , KC_F11   ,
    _______  , XXXXXXX  , KC_F11      , XXXXXXX     , XXXXXXX  , XXXXXXX  ,                                  XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , KC_F12   ,
    _______  , C(KC_A)  , MEH(KC_PGUP), MEH(KC_PGDN), KC_MINS  , XXXXXXX  ,                                  XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  ,
    _______  , C(KC_Z)  , C(KC_X)     , C(KC_C)     , C(KC_V)  , XXXXXXX  , XXXXXXX  ,            XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  ,
    _______  , XXXXXXX  , XXXXXXX     , XXXXXXX     , XXXXXXX  , XXXXXXX  , XXXXXXX  ,            XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , _______  , _______
  ),

  [3] = LAYOUT_universal(
    RGB_TOG  , AML_TO   , AML_I50  , AML_D50  , XXXXXXX  , XXXXXXX  ,                                  RGB_M_P  , RGB_M_B  , RGB_M_R  , RGB_M_SW , RGB_M_SN , RGB_M_K  ,
    RGB_MOD  , RGB_HUI  , RGB_SAI  , RGB_VAI  , XXXXXXX  , XXXXXXX  ,                                  RGB_M_X  , RGB_M_G  , RGB_M_T  , RGB_M_TW , XXXXXXX  , XXXXXXX  ,
    RGB_RMOD , RGB_HUD  , RGB_SAD  , RGB_VAD  , XXXXXXX  , XXXXXXX  ,                                  CPI_D1K  , CPI_D100 , CPI_I100 , CPI_I1K  , KBC_SAVE , KBC_RST  ,
    XXXXXXX  , XXXXXXX  , SCRL_DVD , SCRL_DVI , SCRL_MO  , SCRL_TO  , EE_CLR   ,            EE_CLR   , KC_HOME  , KC_PGDN  , KC_PGUP  , KC_END   , XXXXXXX  , XXXXXXX  ,
    XXXXXXX  , QK_BOOT  , KC_LEFT  , KC_DOWN  , KC_UP    , KC_RGHT  , XXXXXXX  ,            XXXXXXX  , KC_BSPC  , XXXXXXX  , XXXXXXX  , XXXXXXX  , QK_BOOT  , _______
  ),
  [4] = LAYOUT_universal(
    _______  , _______  , _______  , _______  , _______  , _______  ,                                  XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  ,
    _______  , _______  , _______  , _______  , _______  , _______  ,                                  XXXXXXX  , KC_LEFT  , KC_UP    , KC_RGHT  , XXXXXXX  , XXXXXXX  ,
    _______  , _______  , _______  , _______  , _______  , _______  ,                                  XXXXXXX  , KC_BTN1  , KC_DOWN  , KC_BTN2  , XXXXXXX  , XXXXXXX  ,
    _______  , _______  , _______  , _______  , _______  , _______  , _______  ,            XXXXXXX  , XXXXXXX  , XXXXXXX  , KC_BTN3  , XXXXXXX  , XXXXXXX  , XXXXXXX  ,
    _______  , _______  , _______  , _______  , _______  , _______  , _______  ,            XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX
  ),
};
// clang-format on

layer_state_t layer_state_set_user(layer_state_t state) {
    // Auto enable scroll mode when the highest layer is 3
    keyball_set_scroll_mode(get_highest_layer(state) == 3);
    change_layer_led_color(state);
    return state;
}

#ifdef OLED_ENABLE

// https://mazcon.hatenablog.com/entry/2023/11/20/022521
#include "lib/oledkit/oledkit.h"
#include "custom_oled.c"

void oledkit_render_info_user(void) {
    // keyball_oled_render_keyinfo();
    // keyball_oled_render_ballinfo();
    // keyball_oled_render_layerinfo();
    keyball_oled_render_mymain();
}

// 画面は両側回転させるように修正します。
oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    return OLED_ROTATION_270;
}

// サブ側OLEDの表示処理
void oledkit_render_logo_user(void) {
    keyball_oled_render_mysub();
}

// メイン、サブの判定
bool oled_task_user(void) {
    if (is_keyboard_master()) {
        oledkit_render_info_user();
    } else {
        oledkit_render_logo_user();
    }
    return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        #ifdef LAYER_LED_ENABLE
        case LAY_TOG: toggle_layer_led(record->event.pressed); return true;
        #endif
        // 既存switch文にcaseを追加
        case OLED_IN: change_page(record->event.pressed); return true;
        // #endif
        default: break;
    }
    return true;
}
