#include "components.h"
#include "data.h"

Adafruit_BME280 bme(BME_CS);
TFT_eSPI tft = TFT_eSPI();

BME280 bme280_data;

bool initialise(){
    
    if(!bme.begin()){
        Serial.println("BME did not load!")
    }

    pinMode(RADAR_OUT, INPUT);

}

void initialiseTFT(){
    tft.init();
    tft.setRotation(1);
    tft.fillScreen(TFT_BLACK);

    pinMode(TFT_LED, OUTPUT);
    digitalWrite(TFT_LED, HIGH);

    tft.setTextColor(TFT_WHITE, TFT_BLACK);
    tft.setTextSize(2);
    tft.setCursor(0, 0)
    tft.setTextSize(2);
}

void updateSensors(){
    bme280_data.temperature = bme.readTemperature();
    bme280_data.humidity = bme.readHumidity();
    bme280_data.pressure = bme.readPressure();
}