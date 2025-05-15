#pragma once

#ifdef RGBLIGHT_ENABLE
//#    define RGBLIGHT_EFFECT_BREATHING
//#    define RGBLIGHT_EFFECT_RAINBOW_MOOD
//#    define RGBLIGHT_EFFECT_RAINBOW_SWIRL
//#    define RGBLIGHT_EFFECT_SNAKE
//#    define RGBLIGHT_EFFECT_KNIGHT
//#    define RGBLIGHT_EFFECT_CHRISTMAS
//#    define RGBLIGHT_EFFECT_STATIC_GRADIENT
//#    define RGBLIGHT_EFFECT_RGB_TEST
//#    define RGBLIGHT_EFFECT_ALTERNATING
//#    define RGBLIGHT_EFFECT_TWINKLE
#endif

#define TAP_CODE_DELAY 5
// レイヤー数
#define DYNAMIC_KEYMAP_LAYER_COUNT 5

// キー長押し時間 ミリ秒
#define TAPPING_TERM 180

// AML有効化
#define POINTING_DEVICE_AUTO_MOUSE_ENABLE
// 切り替えるマウスレイヤー番号を指定
#define AUTO_MOUSE_DEFAULT_LAYER 4
// マウスが止まってから元のレイヤーに戻るまでの時間(ms)
#define AUTO_MOUSE_TIME 500
// マウス速度 (default: 500)
#define KEYBALL_CPI_DEFAULT 1100
// スクロール速度 (default: 4)
#define KEYBALL_SCROLL_DIV_DEFAULT 5
