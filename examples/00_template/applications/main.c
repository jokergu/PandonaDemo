#include <rtthread.h>
#include <rtdevice.h>
#include <board.h>
#include <stdlib.h>
#include <rthw.h>

#include "lvgl.h"
#include "lv_port_disp.h"
#include "lv_port_indev.h"
#include "lv_examples.h"
#include "multi_button.h"

#include "xgui.h"

//BUTTON_RELEASE_TIME一定要大于等于LV_INDEV_DEF_READ_PERIOD，否则可能造成事件丢失
#define BUTTON_RELEASE_TIME    (LV_INDEV_DEF_READ_PERIOD + 10)

enum{
    USER_KEY_0 = 0,
    USER_KEY_1,
    USER_KEY_2,
    USER_KEY_WKUP,
    USER_KEY_MAX
};

static struct button btn[USER_KEY_MAX];
static struct rt_timer release_timer;

/**
  * @brief  读取KEY0的电平
  * @param  无
  * @retval  电平值
  */
static uint8_t key0_get_level(void)
{
    return rt_pin_read(PIN_KEY0); 
}

/**
  * @brief  读取KEY1的电平
  * @param  无
  * @retval  电平值
  */
static uint8_t key1_get_level(void)
{
    return rt_pin_read(PIN_KEY1); 
}

/**
  * @brief  读取KEY2的电平
  * @param  无
  * @retval  电平值
  */
static uint8_t key2_get_level(void)
{
    return rt_pin_read(PIN_KEY2); 
}

/**
  * @brief  读取WK_UP的电平
  * @param  无
  * @retval  电平值
  */
static uint8_t key_wkup_get_level(void)
{
    return rt_pin_read(PIN_WK_UP); 
}

/**
  * @brief  执行按键释放
  * @param  parameter:定时器参数指针
  * @retval  无
  */
static void release_timeout(void *parameter)
{
    lv_port_indev_set_state(LV_INDEV_STATE_REL);
}

/**
  * @brief  KEY0回调
  * @param  arg:按键指针
  * @retval  无
  */
static void key0_callback(void *arg)
{
    uint32_t key = 0;
	uint32_t event = get_button_event((struct button *)arg);
    switch(event)
    {
        case LONG_PRESS_HOLD:
        case SINGLE_CLICK:{
            key = LV_KEY_RIGHT;
            lv_port_indev_set_state(LV_INDEV_STATE_PR);
		    lv_port_indev_set_key(key);
            break;
        }
        case DOUBLE_CLICK:{
            key = LV_KEY_NEXT;
            lv_port_indev_set_state(LV_INDEV_STATE_PR);
		    lv_port_indev_set_key(key);
            break;
        }
    }
	
	rt_timer_start(&release_timer);
}

/**
  * @brief  KEY1回调
  * @param  arg:按键指针
  * @retval  无
  */
static void key1_callback(void *arg)
{
    uint32_t key = 0;
	uint32_t event = get_button_event((struct button *)arg);
    switch(event)
    {
        case LONG_PRESS_HOLD:
        case SINGLE_CLICK:{
            key = LV_KEY_DOWN;
            lv_port_indev_set_state(LV_INDEV_STATE_PR);
		    lv_port_indev_set_key(key);
            break;
        }
        case DOUBLE_CLICK:{
            key = LV_KEY_ENTER;
            lv_port_indev_set_state(LV_INDEV_STATE_PR);
		    lv_port_indev_set_key(key);
            break;
        }
    }
	
	rt_timer_start(&release_timer);
}

/**
  * @brief  KEY2回调
  * @param  arg:按键指针
  * @retval  无
  */
static void key2_callback(void *arg)
{
    uint32_t key = 0;
	uint32_t event = get_button_event((struct button *)arg);
    switch(event)
    {
        case LONG_PRESS_HOLD:
        case SINGLE_CLICK:{
            key = LV_KEY_LEFT;
            lv_port_indev_set_state(LV_INDEV_STATE_PR);
		    lv_port_indev_set_key(key);
            break;
        }
        case DOUBLE_CLICK:{
            key = LV_KEY_PREV;
            lv_port_indev_set_state(LV_INDEV_STATE_PR);
		    lv_port_indev_set_key(key);
            break;
        }
    }
	
	rt_timer_start(&release_timer);
}

/**
  * @brief  WK_UP回调
  * @param  arg:按键指针
  * @retval  无
  */
static void key_wkup_callback(void *arg)
{
    uint32_t key = 0;
	uint32_t event = get_button_event((struct button *)arg);
    switch(event)
    {
        case LONG_PRESS_HOLD:
        case SINGLE_CLICK:{
            key = LV_KEY_UP;
            lv_port_indev_set_state(LV_INDEV_STATE_PR);
		    lv_port_indev_set_key(key);
            break;
        }
        case DOUBLE_CLICK:{
            key = LV_KEY_ENTER;
            lv_port_indev_set_state(LV_INDEV_STATE_PR);
		    lv_port_indev_set_key(key);
            break;
        }
    }
	
	rt_timer_start(&release_timer);
}

