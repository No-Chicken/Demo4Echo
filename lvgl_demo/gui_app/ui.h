#ifndef _UI_H
#define _UI_H

#ifdef __cplusplus
extern "C" {
#endif

#include "../lvgl/lvgl.h"
#include "./common/lv_lib.h"

// extern variables
extern lv_lib_pm_t page_manager;

// IMAGES AND IMAGE SETS
LV_IMG_DECLARE(ui_img_1946976022);    // assets/天气64.png
LV_IMG_DECLARE(ui_img_320358418);    // assets/日历64_nonum.png
LV_IMG_DECLARE(ui_img_634722903);    // assets/备忘录64.png
LV_IMG_DECLARE(ui_img_21600057);    // assets/记忆64.png
LV_IMG_DECLARE(ui_img_1318505016);    // assets/日历64.png
LV_IMG_DECLARE(ui_img_364131572);    // assets/问号60.png
LV_IMG_DECLARE(ui_img_519153304);    // assets/思绪60.png
LV_IMG_DECLARE(ui_img_1829120061);    // assets/手指60.png
LV_IMG_DECLARE(ui_img_657561664);    // assets/画笔60.png

// FONTS
LV_FONT_DECLARE(ui_font_iconfont26);
LV_FONT_DECLARE(ui_font_iconfont36);
LV_FONT_DECLARE(ui_font_iconfont44);
LV_FONT_DECLARE(ui_font_iconfont48);
LV_FONT_DECLARE(ui_font_heiti14);

// ui apps data
typedef lv_lib_pm_page_t ui_app_data_t;

// UI INIT
void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif