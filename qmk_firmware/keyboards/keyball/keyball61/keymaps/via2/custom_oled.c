#include QMK_KEYBOARD_H

// ヘッダタイトル
static const char PROGMEM img_title[] = {
    0x3c, 0x42, 0x81, 0x81, 0x42, 0x00, 0xff, 0x09, 0x09, 0x06, 0x00, 0x81, 0xff, 0x81, 0x00, 0x00, 
    0x00, 0xff, 0x81, 0x81, 0x42, 0x3c, 0x00, 0x81, 0xff, 0x81, 0x00, 0x07, 0x38, 0xc0, 0x38, 0x07
};

// アラビア数字アイコン
static const char PROGMEM img_num0[] = {
	0x41, 0x02, 0x3e, 0x02, 0x00, 0x3e, 0x2a, 0x2a, 0x00, 0x3e, 0x04, 0x08, 0x04, 0x3e, 0x00, 0x3e, 
	0x0a, 0x0a, 0x04, 0x00, 0x3e, 0x2a, 0x2a, 0x00, 0x2e, 0x2a, 0x3a, 0x00, 0x02, 0x3e, 0x02, 0x41, 
	0x00, 0x00, 0x00, 0x80, 0x40, 0xa0, 0xd0, 0xe8, 0xf4, 0xf4, 0xfa, 0xfa, 0xfa, 0xfd, 0xfd, 0xfd, 
	0xfd, 0xfd, 0xfd, 0xfa, 0xfa, 0xfa, 0xf4, 0xf4, 0xe8, 0xd0, 0xa0, 0x40, 0x80, 0x00, 0x00, 0x00, 
	0xf8, 0x06, 0xf9, 0xfe, 0xff, 0xf7, 0xf7, 0xf7, 0xef, 0xef, 0xef, 0xdb, 0xdb, 0xd7, 0xff, 0xff, 
	0xff, 0xff, 0xd7, 0xdb, 0xdb, 0xef, 0xef, 0xef, 0xf7, 0xf7, 0xf7, 0xff, 0xfe, 0xf9, 0x06, 0xf8, 
	0x01, 0x02, 0x05, 0x0b, 0x17, 0x2f, 0x5f, 0x5f, 0x5f, 0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 
	0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 0x5f, 0x5f, 0x5f, 0x2f, 0x17, 0x0b, 0x05, 0x02, 0x01
};
static const char PROGMEM img_num1[] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x04, 0x02, 0x09, 0x05, 
	0xfd, 0x01, 0x02, 0x04, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x80, 0x40, 0xa0, 0xd0, 0xe8, 0xf4, 0xf4, 0xfa, 0xf9, 0xf2, 0xe4, 0xea, 0xea, 
	0xeb, 0xea, 0xe4, 0xf2, 0xf9, 0xfa, 0xf4, 0xf4, 0xe8, 0xd0, 0xa0, 0x40, 0x80, 0x00, 0x00, 0x00, 
	0xf8, 0x06, 0xf9, 0xfe, 0xff, 0xf7, 0xf7, 0xf7, 0xef, 0xef, 0xef, 0xdb, 0xdb, 0xd7, 0xff, 0xff, 
	0xff, 0xff, 0xd7, 0xdb, 0xdb, 0xef, 0xef, 0xef, 0xf7, 0xf7, 0xf7, 0xff, 0xfe, 0xf9, 0x06, 0xf8, 
	0x01, 0x02, 0x05, 0x0b, 0x17, 0x2f, 0x5f, 0x5f, 0x5f, 0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 
	0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 0x5f, 0x5f, 0x5f, 0x2f, 0x17, 0x0b, 0x05, 0x02, 0x01
};
static const char PROGMEM img_num2[] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x04, 0x1a, 0x9d, 0xc5, 
	0x65, 0x3d, 0x1a, 0x04, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x80, 0x40, 0xa0, 0xd0, 0xe8, 0xf4, 0xf4, 0xfa, 0xf9, 0xf2, 0xe5, 0xe9, 0xe9, 
	0xe9, 0xe9, 0xe5, 0xf2, 0xf9, 0xfa, 0xf4, 0xf4, 0xe8, 0xd0, 0xa0, 0x40, 0x80, 0x00, 0x00, 0x00, 
	0xf8, 0x06, 0xf9, 0xfe, 0xff, 0xf7, 0xf7, 0xf7, 0xef, 0xef, 0xef, 0xdb, 0xdb, 0xd7, 0xff, 0xff, 
	0xff, 0xff, 0xd7, 0xdb, 0xdb, 0xef, 0xef, 0xef, 0xf7, 0xf7, 0xf7, 0xff, 0xfe, 0xf9, 0x06, 0xf8, 
	0x01, 0x02, 0x05, 0x0b, 0x17, 0x2f, 0x5f, 0x5f, 0x5f, 0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 
	0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 0x5f, 0x5f, 0x5f, 0x2f, 0x17, 0x0b, 0x05, 0x02, 0x01
};
static const char PROGMEM img_num3[] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x04, 0x9a, 0x9d, 0x05, 
	0x65, 0xfd, 0x9a, 0x04, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x80, 0x40, 0xa0, 0xd0, 0xe8, 0xf4, 0xf4, 0xfa, 0xf9, 0xf2, 0xe5, 0xeb, 0xea, 
	0xea, 0xeb, 0xe5, 0xf2, 0xf9, 0xfa, 0xf4, 0xf4, 0xe8, 0xd0, 0xa0, 0x40, 0x80, 0x00, 0x00, 0x00, 
	0xf8, 0x06, 0xf9, 0xfe, 0xff, 0xf7, 0xf7, 0xf7, 0xef, 0xef, 0xef, 0xdb, 0xdb, 0xd7, 0xff, 0xff, 
	0xff, 0xff, 0xd7, 0xdb, 0xdb, 0xef, 0xef, 0xef, 0xf7, 0xf7, 0xf7, 0xff, 0xfe, 0xf9, 0x06, 0xf8, 
	0x01, 0x02, 0x05, 0x0b, 0x17, 0x2f, 0x5f, 0x5f, 0x5f, 0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 
	0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 0x5f, 0x5f, 0x5f, 0x2f, 0x17, 0x0b, 0x05, 0x02, 0x01
};
static const char PROGMEM img_num4[] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x04, 0x62, 0x51, 0x49, 
	0xfd, 0x41, 0x02, 0x04, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x80, 0x40, 0xa0, 0xd0, 0xe8, 0xf4, 0xf4, 0xfa, 0xf9, 0xf2, 0xe4, 0xe8, 0xe8, 
	0xeb, 0xe8, 0xe4, 0xf2, 0xf9, 0xfa, 0xf4, 0xf4, 0xe8, 0xd0, 0xa0, 0x40, 0x80, 0x00, 0x00, 0x00, 
	0xf8, 0x06, 0xf9, 0xfe, 0xff, 0xf7, 0xf7, 0xf7, 0xef, 0xef, 0xef, 0xdb, 0xdb, 0xd7, 0xff, 0xff, 
	0xff, 0xff, 0xd7, 0xdb, 0xdb, 0xef, 0xef, 0xef, 0xf7, 0xf7, 0xf7, 0xff, 0xfe, 0xf9, 0x06, 0xf8, 
	0x01, 0x02, 0x05, 0x0b, 0x17, 0x2f, 0x5f, 0x5f, 0x5f, 0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 
	0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 0xbf, 0x5f, 0x5f, 0x5f, 0x2f, 0x17, 0x0b, 0x05, 0x02, 0x01
};

