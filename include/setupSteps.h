#ifndef __SETUPSTEPS_H__
#define __SETUPSTEPS_H__

#include <Arduino.h>
#include <EasyBuzzer.h>

#include "buzzerFrequencies.h"
#include "pins.h"
#include "setupStepsDebug.h"

void firstStep() {
  uint64_t timer = 0;
  timer = millis();
  digitalWrite(redLedPin, true);
  EasyBuzzer.singleBeep(redFrequency, 200, firstStepDebug);
  while (millis() < timer + 500)
    ;
  digitalWrite(redLedPin, false);
}

void secondStep() {
  uint64_t timer = 0;
  timer = millis();
  digitalWrite(yellowLedPin, true);
  EasyBuzzer.singleBeep(yellowFrequency, 200, secondStepDebug);
  while (millis() < timer + 500)
    ;
  digitalWrite(redLedPin, false);
}

void thirdStep() {
  uint64_t timer = 0;
  timer = millis();
  digitalWrite(greenLedPin, true);
  EasyBuzzer.singleBeep(greenFrequency, 200, thirdStepDebug);
  while (millis() < timer + 500)
    ;
  digitalWrite(redLedPin, false);
}

void steps() {
  firstStep();
  secondStep();
  thirdStep();
}

#endif  // __SETUPSTEPS_H__