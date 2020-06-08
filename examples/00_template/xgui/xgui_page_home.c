#include "xgui.h"

static lv_obj_t * add_icon(lv_obj_t * parent, const void * src, const char * txt);
static void led_event_cb(lv_obj_t * obj, lv_event_t event);
static void back_event_cb(lv_obj_t * obj, lv_event_t event);
static void focus_cb(lv_group_t * g);

/**
  * @brief  显示主页面
  * @param  无
  * @retval  无
  */
void xgui_page_home(void)
{
    LV_IMG_DECLARE(light);
    LV_IMG_DECLARE(buzzer);

    lv_group_set_focus_cb(xgui_group, focus_cb); /* 聚焦回调，用于将聚焦对象移动到屏幕可视范围内 */

    lv_obj_t * cont = lv_page_create(lv_scr_act(), NULL);
    lv_page_set_scrl_layout(cont, LV_LAYOUT_PRETTY_MID);
    lv_obj_set_size(cont, LV_HOR_RES, LV_VER_RES);

    /* 设置背景梯度 */
    lv_obj_set_style_local_bg_grad_color(cont, LV_CONT_PART_MAIN, LV_STATE_DEFAULT, LV_COLOR_PURPLE);
    lv_obj_set_style_local_bg_grad_dir(cont, LV_CONT_PART_MAIN, LV_STATE_DEFAULT, LV_GRAD_DIR_VER);
    lv_obj_set_style_local_bg_main_stop(cont, LV_CONT_PART_MAIN, LV_STATE_DEFAULT, 0);
    lv_obj_set_style_local_bg_grad_stop(cont, LV_CONT_PART_MAIN, LV_STATE_DEFAULT, 255);

    lv_obj_set_style_local_pad_left(lv_page_get_scrllable(cont), LV_CONT_PART_MAIN, LV_STATE_DEFAULT, LV_DPX(50));
    lv_obj_set_style_local_pad_right(lv_page_get_scrllable(cont), LV_CONT_PART_MAIN, LV_STATE_DEFAULT, LV_DPX(50));
    lv_obj_set_style_local_pad_top(lv_page_get_scrllable(cont), LV_CONT_PART_MAIN, LV_STATE_DEFAULT, LV_DPX(50));
    lv_obj_set_style_local_pad_bottom(lv_page_get_scrllable(cont), LV_CONT_PART_MAIN, LV_STATE_DEFAULT, LV_DPX(50));
    lv_obj_set_style_local_pad_inner(lv_page_get_scrllable(cont), LV_CONT_PART_MAIN, LV_STATE_DEFAULT, LV_DPX(100));

    lv_obj_t *icon = add_icon(cont, &light, "LED");
    lv_obj_set_event_cb(icon, led_event_cb);
    lv_group_add_obj(xgui_group, icon);

    icon = add_icon(cont, &light, "BTN");
    lv_obj_set_event_cb(icon, led_event_cb);
    lv_group_add_obj(xgui_group, icon);

    icon = add_icon(cont, &buzzer, "beep");
    lv_obj_set_event_cb(icon, led_event_cb);
    lv_group_add_obj(xgui_group, icon);

    icon = add_icon(cont, &light, "beep");
    lv_obj_set_event_cb(icon, led_event_cb);
    lv_group_add_obj(xgui_group, icon);

    icon = add_icon(cont, &light, "beep");
    lv_obj_set_event_cb(icon, led_event_cb);
    lv_group_add_obj(xgui_group, icon);

    icon = add_icon(cont, &light, "beep");
    lv_obj_set_event_cb(icon, led_event_cb);
    lv_group_add_obj(xgui_group, icon);

    icon = add_icon(cont, &light, "beep");
    lv_obj_set_event_cb(icon, led_event_cb);
    lv_group_add_obj(xgui_group, icon);

    icon = add_icon(cont, &light, "beep");
    lv_obj_set_event_cb(icon, led_event_cb);
    lv_group_add_obj(xgui_group, icon);
}

