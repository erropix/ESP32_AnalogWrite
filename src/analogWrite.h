#ifndef _ESP32_ANALOG_WRITE_
#define _ESP32_ANALOG_WRITE_

#include <Arduino.h>


typedef struct analog_write_channel
{
  int8_t pin;
  double frequency;
  uint8_t resolution;
} analog_write_channel_t;

#ifndef ANALOG_WRITE_ARRAY_H_
#define ANALOG_WRITE_ARRAY_H_
extern analog_write_channel_t _analog_write_channels[16];
#endif

int analogWriteChannel(uint8_t pin);

void analogWriteFrequency(double frequency);
void analogWriteFrequency(uint8_t pin, double frequency);

void analogWriteResolution(uint8_t resolution);
void analogWriteResolution(uint8_t pin, uint8_t resolution);

void analogWrite(uint8_t pin, uint32_t value, uint32_t valueMax = 255);

#endif
