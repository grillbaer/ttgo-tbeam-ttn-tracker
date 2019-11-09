#pragma once

#include <Arduino.h>

void screen_show_logo();
void screen_off();
void screen_on();
void screen_clear();
void screen_print(const char * text, uint8_t x, uint8_t y, uint8_t alignment);
void screen_print(const char * text, uint8_t x, uint8_t y);
void screen_print(const char * text);
void screen_update();
void screen_setup();
void screen_loop();
