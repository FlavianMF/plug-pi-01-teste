#ifndef __SETUPSTEPS_H__
#define __SETUPSTEPS_H__

#include <Arduino.h>

#include "buzzerFrequencies.h"
#include "pins.h"
#include "setupStepsDebug.h"

void firstStep() {
  uint64_t timer = 0;
  timer = millis();
  analogWrite(redLedPin, 255);
  tone(buzzerPin, redFrequency);
  while (millis() < timer + 500)
    ;
  analogWrite(redLedPin, 0);
  noTone(buzzerPin);
}

void secondStep() {
  uint64_t timer = 0;
  timer = millis();
  analogWrite(yellowLedPin, 255);
  tone(buzzerPin, yellowFrequency);
  while (millis() < timer + 500)
    ;
  analogWrite(yellowLedPin, 0);
  noTone(buzzerPin);
}

void thirdStep() {
  uint64_t timer = 0;
  timer = millis();
  analogWrite(greenLedPin, 255);
  tone(buzzerPin, greenFrequency);
  while (millis() < timer + 500)
    ;
  analogWrite(greenLedPin, 0);
  noTone(buzzerPin);
}

void steps() {
  firstStep();
  secondStep();
  thirdStep();
}

#endif  // __SETUPSTEPS_H__