// スクロールアイコン
static const char PROGMEM img_scroll_up[] = {
    0x00, 0x80, 0x80, 0xc0, 0xc0, 0x60, 0x60, 0x30, 0x30, 0x18, 0x18, 0x0c, 0x0c, 0x86, 0x86, 0xc3, 
    0xc3, 0x86, 0x86, 0x0c, 0x0c, 0x18, 0x18, 0x30, 0x30, 0x60, 0x60, 0xc0, 0xc0, 0x80, 0x80, 0x00, 
    0xc3, 0x61, 0x61, 0x30, 0x30, 0x18, 0x18, 0x0c, 0x0c, 0x06, 0x06, 0x03, 0x03, 0x01, 0x01, 0x00, 
    0x00, 0x01, 0x01, 0x03, 0x03, 0x06, 0x06, 0x0c, 0x0c, 0x18, 0x18, 0x30, 0x30, 0x61, 0x61, 0xc3
};
static const char PROGMEM img_scroll_down[] = {
    0xc3, 0x86, 0x86, 0x0c, 0x0c, 0x18, 0x18, 0x30, 0x30, 0x60, 0x60, 0xc0, 0xc0, 0x80, 0x80, 0x00, 
    0x00, 0x80, 0x80, 0xc0, 0xc0, 0x60, 0x60, 0x30, 0x30, 0x18, 0x18, 0x0c, 0x0c, 0x86, 0x86, 0xc3, 
    0x00, 0x01, 0x01, 0x03, 0x03, 0x06, 0x06, 0x0c, 0x0c, 0x18, 0x18, 0x30, 0x30, 0x61, 0x61, 0xc3, 
    0xc3, 0x61, 0x61, 0x30, 0x30, 0x18, 0x18, 0x0c, 0x0c, 0x06, 0x06, 0x03, 0x03, 0x01, 0x01, 0x00
};
static const char PROGMEM img_scroll_no[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

// 数値を文字列に変換します。指定桁数の右寄せでスペースパディングされます。
static const char *itoc(uint8_t number, uint8_t width) {
    static char str[5]; 
    uint8_t i = 0;
    width = width > 4 ? 4 : width;

    do {
        str[i++] = number % 10 + '0';
        number /= 10;
    } while (number != 0);

    while (i < width) {
        str[i++] = ' ';
    }

    int len = i;
    for (int j = 0; j < len / 2; j++) {
        char temp = str[j];
        str[j] = str[len - j - 1];
        str[len - j - 1] = temp;
    }

    str[i] = '\0';
    return str;
}

// CPI, スクロール情報表示
static void print_cpi_status(void) {
    oled_write_raw_P(img_title, sizeof(img_title));
    oled_set_cursor(0, 2);

    oled_write(itoc(keyball_get_cpi(), 0), false);
    oled_write_P(PSTR(" "), false);
    
    oled_set_cursor(4, 2);
    oled_write_char('0' + keyball_get_scroll_div(), false);
}

// Lockキー状態表示
static void print_lock_key_status(void) {
    oled_set_cursor(0, 6);

    const led_t led_state = host_keyboard_led_state();
    oled_write_P(led_state.caps_lock   ? PSTR("C ") : PSTR("- "), false);
    oled_write_P(led_state.num_lock    ? PSTR("N ") : PSTR("- "), false);
    oled_write_P(led_state.scroll_lock ? PSTR("S")  : PSTR("-") , false);
}

// レイヤーNo表示
static void print_layer_status(void) {
    oled_set_cursor(0, 10);
    switch (get_highest_layer(layer_state)) {
        case 1:  oled_write_raw_P(img_num1, sizeof(img_num1)); break;
        case 2:  oled_write_raw_P(img_num2, sizeof(img_num2)); break;
        case 3:  oled_write_raw_P(img_num3, sizeof(img_num3)); break;
        case 4:  oled_write_raw_P(img_num4, sizeof(img_num4)); break;
        default: oled_write_raw_P(img_num0, sizeof(img_num0)); break;
    }
}

// スクロール状態表示
static void print_scroll_status(void) {
    oled_set_cursor(0, 8);
    oled_write_raw_P(keyball.scroll_mode ? img_scroll_up : img_scroll_no, sizeof(img_scroll_no));
    oled_set_cursor(0, 14);
    oled_write_raw_P(keyball.scroll_mode ? img_scroll_down : img_scroll_no, sizeof(img_scroll_no));
}

// デフォルトページ表示
static void render_default(void) {
    print_cpi_status();
    print_lock_key_status();
    print_layer_status();
    print_scroll_status();
}

// ステータス表示
static void render_status(void) {
    oled_write_ln_P(PSTR("STATE"), false);

    oled_write_P(rgblight_is_enabled() ? PSTR("led o") : PSTR("led -"), false);
#  ifdef LAYER_LED_ENABLE
    oled_write_P(layer_led ? PSTR("lay o") : PSTR("lay -"), false);
#  endif
    oled_write_P(PSTR("spd "), false);
    oled_write(itoc(rgblight_get_speed(), 0), false);

    oled_write_P(PSTR("mo"), false);
    oled_write(itoc(rgblight_get_mode(), 3), false);

    oled_set_cursor(0, 7);
    oled_write_P(PSTR("h "), false);
    oled_write(itoc(rgblight_get_hue(), 3), false);

    oled_write_P(PSTR("s "), false);
    oled_write(itoc(rgblight_get_sat(), 3), false);

    oled_write_P(PSTR("v "), false);
    oled_write_ln(itoc(rgblight_get_val(), 3), false);

#  ifdef COMBO_ENABLE
    oled_write_P(is_combo_enabled() ? PSTR("cmb o") : PSTR("cmb -"), false);
#  endif
}

// バージョン表示
#include "version.h"
static void render_version(void) {
    oled_write_P(PSTR("Ver.\n\n"), false);
    oled_write_ln_P(PSTR(QMK_BUILDDATE), false);
    oled_write_P(PSTR("\n"), false);
    oled_write_ln_P(PSTR(QMK_KEYMAP), false);
    oled_write_P(PSTR("\n"), false);
    oled_write_ln_P(PSTR(QMK_VERSION), false);
}


// ページ切り替え
static uint8_t page_no = 0;
void change_page(bool pressed) {
    if (!pressed) {
        return;
    }
    oled_clear();
    page_no ++;
}

// OLEDメイン処理(メイン側)
void keyball_oled_render_mymain(void) {
    switch(page_no % 3) {
        case 1:  render_status(); break;
        case 2:  render_version();  break;
        default: render_default();  break;
    }
}

// OLEDメイン処理(サブ側)
void keyball_oled_render_mysub(void) {
    render_status();
}
