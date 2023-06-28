/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "/Users/ramikhosho/RamiLab5/RamiLab5/src/RamiLab5.ino"
void setup();
void loop();
#line 1 "/Users/ramikhosho/RamiLab5/RamiLab5/src/RamiLab5.ino"
SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);

int cMax = 2500;
int cMin = 0;

void setup() {

  pinMode(D6, OUTPUT);
  pinMode(A5, INPUT);

}

void loop() {

  int reading = analogRead(A5);
  int Maxx = max(cMax, reading);
  int Minn = min(cMin, reading);
  int brightness = map(reading, Minn, Maxx, 0, 150);
  analogWrite(D6, brightness);

}