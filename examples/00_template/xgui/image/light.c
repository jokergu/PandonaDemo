#include "lvgl/lvgl.h"

#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_LIGHT
#define LV_ATTRIBUTE_IMG_LIGHT
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_IMG_LIGHT uint8_t light_map[] = {
#if LV_COLOR_DEPTH == 1 || LV_COLOR_DEPTH == 8
  /*Pixel format: Alpha 8 bit, Red: 3 bit, Green: 3 bit, Blue: 2 bit*/
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x8c, 0x00, 0x6b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x67, 0x00, 0x14, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x8f, 0x00, 0x6b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x14, 0x00, 0x67, 
  0x00, 0xa7, 0x00, 0xa0, 0x00, 0x13, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x44, 0x00, 0x33, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x13, 0x00, 0x9f, 0x00, 0xa8, 
  0x00, 0x10, 0x00, 0x9b, 0x00, 0x88, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x5f, 0x00, 0x83, 0x00, 0x87, 0x00, 0x68, 0x00, 0x2b, 0x00, 0x03, 0x00, 0x87, 0x00, 0x9b, 0x00, 0x13, 
  0x00, 0x00, 0x00, 0x0f, 0x00, 0x38, 0x00, 0x6b, 0x00, 0xc0, 0x00, 0xa3, 0x00, 0x78, 0x00, 0x74, 0x00, 0x98, 0x00, 0xc0, 0x00, 0x84, 0x00, 0x43, 0x00, 0x0f, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x03, 0x00, 0x7b, 0x00, 0xb7, 0x00, 0x38, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x27, 0x00, 0xa3, 0x00, 0x9b, 0x00, 0x0c, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x4c, 0x00, 0xbc, 0x00, 0x23, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0xa8, 0x00, 0x73, 0x00, 0x00, 
  0x00, 0x08, 0x00, 0xa8, 0x00, 0x5b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x37, 0x00, 0xbb, 0x00, 0x1c, 
  0x00, 0x28, 0x00, 0xbb, 0x00, 0x1b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0xac, 0x00, 0x50, 
  0x00, 0x40, 0x00, 0xb0, 0x00, 0x0b, 0x00, 0x0f, 0x00, 0x74, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x6f, 0x00, 0x24, 0x00, 0x00, 0x00, 0x97, 0x00, 0x6c, 
  0x00, 0x3c, 0x00, 0xb3, 0x00, 0x0c, 0x00, 0x0c, 0x00, 0xb8, 0x00, 0x54, 0x00, 0x28, 0x00, 0x2f, 0x00, 0x38, 0x00, 0xc3, 0x00, 0x24, 0x00, 0x00, 0x00, 0x98, 0x00, 0x68, 
  0x00, 0x24, 0x00, 0xbb, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x94, 0x00, 0xe0, 0x00, 0xbf, 0x00, 0xbc, 0x00, 0xd7, 0x00, 0xbb, 0x00, 0x08, 0x00, 0x08, 0x00, 0xaf, 0x00, 0x4b, 
  0x00, 0x08, 0x00, 0xab, 0x00, 0x50, 0x00, 0x00, 0x00, 0x67, 0x00, 0xa8, 0x00, 0x1c, 0x00, 0x14, 0x00, 0x88, 0x00, 0x8f, 0x00, 0x00, 0x00, 0x2c, 0x00, 0xbb, 0x00, 0x1f, 
  0x00, 0x00, 0x00, 0x68, 0x00, 0xa0, 0x00, 0x00, 0x00, 0x38, 0x00, 0xb3, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x98, 0x00, 0x60, 0x00, 0x00, 0x00, 0x7c, 0x00, 0x8f, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x17, 0x00, 0xbb, 0x00, 0x48, 0x00, 0x14, 0x00, 0xbb, 0x00, 0x28, 0x00, 0x0f, 0x00, 0xb7, 0x00, 0x30, 0x00, 0x27, 0x00, 0xc0, 0x00, 0x33, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x57, 0x00, 0xb8, 0x00, 0x1b, 0x00, 0xa3, 0x00, 0x50, 0x00, 0x2b, 0x00, 0xb8, 0x00, 0x1b, 0x00, 0x9f, 0x00, 0x7b, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0xa3, 0x00, 0x5f, 0x00, 0x74, 0x00, 0x7c, 0x00, 0x54, 0x00, 0x9b, 0x00, 0x3c, 0x00, 0xb8, 0x00, 0x14, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x67, 0x00, 0xbc, 0x00, 0xa3, 0x00, 0xcb, 0x00, 0xb8, 0x00, 0xb8, 0x00, 0xa8, 0x00, 0x90, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5b, 0x00, 0xcc, 0x00, 0x84, 0x00, 0x84, 0x00, 0x87, 0x00, 0x83, 0x00, 0xbf, 0x00, 0x87, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5f, 0x00, 0xa4, 0x00, 0x20, 0x00, 0x23, 0x00, 0x23, 0x00, 0x1c, 0x00, 0x83, 0x00, 0x8b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4b, 0x00, 0xec, 0x00, 0xcc, 0x00, 0xb7, 0x00, 0xb7, 0x00, 0xc7, 0x00, 0xf0, 0x00, 0x73, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x84, 0x00, 0xc7, 0x00, 0x50, 0x00, 0x4b, 0x00, 0xbf, 0x00, 0x9b, 0x00, 0x13, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x78, 0x00, 0xd4, 0x00, 0xd4, 0x00, 0x83, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
#endif
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP == 0
  /*Pixel format: Alpha 8 bit, Red: 5 bit, Green: 6 bit, Blue: 5 bit*/
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x8c, 0x00, 0x00, 0x6b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x67, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x8f, 0x00, 0x00, 0x6b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x67, 
  0x00, 0x00, 0xa7, 0x00, 0x00, 0xa0, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x44, 0x00, 0x00, 0x33, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x9f, 0x00, 0x00, 0xa8, 
  0x00, 0x00, 0x10, 0x00, 0x00, 0x9b, 0x00, 0x00, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x5f, 0x00, 0x00, 0x83, 0x00, 0x00, 0x87, 0x00, 0x00, 0x68, 0x00, 0x00, 0x2b, 0x00, 0x00, 0x03, 0x00, 0x00, 0x87, 0x00, 0x00, 0x9b, 0x00, 0x00, 0x13, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x38, 0x00, 0x00, 0x6b, 0x00, 0x00, 0xc0, 0x00, 0x00, 0xa3, 0x00, 0x00, 0x78, 0x00, 0x00, 0x74, 0x00, 0x00, 0x98, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x84, 0x00, 0x00, 0x43, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x7b, 0x00, 0x00, 0xb7, 0x00, 0x00, 0x38, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x27, 0x00, 0x00, 0xa3, 0x00, 0x00, 0x9b, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x4c, 0x00, 0x00, 0xbc, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0xa8, 0x00, 0x00, 0x73, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x08, 0x00, 0x00, 0xa8, 0x00, 0x00, 0x5b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x37, 0x00, 0x00, 0xbb, 0x00, 0x00, 0x1c, 
  0x00, 0x00, 0x28, 0x00, 0x00, 0xbb, 0x00, 0x00, 0x1b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0xac, 0x00, 0x00, 0x50, 
  0x00, 0x00, 0x40, 0x00, 0x00, 0xb0, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x74, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x6f, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x97, 0x00, 0x00, 0x6c, 
  0x00, 0x00, 0x3c, 0x00, 0x00, 0xb3, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x0c, 0x00, 0x00, 0xb8, 0x00, 0x00, 0x54, 0x00, 0x00, 0x28, 0x00, 0x00, 0x2f, 0x00, 0x00, 0x38, 0x00, 0x00, 0xc3, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x98, 0x00, 0x00, 0x68, 
  0x00, 0x00, 0x24, 0x00, 0x00, 0xbb, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x94, 0x00, 0x00, 0xe0, 0x00, 0x00, 0xbf, 0x00, 0x00, 0xbc, 0x00, 0x00, 0xd7, 0x00, 0x00, 0xbb, 0x00, 0x00, 0x08, 0x00, 0x00, 0x08, 0x00, 0x00, 0xaf, 0x00, 0x00, 0x4b, 
  0x00, 0x00, 0x08, 0x00, 0x00, 0xab, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x00, 0x00, 0x67, 0x00, 0x00, 0xa8, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x14, 0x00, 0x00, 0x88, 0x00, 0x00, 0x8f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2c, 0x00, 0x00, 0xbb, 0x00, 0x00, 0x1f, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x68, 0x00, 0x00, 0xa0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0xb3, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x98, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x8f, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x17, 0x00, 0x00, 0xbb, 0x00, 0x00, 0x48, 0x00, 0x00, 0x14, 0x00, 0x00, 0xbb, 0x00, 0x00, 0x28, 0x00, 0x00, 0x0f, 0x00, 0x00, 0xb7, 0x00, 0x00, 0x30, 0x00, 0x00, 0x27, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x33, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x57, 0x00, 0x00, 0xb8, 0x00, 0x00, 0x1b, 0x00, 0x00, 0xa3, 0x00, 0x00, 0x50, 0x00, 0x00, 0x2b, 0x00, 0x00, 0xb8, 0x00, 0x00, 0x1b, 0x00, 0x00, 0x9f, 0x00, 0x00, 0x7b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0xa3, 0x00, 0x00, 0x5f, 0x00, 0x00, 0x74, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x54, 0x00, 0x00, 0x9b, 0x00, 0x00, 0x3c, 0x00, 0x00, 0xb8, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x67, 0x00, 0x00, 0xbc, 0x00, 0x00, 0xa3, 0x00, 0x00, 0xcb, 0x00, 0x00, 0xb8, 0x00, 0x00, 0xb8, 0x00, 0x00, 0xa8, 0x00, 0x00, 0x90, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5b, 0x00, 0x00, 0xcc, 0x00, 0x00, 0x84, 0x00, 0x00, 0x84, 0x00, 0x00, 0x87, 0x00, 0x00, 0x83, 0x00, 0x00, 0xbf, 0x00, 0x00, 0x87, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5f, 0x00, 0x00, 0xa4, 0x00, 0x00, 0x20, 0x00, 0x00, 0x23, 0x00, 0x00, 0x23, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x83, 0x00, 0x00, 0x8b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4b, 0x00, 0x00, 0xec, 0x00, 0x00, 0xcc, 0x00, 0x00, 0xb7, 0x00, 0x00, 0xb7, 0x00, 0x00, 0xc7, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x73, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x84, 0x00, 0x00, 0xc7, 0x00, 0x00, 0x50, 0x00, 0x00, 0x4b, 0x00, 0x00, 0xbf, 0x00, 0x00, 0x9b, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x78, 0x00, 0x00, 0xd4, 0x00, 0x00, 0xd4, 0x00, 0x00, 0x83, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
#endif
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP != 0
  /*Pixel format: Alpha 8 bit, Red: 5 bit, Green: 6 bit, Blue: 5 bit  BUT the 2  color bytes are swapped*/
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x8c, 0x00, 0x00, 0x6b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x67, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x8f, 0x00, 0x00, 0x6b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x67, 
  0x00, 0x00, 0xa7, 0x00, 0x00, 0xa0, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x44, 0x00, 0x00, 0x33, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x9f, 0x00, 0x00, 0xa8, 
  0x00, 0x00, 0x10, 0x00, 0x00, 0x9b, 0x00, 0x00, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x5f, 0x00, 0x00, 0x83, 0x00, 0x00, 0x87, 0x00, 0x00, 0x68, 0x00, 0x00, 0x2b, 0x00, 0x00, 0x03, 0x00, 0x00, 0x87, 0x00, 0x00, 0x9b, 0x00, 0x00, 0x13, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x38, 0x00, 0x00, 0x6b, 0x00, 0x00, 0xc0, 0x00, 0x00, 0xa3, 0x00, 0x00, 0x78, 0x00, 0x00, 0x74, 0x00, 0x00, 0x98, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x84, 0x00, 0x00, 0x43, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x7b, 0x00, 0x00, 0xb7, 0x00, 0x00, 0x38, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x27, 0x00, 0x00, 0xa3, 0x00, 0x00, 0x9b, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x4c, 0x00, 0x00, 0xbc, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0xa8, 0x00, 0x00, 0x73, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x08, 0x00, 0x00, 0xa8, 0x00, 0x00, 0x5b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x37, 0x00, 0x00, 0xbb, 0x00, 0x00, 0x1c, 
  0x00, 0x00, 0x28, 0x00, 0x00, 0xbb, 0x00, 0x00, 0x1b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0xac, 0x00, 0x00, 0x50, 
  0x00, 0x00, 0x40, 0x00, 0x00, 0xb0, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x74, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x6f, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x97, 0x00, 0x00, 0x6c, 
  0x00, 0x00, 0x3c, 0x00, 0x00, 0xb3, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x0c, 0x00, 0x00, 0xb8, 0x00, 0x00, 0x54, 0x00, 0x00, 0x28, 0x00, 0x00, 0x2f, 0x00, 0x00, 0x38, 0x00, 0x00, 0xc3, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x98, 0x00, 0x00, 0x68, 
  0x00, 0x00, 0x24, 0x00, 0x00, 0xbb, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x94, 0x00, 0x00, 0xe0, 0x00, 0x00, 0xbf, 0x00, 0x00, 0xbc, 0x00, 0x00, 0xd7, 0x00, 0x00, 0xbb, 0x00, 0x00, 0x08, 0x00, 0x00, 0x08, 0x00, 0x00, 0xaf, 0x00, 0x00, 0x4b, 
  0x00, 0x00, 0x08, 0x00, 0x00, 0xab, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x00, 0x00, 0x67, 0x00, 0x00, 0xa8, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x14, 0x00, 0x00, 0x88, 0x00, 0x00, 0x8f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2c, 0x00, 0x00, 0xbb, 0x00, 0x00, 0x1f, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x68, 0x00, 0x00, 0xa0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0xb3, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x98, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x8f, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x17, 0x00, 0x00, 0xbb, 0x00, 0x00, 0x48, 0x00, 0x00, 0x14, 0x00, 0x00, 0xbb, 0x00, 0x00, 0x28, 0x00, 0x00, 0x0f, 0x00, 0x00, 0xb7, 0x00, 0x00, 0x30, 0x00, 0x00, 0x27, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x33, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x57, 0x00, 0x00, 0xb8, 0x00, 0x00, 0x1b, 0x00, 0x00, 0xa3, 0x00, 0x00, 0x50, 0x00, 0x00, 0x2b, 0x00, 0x00, 0xb8, 0x00, 0x00, 0x1b, 0x00, 0x00, 0x9f, 0x00, 0x00, 0x7b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0xa3, 0x00, 0x00, 0x5f, 0x00, 0x00, 0x74, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x54, 0x00, 0x00, 0x9b, 0x00, 0x00, 0x3c, 0x00, 0x00, 0xb8, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x67, 0x00, 0x00, 0xbc, 0x00, 0x00, 0xa3, 0x00, 0x00, 0xcb, 0x00, 0x00, 0xb8, 0x00, 0x00, 0xb8, 0x00, 0x00, 0xa8, 0x00, 0x00, 0x90, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5b, 0x00, 0x00, 0xcc, 0x00, 0x00, 0x84, 0x00, 0x00, 0x84, 0x00, 0x00, 0x87, 0x00, 0x00, 0x83, 0x00, 0x00, 0xbf, 0x00, 0x00, 0x87, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5f, 0x00, 0x00, 0xa4, 0x00, 0x00, 0x20, 0x00, 0x00, 0x23, 0x00, 0x00, 0x23, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x83, 0x00, 0x00, 0x8b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4b, 0x00, 0x00, 0xec, 0x00, 0x00, 0xcc, 0x00, 0x00, 0xb7, 0x00, 0x00, 0xb7, 0x00, 0x00, 0xc7, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x73, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x84, 0x00, 0x00, 0xc7, 0x00, 0x00, 0x50, 0x00, 0x00, 0x4b, 0x00, 0x00, 0xbf, 0x00, 0x00, 0x9b, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x78, 0x00, 0x00, 0xd4, 0x00, 0x00, 0xd4, 0x00, 0x00, 0x83, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
#endif
#if LV_COLOR_DEPTH == 32
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x8c, 0x00, 0x00, 0x00, 0x6b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x67, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x8f, 0x00, 0x00, 0x00, 0x6b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x67, 
  0x00, 0x00, 0x00, 0xa7, 0x00, 0x00, 0x00, 0xa0, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x44, 0x00, 0x00, 0x00, 0x33, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x9f, 0x00, 0x00, 0x00, 0xa8, 
  0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x9b, 0x00, 0x00, 0x00, 0x88, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x5f, 0x00, 0x00, 0x00, 0x83, 0x00, 0x00, 0x00, 0x87, 0x00, 0x00, 0x00, 0x68, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x87, 0x00, 0x00, 0x00, 0x9b, 0x00, 0x00, 0x00, 0x13, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x6b, 0x00, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x00, 0xa3, 0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00, 0x74, 0x00, 0x00, 0x00, 0x98, 0x00, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x00, 0x84, 0x00, 0x00, 0x00, 0x43, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x7b, 0x00, 0x00, 0x00, 0xb7, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x27, 0x00, 0x00, 0x00, 0xa3, 0x00, 0x00, 0x00, 0x9b, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4c, 0x00, 0x00, 0x00, 0xbc, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0xa8, 0x00, 0x00, 0x00, 0x73, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0xa8, 0x00, 0x00, 0x00, 0x5b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x37, 0x00, 0x00, 0x00, 0xbb, 0x00, 0x00, 0x00, 0x1c, 
  0x00, 0x00, 0x00, 0x28, 0x00, 0x00, 0x00, 0xbb, 0x00, 0x00, 0x00, 0x1b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0xac, 0x00, 0x00, 0x00, 0x50, 
  0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0xb0, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x74, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x6f, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x97, 0x00, 0x00, 0x00, 0x6c, 
  0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0xb3, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0xb8, 0x00, 0x00, 0x00, 0x54, 0x00, 0x00, 0x00, 0x28, 0x00, 0x00, 0x00, 0x2f, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0xc3, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x98, 0x00, 0x00, 0x00, 0x68, 
  0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, 0xbb, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x94, 0x00, 0x00, 0x00, 0xe0, 0x00, 0x00, 0x00, 0xbf, 0x00, 0x00, 0x00, 0xbc, 0x00, 0x00, 0x00, 0xd7, 0x00, 0x00, 0x00, 0xbb, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0xaf, 0x00, 0x00, 0x00, 0x4b, 
  0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0xab, 0x00, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x67, 0x00, 0x00, 0x00, 0xa8, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x88, 0x00, 0x00, 0x00, 0x8f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2c, 0x00, 0x00, 0x00, 0xbb, 0x00, 0x00, 0x00, 0x1f, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x68, 0x00, 0x00, 0x00, 0xa0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0xb3, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x98, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x00, 0x8f, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x17, 0x00, 0x00, 0x00, 0xbb, 0x00, 0x00, 0x00, 0x48, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0xbb, 0x00, 0x00, 0x00, 0x28, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0xb7, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x27, 0x00, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x00, 0x33, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x57, 0x00, 0x00, 0x00, 0xb8, 0x00, 0x00, 0x00, 0x1b, 0x00, 0x00, 0x00, 0xa3, 0x00, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x00, 0x00, 0xb8, 0x00, 0x00, 0x00, 0x1b, 0x00, 0x00, 0x00, 0x9f, 0x00, 0x00, 0x00, 0x7b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0xa3, 0x00, 0x00, 0x00, 0x5f, 0x00, 0x00, 0x00, 0x74, 0x00, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x00, 0x54, 0x00, 0x00, 0x00, 0x9b, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0xb8, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x67, 0x00, 0x00, 0x00, 0xbc, 0x00, 0x00, 0x00, 0xa3, 0x00, 0x00, 0x00, 0xcb, 0x00, 0x00, 0x00, 0xb8, 0x00, 0x00, 0x00, 0xb8, 0x00, 0x00, 0x00, 0xa8, 0x00, 0x00, 0x00, 0x90, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5b, 0x00, 0x00, 0x00, 0xcc, 0x00, 0x00, 0x00, 0x84, 0x00, 0x00, 0x00, 0x84, 0x00, 0x00, 0x00, 0x87, 0x00, 0x00, 0x00, 0x83, 0x00, 0x00, 0x00, 0xbf, 0x00, 0x00, 0x00, 0x87, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5f, 0x00, 0x00, 0x00, 0xa4, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x83, 0x00, 0x00, 0x00, 0x8b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4b, 0x00, 0x00, 0x00, 0xec, 0x00, 0x00, 0x00, 0xcc, 0x00, 0x00, 0x00, 0xb7, 0x00, 0x00, 0x00, 0xb7, 0x00, 0x00, 0x00, 0xc7, 0x00, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x00, 0x73, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x84, 0x00, 0x00, 0x00, 0xc7, 0x00, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x4b, 0x00, 0x00, 0x00, 0xbf, 0x00, 0x00, 0x00, 0x9b, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00, 0xd4, 0x00, 0x00, 0x00, 0xd4, 0x00, 0x00, 0x00, 0x83, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
#endif
};

const lv_img_dsc_t light = {
  .header.always_zero = 0,
  .header.w = 14,
  .header.h = 24,
  .data_size = 336 * LV_IMG_PX_SIZE_ALPHA_BYTE,
  .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
  .data = light_map,
};
