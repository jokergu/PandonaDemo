#include "xgui.h"
#include "lv_port_indev.h"

#include <rtdevice.h>
#include <board.h>

enum 
{
    LED_R = 0,
    LED_G,
    LED_B,
    LED_NUM
};

lv_obj_t *led[LED_NUM];
lv_obj_t *sw[LED_NUM];

static void sw_event_cb(lv_obj_t * obj, lv_event_t event);

/**
  * @brief  显示LED页面
  * @param  无
  * @retval  无
  */
void xgui_page_led(void)
{
    lv_group_t *group = lv_port_indev_get_group();

    static lv_style_t style[LED_NUM];

    lv_color_t color[LED_NUM] = {LV_COLOR_RED, LV_COLOR_GREEN, LV_COLOR_BLUE};

    /* 配置LED引脚模式 */
    rt_pin_mode(PIN_LED_R, PIN_MODE_OUTPUT);
    rt_pin_mode(PIN_LED_G, PIN_MODE_OUTPUT);
    rt_pin_mode(PIN_LED_B, PIN_MODE_OUTPUT);
    rt_pin_write(PIN_LED_R, PIN_HIGH);
    rt_pin_write(PIN_LED_G, PIN_HIGH);
    rt_pin_write(PIN_LED_B, PIN_HIGH);

    for(int i = 0; i < LED_NUM; i++)
    {
        /* 初始化LED的样式 */
        lv_style_reset(&style[i]);
        lv_style_init(&style[i]);

        /* 设置LED样式 */
        lv_style_set_bg_color(&style[i], LV_STATE_DEFAULT, color[i]);
        lv_style_set_border_color(&style[i], LV_STATE_DEFAULT, color[i]);
        lv_style_set_shadow_color(&style[i], LV_STATE_DEFAULT, color[i]);

        /* 创建LED对象 */
        led[i]  = lv_led_create(lv_scr_act(), NULL);
        lv_obj_align(led[i], NULL, LV_ALIGN_IN_TOP_MID, -80 + i * 80, 10);
        lv_led_off(led[i]);
        lv_obj_add_style(led[i], LV_OBJ_PART_MAIN, &style[i]);

        /* 创建切换开关，用于控制LED */
        sw[i] = lv_switch_create(lv_scr_act(), NULL);
        lv_switch_off(sw[i], LV_ANIM_OFF);
        lv_obj_set_event_cb(sw[i], sw_event_cb);
        lv_obj_align(sw[i], led[i], LV_ALIGN_OUT_BOTTOM_MID, 0, 50);
        lv_group_add_obj(group, sw[i]);
    }

    xgui_page_home_back();
}

static void sw_event_cb(lv_obj_t * obj, lv_event_t event)
{
    if(event == LV_EVENT_VALUE_CHANGED)
    {
        if(obj == sw[LED_R])
        {
            lv_switch_get_state(obj) ? lv_led_on(led[LED_R]) : lv_led_off(led[LED_R]);
            lv_switch_get_state(obj) ? rt_pin_write(PIN_LED_R, PIN_LOW) : rt_pin_write(PIN_LED_R, PIN_HIGH);
        }
        else if(obj == sw[LED_G])
        {
            lv_switch_get_state(obj) ? lv_led_on(led[LED_G]) : lv_led_off(led[LED_G]);
            lv_switch_get_state(obj) ? rt_pin_write(PIN_LED_G, PIN_LOW) : rt_pin_write(PIN_LED_G, PIN_HIGH);
        }
        else if(obj == sw[LED_B])
        {
            lv_switch_get_state(obj) ? lv_led_on(led[LED_B]) : lv_led_off(led[LED_B]);
            lv_switch_get_state(obj) ? rt_pin_write(PIN_LED_B, PIN_LOW) : rt_pin_write(PIN_LED_B, PIN_HIGH);
        }       
    }
}