/**
  * @brief  LVGL心跳
  * @param  parameter:定时器参数指针
  * @retval  无
  */
static void lvgl_tick_timeout(void *parameter)
{
	lv_tick_inc(1);
}

/**
  * @brief  进行按键扫描工作
  * @param  parameter:定时器参数指针
  * @retval  无
  */
static void button_scan_timeout(void *parameter)
{
	button_ticks();
}

/**
  * @brief  周期处理LVGL的任务
  * @param  parameter:线程参数指针
  * @retval  无
  */
static void thread_lvgl_entry(void *parameter)
{
    //初始化GUI库
	lv_init();
	
    //初始化底层显示接口
	lv_port_disp_init();

    //初始化底层输入设备接口
	lv_port_indev_init();
	
    //调用键盘例程
	// lv_demo_keypad_encoder();
    xgui_page_led();
	
    //周期调用任务处理程序
	while(1)
    {		
        rt_thread_mdelay(5);
        lv_task_handler();
    }
}


/**
  * @brief  完成LVGL所需的准备工作
  * @param  无
  * @retval  无
  */
static void lvgl_demo(void)
{
	rt_timer_t timer1, timer2;

    //创建GUI Tick定时器
	timer1 = rt_timer_create("lv_tick", lvgl_tick_timeout, RT_NULL, 1, RT_TIMER_FLAG_PERIODIC);
	if(timer1 != RT_NULL)
	{
		rt_timer_start(timer1);
	}
	
    //创建按键扫描定时器
	timer2 = rt_timer_create("btn_scan", button_scan_timeout, RT_NULL, 5, RT_TIMER_FLAG_PERIODIC);
	if(timer2 != RT_NULL)
	{
		rt_timer_start(timer2);
	}
	
    //创建按键释放定时器
    rt_timer_init(&release_timer, "btn_rel", release_timeout, RT_NULL, BUTTON_RELEASE_TIME, RT_TIMER_FLAG_ONE_SHOT);

	//注册按键KEY0
	rt_pin_mode  (PIN_KEY0, PIN_MODE_INPUT);
	button_init(&btn[USER_KEY_0], key0_get_level, 0);
    button_attach(&btn[USER_KEY_0], SINGLE_CLICK, key0_callback);
    button_attach(&btn[USER_KEY_0], DOUBLE_CLICK, key0_callback);
    button_attach(&btn[USER_KEY_0], LONG_PRESS_HOLD, key0_callback);
	button_start(&btn[USER_KEY_0]);

    //注册按键KEY1
	rt_pin_mode  (PIN_KEY1, PIN_MODE_INPUT);
	button_init(&btn[USER_KEY_1], key1_get_level, 0);
    button_attach(&btn[USER_KEY_1], SINGLE_CLICK, key1_callback);
    button_attach(&btn[USER_KEY_1], DOUBLE_CLICK, key1_callback);
    button_attach(&btn[USER_KEY_1], LONG_PRESS_HOLD, key1_callback);
	button_start(&btn[USER_KEY_1]);

    //注册按键KEY2
	rt_pin_mode  (PIN_KEY2, PIN_MODE_INPUT);
	button_init(&btn[USER_KEY_2], key2_get_level, 0);
    button_attach(&btn[USER_KEY_2], SINGLE_CLICK, key2_callback);
    button_attach(&btn[USER_KEY_2], DOUBLE_CLICK, key2_callback);
    button_attach(&btn[USER_KEY_2], LONG_PRESS_HOLD, key2_callback);
	button_start(&btn[USER_KEY_2]);

    //注册按键KEY_WKUP
	rt_pin_mode  (PIN_WK_UP, PIN_MODE_INPUT);
	button_init(&btn[USER_KEY_WKUP], key_wkup_get_level, 1);
    button_attach(&btn[USER_KEY_WKUP], SINGLE_CLICK, key_wkup_callback);
    button_attach(&btn[USER_KEY_WKUP], DOUBLE_CLICK, key_wkup_callback);
    button_attach(&btn[USER_KEY_WKUP], LONG_PRESS_HOLD, key_wkup_callback);
	button_start(&btn[USER_KEY_WKUP]);
	
    //创建LVGL任务
	rt_thread_t thread1 = rt_thread_create("lvgl", thread_lvgl_entry, RT_NULL, 4 * 1024, 20, 5);
	if(thread1 != RT_NULL)
	{
		rt_thread_startup(thread1);
	}
}

/**
  * @brief  应用程序入口
  * @param  无
  * @retval  int
  */
int main(void)
{
    lvgl_demo();
}
