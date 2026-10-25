#pragma once

#include <Arduino.h>
#include <SPI.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_BME280.h>
#include <TFT_eSPI.h>
#include "config.h"

bool initiateSensors();
void updateSensors();

void initialiseTFT();