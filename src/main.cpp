#include <Arduino.h>

#include "buzzerFrequencies.h"
#include "pins.h"
#include "setupFunctions.h"

void setup() {
  Serial.begin(115200);
  setupPins();
}

void loop() {}
