#include <Arduino.h>
#include <EasyBuzzer.h>

#include "buzzerFrequencies.h"
#include "pins.h"
#include "setupFunctions.h"

void setup() {
  Serial.begin(115200);
  setupPins();
  setupBuzzer();
}

void loop() {}
