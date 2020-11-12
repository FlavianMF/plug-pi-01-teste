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

void loop() {}