/**
  * @brief  主页面返回按钮
  * @param  无
  * @retval  无
  */
void xgui_page_home_back(void)
{
    /* 返回键 */
    lv_obj_t *back = lv_btn_create(lv_scr_act(), NULL);
    lv_obj_set_size(back, 40, 40);
    lv_obj_align(back, NULL, LV_ALIGN_IN_BOTTOM_LEFT, 10, 0);
    lv_obj_set_event_cb(back, back_event_cb);
    lv_group_add_obj(xgui_group, back);

    lv_obj_set_style_local_bg_opa(back, LV_BTN_PART_MAIN, LV_STATE_DEFAULT, LV_OPA_TRANSP);
    lv_obj_set_style_local_radius(back, LV_BTN_PART_MAIN, LV_STATE_DEFAULT, 20);
    lv_obj_set_style_local_value_str(back, LV_BTN_PART_MAIN, LV_STATE_DEFAULT, LV_SYMBOL_LEFT);
}


static lv_obj_t * add_icon(lv_obj_t * parent, const void * src, const char * txt) {
    
    lv_obj_t * icon = lv_img_create(parent, NULL);
    lv_img_set_src(icon, src);
    lv_obj_set_click(icon, true);
    lv_img_set_antialias(icon, false);

    lv_obj_set_style_local_value_ofs_y(icon, LV_IMG_PART_MAIN, LV_STATE_DEFAULT, 30); /* 设置值在默认状态下的y轴偏移 */
    lv_obj_set_style_local_value_str(icon, LV_IMG_PART_MAIN, LV_STATE_DEFAULT, txt); /* 设置默认状态下的值文本 */
    lv_obj_set_style_local_outline_pad(icon, LV_IMG_PART_MAIN, LV_STATE_DEFAULT, LV_DPX(40)); /* 设置轮廓在默认状态下与对象的距离 */
    lv_obj_set_style_local_outline_width(icon, LV_IMG_PART_MAIN, LV_STATE_DEFAULT, 3); /* 设置轮廓在默认状态下的宽度 */
    lv_obj_set_style_local_outline_opa(icon, LV_IMG_PART_MAIN, LV_STATE_DEFAULT, LV_OPA_0); /* 设置轮廓在默认状态下的透明度 */
    lv_obj_set_style_local_outline_opa(icon, LV_IMG_PART_MAIN, LV_STATE_FOCUSED, LV_OPA_50); /* 设置轮廓在聚焦状态下的透明度 */
    lv_obj_set_style_local_outline_color(icon, LV_IMG_PART_MAIN, LV_STATE_DEFAULT, LV_COLOR_RED); /* 设置轮廓在默认状态下的颜色 */

    return icon;
}

static void led_event_cb(lv_obj_t * obj, lv_event_t event)
{
    if(event == LV_EVENT_CLICKED)
    {
        lv_obj_clean(lv_scr_act());
        lv_group_remove_all_objs(xgui_group);
        lv_group_set_focus_cb(xgui_group, NULL);
        xgui_page_led();
    }
}

static void back_event_cb(lv_obj_t * obj, lv_event_t event)
{
    if(event == LV_EVENT_CLICKED)
    {
        lv_obj_clean(lv_scr_act());
        lv_group_remove_all_objs(xgui_group);
        xgui_page_home();
    }
}

 /**
  * @brief  扩展部件聚焦回调，因为扩展控件太多，屏幕范围内显示不完，
  *         所以需要该函数，将聚焦的控件移动到屏幕显示范围内
  * @param  g 输入设备组
  * @retval 无
  */
static void focus_cb(lv_group_t * g)
{
    lv_obj_t * obj = lv_group_get_focused(g);
    if(obj != NULL)
    {
        lv_obj_t *parent = lv_obj_get_parent(obj); /* 获取可滚动对象 */
        parent = lv_obj_get_parent(parent); /* 获取page对象 */
        lv_page_focus(parent, obj, LV_ANIM_OFF);
    }
}