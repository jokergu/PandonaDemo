#include "xgui.h"
#include "lv_port_indev.h"

/* keypad设备输入组 */
lv_group_t *xgui_group;

/**
  * @brief  完成LVGL所需的准备工作
  * @param  无
  * @retval  无
  */
void xgui_init(void)
{
    /* 初始化GUI库 */
	lv_init();
	
    /* 初始化底层显示接口 */
	lv_port_disp_init();

    /* 初始化底层输入设备接口 */
	lv_port_indev_init();

    /* 获取输入设备组 */
    xgui_group = lv_port_indev_get_group();
}
