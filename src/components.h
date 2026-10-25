#pragma once

#include <Arduino.h>
#include <SPI.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_BME280.h>
#include <TFT_eSPI.h>
#include <FastLED.h>
#include "config.h"

bool initialiseSensors();
void updateSensors();

void initialiseTFT();
void updateTFT();

void isPersonPresent();
void setLEDs();

NO_OF_LEDS = #idk