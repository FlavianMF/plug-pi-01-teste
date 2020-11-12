#include <Arduino.h>
#include <EasyBuzzer.h>

#include "buzzerFrequencies.h"
#include "pins.h"
#include "setupFunctions.h"
#include "setupSteps.h"

void setup() {
  Serial.begin(115200);
  setupPins();
  steps();
}

uint16_t rawLightLevel = 0;

void loop() {
  rawLightLevel = analogRead(ldrPin);
  if (rawLightLevel <= 342) {
    analogWrite(greenLedPin, map(rawLightLevel, 0, 341, 0, 255));
    analogWrite(yellowLedPin, 0);
    analogWrite(redLedPin, 0);
  } else if (rawLightLevel > 684) {
    analogWrite(greenLedPin, 255);
    analogWrite(yellowLedPin, 255);
    analogWrite(redLedPin, map(rawLightLevel, 685, 1024, 0, 255));
  } else {
    analogWrite(greenLedPin, 255);
    analogWrite(yellowLedPin, map(rawLightLevel, 342, 684, 0, 255));
    analogWrite(redLedPin, 0);
  }
}
