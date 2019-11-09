#pragma once

#include <Arduino.h>
#include <axp20x.h>

void send();
void sleep();
void callback(uint8_t message);
uint32_t get_count();
void scanI2Cdevice(void);
void setup();
void loop();

extern AXP20X_Class axp;
extern bool pmu_irq;
extern String baChStatus;
extern bool ssd1306_found;
extern bool axp192_found;
//extern RTC_DATA_ATTR uint32_t count;