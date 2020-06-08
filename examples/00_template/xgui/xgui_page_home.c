#include "xgui.h"
#include "lv_port_indev.h"

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

    lv_group_set_focus_cb(xgui_group, focus_cb);

    lv_obj_t * cont = lv_page_create(lv_scr_act(), NULL);
    lv_page_set_scrl_layout(cont, LV_LAYOUT_PRETTY_MID);
    lv_obj_set_size(cont, LV_HOR_RES, LV_VER_RES);

    lv_obj_set_style_local_pad_left(lv_page_get_scrllable(cont), LV_IMG_PART_MAIN, LV_STATE_DEFAULT, LV_DPX(60));
    lv_obj_set_style_local_pad_right(lv_page_get_scrllable(cont), LV_IMG_PART_MAIN, LV_STATE_DEFAULT, LV_DPX(60));
    lv_obj_set_style_local_pad_top(lv_page_get_scrllable(cont), LV_IMG_PART_MAIN, LV_STATE_DEFAULT, LV_DPX(60));
    lv_obj_set_style_local_pad_bottom(lv_page_get_scrllable(cont), LV_IMG_PART_MAIN, LV_STATE_DEFAULT, LV_DPX(60));
    lv_obj_set_style_local_pad_inner(lv_page_get_scrllable(cont), LV_IMG_PART_MAIN, LV_STATE_DEFAULT, LV_DPX(100));

    lv_obj_t *icon = add_icon(cont, &light, "LED");
    // lv_obj_align_origo(icon, NULL, LV_ALIGN_IN_TOP_MID, 0, 10);
    lv_obj_set_event_cb(icon, led_event_cb);
    lv_group_add_obj(xgui_group, icon);

    icon = add_icon(cont, &light, "BTN");
    // lv_obj_align_origo(icon, NULL, LV_ALIGN_IN_TOP_MID, 0, 105);
    lv_obj_set_event_cb(icon, led_event_cb);
    lv_group_add_obj(xgui_group, icon);

    icon = add_icon(cont, &light, "beep");
    // lv_obj_align_origo(icon, NULL, LV_ALIGN_IN_TOP_MID, 0, 200);
    lv_obj_set_event_cb(icon, led_event_cb);
    lv_group_add_obj(xgui_group, icon);

    icon = add_icon(cont, &light, "beep");
    // lv_obj_align_origo(icon, NULL, LV_ALIGN_IN_TOP_MID, 0, 200);
    lv_obj_set_event_cb(icon, led_event_cb);
    lv_group_add_obj(xgui_group, icon);

    icon = add_icon(cont, &light, "beep");
    // lv_obj_align_origo(icon, NULL, LV_ALIGN_IN_TOP_MID, 0, 200);
    lv_obj_set_event_cb(icon, led_event_cb);
    lv_group_add_obj(xgui_group, icon);

    icon = add_icon(cont, &light, "beep");
    // lv_obj_align_origo(icon, NULL, LV_ALIGN_IN_TOP_MID, 0, 200);
    lv_obj_set_event_cb(icon, led_event_cb);
    lv_group_add_obj(xgui_group, icon);

    icon = add_icon(cont, &light, "beep");
    // lv_obj_align_origo(icon, NULL, LV_ALIGN_IN_TOP_MID, 0, 200);
    lv_obj_set_event_cb(icon, led_event_cb);
    lv_group_add_obj(xgui_group, icon);

    icon = add_icon(cont, &light, "beep");
    // lv_obj_align_origo(icon, NULL, LV_ALIGN_IN_TOP_MID, 0, 200);
    lv_obj_set_event_cb(icon, led_event_cb);
    lv_group_add_obj(xgui_group, icon);

    lv_obj_t *btn = lv_btn_create(cont, NULL);
    lv_group_add_obj(xgui_group, btn);
    btn = lv_btn_create(cont, NULL);
    lv_group_add_obj(xgui_group, btn);
    btn = lv_btn_create(cont, NULL);
    lv_group_add_obj(xgui_group, btn);
}

/**
  * @brief  主页面返回按钮
  * @param  无
  * @retval  无
  */
