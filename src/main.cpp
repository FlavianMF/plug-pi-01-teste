#include <Arduino.h>
#include <EasyBuzzer.h>

#include "buzzerFrequencies.h"
#include "pins.h"
#include "setupFunctions.h"
#include "setupSteps.h"

void setup() {
  Serial.begin(115200);
  setupPins();
  setupBuzzer();
  steps();
}

uint16_t rawLightLevel = 0;

void loop() {
  rawLightLevel = analogRead(ldrPin);

  // Serial.print(rawLightLevel);
  // Serial.print("\t");
  // Serial.print(map(rawLightLevel, 900, 1000, 0, 255));
  // Serial.print("\t");

  if (rawLightLevel <= 780) {
    Serial.println("green");
    analogWrite(greenLedPin, map(rawLightLevel, 700, 780, 0, 50));
    analogWrite(yellowLedPin, 0);
    analogWrite(redLedPin, 0);
  } else if (rawLightLevel >= 840) {
    Serial.println("red");
    analogWrite(redLedPin, map(rawLightLevel, 840, 900, 0, 255));
    analogWrite(greenLedPin, 50);
    analogWrite(yellowLedPin, 255);
  } else {
    Serial.println("yellow");
    analogWrite(yellowLedPin, map(rawLightLevel, 780, 840, 0, 255));
    analogWrite(greenLedPin, 50);
    analogWrite(redLedPin, 0);
  }
}
