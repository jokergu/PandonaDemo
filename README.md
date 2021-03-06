# Pandona 开发板综合例程说明

## 简介

Pandona开发板综合例程，用于学习及加深对RT-Thread的理解

## 硬件资源说明

IoT Board 开发板如下图所示：

![IoT Board 开发板](docs/figures/IoT_Board.png)

## Pandona LVGL 按键说明

| 按键名称 | 事件  | 功能 |
| ---- | ------ | ----- |
| KEY0   | 单击  | 方向键：右(EVENT_RIGHT) |
| KEY0   | 双击  | 选择下一个控件(EVENT_NEXT) |
| KEY0   | 长按保持  | 方向键：右(EVENT_RIGHT) |
| KEY1   | 单击  | 方向键：下(EVENT_DOWN) |
| KEY1   | 双击  | 确定键(EVENT_ENTER) |
| KEY1   | 长按保持  | 方向键：下(EVENT_DOWN) |
| KEY2   | 单击  | 方向键：左(EVENT_LEFT) |
| KEY2   | 双击  | 选择上一个控件(EVENT_PREV) |
| KEY2   | 长按保持  | 方向键：左(EVENT_LEFT) |
| WK_UP   | 单击  | 方向键：上(EVENT_UP) |
| WK_UP   | 双击  | 确定键(EVENT_ENTER) |
| WK_UP   | 长按保持  | 方向键：上(EVENT_UP) |