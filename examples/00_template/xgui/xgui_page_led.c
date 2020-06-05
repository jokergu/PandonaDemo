#include "xgui.h"
#include "lv_port_indev.h"

enum 
{
    LED_R = 0,
    LED_G,
    LED_B,
    LED_NUM
};

void led_task_cb(struct _lv_task_t *t)
{
    lv_led_toggle(t->user_data);
}

void xgui_page_led(void)
{
    lv_group_t *group = lv_port_indev_get_group();

    static lv_style_t style[LED_NUM];

    lv_color_t color[LED_NUM] = {LV_COLOR_RED, LV_COLOR_GREEN, LV_COLOR_BLUE};
    lv_obj_t *led[LED_NUM];

    for(int i = 0; i < LED_NUM; i++)
    {
        lv_style_reset(&style[i]);
        lv_style_init(&style[i]);

        lv_style_set_bg_color(&style[i], LV_STATE_DEFAULT, color[i]);
        lv_style_set_border_color(&style[i], LV_STATE_DEFAULT, color[i]);
        lv_style_set_shadow_color(&style[i], LV_STATE_DEFAULT, color[i]);

        led[i]  = lv_led_create(lv_scr_act(), NULL);
        lv_obj_align(led[i], NULL, LV_ALIGN_IN_TOP_MID, -80 + i * 80, 10);
        lv_led_on(led[i]);
        lv_obj_add_style(led[i], LV_OBJ_PART_MAIN, &style[i]);

        lv_obj_t *sw = lv_switch_create(lv_scr_act(), NULL);
        lv_obj_align(sw, led[i], LV_ALIGN_OUT_BOTTOM_MID, 0, 50);
        lv_group_add_obj(group, sw);
    }

    // lv_task_create(led_task_cb, 100, LV_TASK_PRIO_LOW, led[LED_R]);
    // lv_task_create(led_task_cb, 300, LV_TASK_PRIO_LOW, led[LED_G]);
    // lv_task_create(led_task_cb, 500, LV_TASK_PRIO_LOW, led[LED_B]);
}