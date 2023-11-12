#ifndef CONFIGS_H
#define CONFIGS_H

// lvgl
#define REFRESH_RATE 10 // tickrate

// lcd (Make changes according to your LCD)
#define LCD_WIDTH 240
#define LCD_HEIGHT 320
#define LCD_MOSI 16
#define LCD_CLK 17
#define LCD_CS 13
#define LCD_DC 15
#define LCD_RST 14
#define LCD_BCKL 18
#define LCD_MISO 33

#define TOUCH_ENABLED // uncomment if you have touch screen
#ifdef TOUCH_ENABLED
#define TOUCH_IRQ 35
#define TOUCH_CS 34
#endif

// LOG tags
#define INFO "INFO"
#define ERR "ERR"
#define DEBUG "DEBUG"

// delay
#define DELAY(x) vTaskDelay(x / portTICK_PERIOD_MS); // ms

#endif