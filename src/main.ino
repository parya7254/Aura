#include "config.h"
#include "components.h"
#include "data.h"

void setup(){
    Serial.begin(115200);
    delay(500);
    Serial.println("\nAURA LAMP!!")

    initialiseSensors();
    initialiseTFT();
    initialiseLEDs();

    setLEDs(60, 70, 80); //idk what colour this is lol
    Serial.println("Initialisation done!")
}


void loop(){
    if (screenTouched(touchX, touchY))
        Serial.printf("")
    if (isPersonPresent()){

        digitalWrite(TFT_LED, HIGH);
        setLEDs(60, 70, 80);//bright colour

        updateSensors();
        updateTFT();
    }
    else {
        digitalWrite(TFT_LED, LOW);
        setLEDs(70, 60, 70);//a dull colour

        delay(500);
    }
}