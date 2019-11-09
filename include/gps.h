#pragma once

#include <Arduino.h>

void gps_time(char * buffer, uint8_t size);
float gps_latitude();
float gps_longitude();
float gps_altitude();
float gps_hdop();
uint8_t gps_sats();
void gps_setup();
void gps_loop();

#if defined(PAYLOAD_USE_FULL)
    void buildPacket(uint8_t txBuffer[10]);
#elif defined(PAYLOAD_USE_CAYENNE)
    void buildPacket(uint8_t txBuffer[11]);
#endif

extern uint32_t LatitudeBinary;
extern uint32_t LongitudeBinary;
extern uint16_t altitudeGps;
extern uint8_t hdopGps;
extern uint8_t sats;
extern char t[32];
