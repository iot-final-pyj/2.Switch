#include <Arduino.h>

int LED = 2;
int SW = 15;

void setup(){    
    Serial.begin(115200);
    delay(500);
    Serial.println("Starting");
    pinMode(LED, OUTPUT);
    pinMode(SW, INPUT_PULLUP);
}

void loop(){
    delay(100);
    if (digitalRead(SW) == LOW) {
        digitalWrite(LED, HIGH);
    } else {
        digitalWrite(LED, LOW);
    }
}
