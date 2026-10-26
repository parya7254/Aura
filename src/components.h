#pragma once

#include <Arduino.h>
#include <SPI.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_BME280.h>
#include <TFT_eSPI.h>
#include <FastLED.h>
#include <driver/i2s.h>

#include "config.h"
#include "data.h"

bool initialiseSensors();
void updateSensors();

void initialiseTFT();
void updateTFT();

void isPersonPresent();
void setLEDs();

bool screenTouched(uint16_t &x, uint16_t &y);

NO_OF_LEDS = #idk