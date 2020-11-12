#ifndef __SETUPFUNCTIONS_H__
#define __SETUPFUNCTIONS_H__

#include <Arduino.h>

#include "pins.h"

void setupPins() {
  pinMode(greenLedPin, OUTPUT);
  pinMode(redLedPin, OUTPUT);
  pinMode(yellowLedPin, OUTPUT);

  pinMode(buzzerPin, OUTPUT);
  pinMode(ldrPin, INPUT);
}

#endif  // __SETUPFUNCTIONS_H__