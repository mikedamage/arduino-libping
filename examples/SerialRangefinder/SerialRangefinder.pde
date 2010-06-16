/**
 * arduino-libping
 * Serial Measurement Example
 *
 * by Mike Green (mike.is.green@gmail.com)
 *
 * = Summary
 * Uses the arduino-libping library to poll a Parallax PING)))
 * connected to pin 7. It makes a measurement, then echoes the
 * result to the Serial connection (9600 baud). You can use the
 * integrated Serial Terminal in the Arduino IDE to view the
 * measurements.
 *
 * = License
 * Copyright (C) 2009 Mike Green
 * Released under the terms of the GNU LGPL. See LICENSE for details.
 */

#include "Ping.h"

Ping ping(7);

void setup() {
  Serial.begin(9600);
}

void loop() {
  long duration, inches, cm, mm;
}
 
