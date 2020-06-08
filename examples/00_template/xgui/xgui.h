#ifndef __XGUI_H
#define __XGUI_H

#include "lvgl.h"

LV_FONT_DECLARE(source_han_sans_k_18);

extern lv_group_t *xgui_group;

void xgui_init(void);
void xgui_page_home(void);
void xgui_page_home_back(void);
void xgui_page_led(void);

#endif /* __XGUI_H */
