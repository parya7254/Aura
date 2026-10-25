#include "components.h"
#include "data.h"

Adafruit_BME280 bme(BME_CS);
TFT_eSPI tft = TFT_eSPI();

BME280 bme280_data;
CRGB leds[NO_OF_LEDS];

bool initialiseSensors(){
    
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
    tft.setCursor(0, 0)
    tft.setTextSize(2);
}

void updateSensors(){
    bme280_data.temperature = bme.readTemperature();
    bme280_data.humidity = bme.readHumidity();
    bme280_data.pressure = bme.readPressure();
}


void isPersonPresent(){
    return digitalRead(RADAR_OUT) == HIGH;
}

void updateTFT(){
    tft.fillScreen(TFT_BLACK);
    tft.setCursor(0, 0);
    tft.setTextColor(TFT_WHITE, TFT_BLACK);


    tft.println("AURA LAMP TM!!");
    
    tft.println("Temperature: %.1f");
    tft.println("Pressure: %.1f");
    tft.println("Humidity: %.1f%%");

}

void initialiseLEDs(){
    FastLED.addLeds<WS2812B, LED_IN, GRB>(leds, NO_OF_LEDS);
    FastLED.setBrightness(80);
    fill_solid(leds, NUM_LEDS, CRGB::Black);
    FastLED.show();
}

void setLEDs(){
    fill_solid(leds, NO_OF_LEDS, CRGB(int green, int red, int blue));
}

void initialiseAudio();

