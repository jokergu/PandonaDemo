/**
 * @file lv_port_indev.c
 *
 */

 /*Copy this file as "lv_port_indev.c" and set this value to "1" to enable content*/
#if 1

/*********************
 *      INCLUDES
 *********************/
#include "lv_port_indev.h"

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 *  STATIC PROTOTYPES
 **********************/

static void keypad_init(void);
static bool key_read(lv_indev_drv_t * indev_drv, lv_indev_data_t * data);

/**********************
 *  STATIC VARIABLES
 **********************/
lv_indev_t * indev_keypad;

static uint32_t last_key;
static lv_indev_state_t last_key_state = LV_INDEV_STATE_REL;

static lv_group_t *group;

/**********************
 *      MACROS
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/
void lv_port_indev_init(void)
{
    /* Here you will find example implementation of input devices supported by LittelvGL:
     *  - Touchpad
     *  - Mouse (with cursor support)
     *  - Keypad (supports GUI usage only with key)
     *  - Encoder (supports GUI usage only with: left, right, push)
     *  - Button (external buttons to press points on the screen)
     *
     *  The `..._read()` function are only examples.
     *  You should shape them according to your hardware
     */


    lv_indev_drv_t indev_drv;

    /*------------------
    * Keypad
    * -----------------*/

    keypad_init();

    /*Register a keypad input device*/
    lv_indev_drv_init(&indev_drv);
    indev_drv.type = LV_INDEV_TYPE_KEYPAD;
    indev_drv.read_cb = key_read;
    indev_keypad = lv_indev_drv_register(&indev_drv);
        
    group = lv_group_create();
    lv_indev_set_group(indev_keypad, group);
}

lv_indev_t *lv_port_indev_get_handle(void)
{
    return indev_keypad;
}

lv_group_t *lv_port_indev_get_group(void)
{
    return group;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/


/*------------------
 * Keypad
 * -----------------*/

/* Initialize your keypad */
static void keypad_init(void)
{
    /*Your code comes here*/
}

void lv_port_indev_set_state(lv_indev_state_t state)
{
    last_key_state = state;
}

void lv_port_indev_set_key(uint32_t key)
{
    last_key = key;
}

static bool key_read(lv_indev_drv_t * indev_drv, lv_indev_data_t * data)
{   
    data->state = last_key_state;
    data->key = last_key;

    /*Return `false` because we are not buffering and no more data to read*/
    return false;
}


#else /* Enable this file at the top */

/* This dummy typedef exists purely to silence -Wpedantic. */
typedef int keep_pedantic_happy;
#endif