void xgui_page_home_back(void)
{
    static lv_style_t back_style;
    lv_style_reset(&back_style);
    lv_style_init(&back_style);

    lv_style_set_bg_opa(&back_style, LV_STATE_DEFAULT, LV_OPA_TRANSP);
    lv_style_set_radius(&back_style, LV_STATE_DEFAULT, 20);
    lv_style_set_value_str(&back_style, LV_STATE_DEFAULT, LV_SYMBOL_LEFT);

    /* 返回键 */
    lv_obj_t *back = lv_btn_create(lv_scr_act(), NULL);
    lv_obj_set_size(back, 40, 40);
    // lv_obj_add_style(back, LV_OBJ_PART_MAIN, &back_style);
    lv_obj_align(back, NULL, LV_ALIGN_IN_BOTTOM_LEFT, 10, 0);
    lv_obj_set_event_cb(back, back_event_cb);
    lv_group_add_obj(xgui_group, back);

    lv_obj_set_style_local_bg_opa(back, LV_BTN_PART_MAIN, LV_STATE_DEFAULT, LV_OPA_TRANSP);
    lv_obj_set_style_local_radius(back, LV_BTN_PART_MAIN, LV_STATE_DEFAULT, 20);
    lv_obj_set_style_local_value_str(back, LV_BTN_PART_MAIN, LV_STATE_DEFAULT, LV_SYMBOL_LEFT);
}


static lv_obj_t * add_icon(lv_obj_t * parent, const void * src,
        const char * txt) {
    lv_obj_t * icon = lv_img_create(parent, NULL);
    // lv_theme_apply(icon, LV_DEMO_PRINTER_THEME_ICON);
    lv_img_set_src(icon, src);
    lv_obj_set_click(icon, true);
    lv_img_set_antialias(icon, false);
    // lv_obj_set_size(icon, 100, 100);

    lv_obj_set_style_local_value_ofs_y(icon, LV_IMG_PART_MAIN, LV_STATE_DEFAULT, 30);
    lv_obj_set_style_local_value_str(icon, LV_IMG_PART_MAIN, LV_STATE_DEFAULT, txt);
    lv_obj_set_style_local_pad_left(icon, LV_IMG_PART_MAIN, LV_STATE_DEFAULT, LV_DPX(40));
    lv_obj_set_style_local_pad_right(icon, LV_IMG_PART_MAIN, LV_STATE_DEFAULT, LV_DPX(40));
    lv_obj_set_style_local_pad_top(icon, LV_IMG_PART_MAIN, LV_STATE_DEFAULT, LV_DPX(40));
    lv_obj_set_style_local_pad_bottom(icon, LV_IMG_PART_MAIN, LV_STATE_DEFAULT, LV_DPX(40));
    lv_obj_set_style_local_pad_inner(icon, LV_IMG_PART_MAIN, LV_STATE_DEFAULT, LV_DPX(10));
    lv_obj_set_style_local_outline_width(icon, LV_IMG_PART_MAIN, LV_STATE_DEFAULT, 3);
    lv_obj_set_style_local_outline_opa(icon, LV_IMG_PART_MAIN, LV_STATE_DEFAULT, LV_OPA_0);
    lv_obj_set_style_local_outline_opa(icon, LV_IMG_PART_MAIN, LV_STATE_FOCUSED, LV_OPA_50);
    lv_obj_set_style_local_outline_color(icon, LV_IMG_PART_MAIN, LV_STATE_DEFAULT, LV_COLOR_RED);
    lv_obj_set_style_local_outline_color(icon, LV_IMG_PART_MAIN, LV_STATE_EDITED, LV_COLOR_BLUE);
    lv_obj_set_style_local_border_width(icon, LV_IMG_PART_MAIN, LV_STATE_DEFAULT, 3);
    lv_obj_set_style_local_border_color(icon, LV_IMG_PART_MAIN, LV_STATE_FOCUSED, LV_COLOR_RED);
    lv_obj_set_style_local_border_opa(icon, LV_IMG_PART_MAIN, LV_STATE_FOCUSED, LV_OPA_50);
    lv_obj_set_style_local_border_opa(icon, LV_IMG_PART_MAIN, LV_STATE_DEFAULT, LV_OPA_TRANSP);
    lv_obj_set_style_local_size(icon, LV_IMG_PART_MAIN, LV_STATE_DEFAULT, 100);

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