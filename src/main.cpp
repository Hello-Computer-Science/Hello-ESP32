#include <Arduino.h>
#include <WiFi.h>
#include <HTTPClient.h>

void setup() {
    // put your setup code here, to run once:
    pinMode(32, OUTPUT);

    WiFi.begin("ssid", "passwd");
    while(WiFi.status() != WL_CONNECTED){
        delay(500);
        Serial.println(".");
    }
}

void loop() {
    // put your main code here, to run repeatedly:
    digitalWrite(32, HIGH);
    delay(1000);
    digitalWrite(32, LOW);
    delay(1000);
}