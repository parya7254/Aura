#include "components.h"
#include "data.h"
#include <String.h> //this is the arduino one, not the cpp one


TFT_eButton led_on_off = TFT_eButton(&tft);
TFT_eButton changeColour = TFT_eButton(&tft);
TFT_eButton turnMusic = TFT_eButtone(&tft);
//ig another one here!

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

    uint16_t calibrationData[5] = {300, 3500, 200, 3500, 2};
    tft.setTouch(calData);

    tft.setTextColor(TFT_WHITE, TFT_BLACK);
    tft.setCursor(0, 0)
    tft.setTextSize(2);
}

void initialiseLEDs(){
    FastLED.addLeds<WS2812B, LED_IN, GRB>(leds, NO_OF_LEDS);
    FastLED.setBrightness(80);
    fill_solid(leds, NUM_LEDS, CRGB::Black);
    FastLED.show();
}

void initialiseAudio(){
    i2s_config_t i2s_config = {
        .mode = (i2s_mode_t)(I2S_MODE_MASTER | I2S_MODE_TX),
        .sample_rate = 44100,
        .bits_per_sample = I2S_BITS_PER_SAMPLE_16BIT,
        .channel_format = I2S_CHANNEL_FMT_RIGHT_LEFT,
        .communication_format = I2S_COMM_FORMAT_STAND_I2S,
        .intr_alloc_flags = ESP_INTR_FLAG_LEVEL1,
        .dma_buf_count = 8,
        .dma_buf_len = 64,
        .use_apll = false
    };

    i2s_pin_config_t pinconfig = {
        .bck_io_num = I2S_BCLK,
        .ws_io_num = I2S_LRCLK,
        .data_out_num = I2S_DIN,
        .data_in_num = I2S_PIN_NO_CHANGE
    };

    i2s_driver_install(I2S_NUM_0, &i2s_config, 0, NULL);
    i2s_set_pin(I2S_NUM_0, &pin_config);
}




void isPersonPresent(){
    return digitalRead(RADAR_OUT) == HIGH;
}

void updateSensors(){
    bme280_data.temperature = bme.readTemperature();
    bme280_data.humidity = bme.readHumidity();
    bme280_data.pressure = bme.readPressure();
}


void setLEDs(){
    fill_solid(leds, NO_OF_LEDS, CRGB(int green, int red, int blue));
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




bool screenTouched(uint16_t &x, uint16_t &y){
    return tft.getTouch(&x, &y);
}

void initialiseButtons(){
    //two top and two bottom
    led_on_off.initButton(&tft, 80, 60, 130, 45, TFT_WHITE, TFT_BLUE, TFT_WHITE, "ON/OFF", 2);
    changeColour.initButton(&tft, 240, 60, 130, 45, TFT_WHITE, TFT_DARKGREEN, TFT_WHITE, "Change Colour", 2);
    turnMusic.initButton(&tft, 80, 130, 130, 45, TFT_WHITE, TFT_NAVY, TFT_WHIT, "Music", 2);
    //one more button!


    led_on_off.drawButton();
    changeColour.drawButton();
    turnMusic.drawButton();

}


// String retTouchAction(){
//     uint16_t x = 0, y = 0;

//     if (tft.getTouch(&x, &y)){
//         delay(150);

//         if (y < 120){ //
//             return ""
//         }
//     }
// }