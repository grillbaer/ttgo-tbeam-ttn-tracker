#pragma once

#include <Arduino.h>

void os_getArtEui (u1_t* buf);
void os_getDevEui (u1_t* buf);
void os_getDevKey (u1_t* buf);
void os_getArtEui (u1_t* buf);
void os_getDevEui (u1_t* buf);
void os_getDevKey (u1_t* buf);
void forceTxSingleChannelDr();
void onEvent(ev_t event);
void ttn_register(void (*callback)(uint8_t message));
size_t ttn_response_len();
void ttn_response(uint8_t * buffer, size_t len);
bool ttn_setup();
void ttn_join();
void ttn_sf(unsigned char sf);
void ttn_adr(bool enabled);
void ttn_cnt(unsigned char num);
void ttn_send(uint8_t * data, uint8_t data_size, uint8_t port, bool confirmed);
void ttn_loop();
