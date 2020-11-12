#ifndef __SETUPSTEPSDEBUG_H__
#define __SETUPSTEPSDEBUG_H__

#include <Arduino.h>

void firstStepDebug() { Serial.println("First Step:\rFirst Tone\rRed Led"); }

void secondStepDebug() {
  Serial.println("Second Step:\rSecond Tone\rYellow Led");
}

void thirdStepDebug() { Serial.println("Third Step:\rThird Tone\rGreen Led"); }

#endif  // __SETUPSTEPSDEBUG_H__