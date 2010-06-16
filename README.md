# arduino-libping

_A small library for controlling Parallax PING))) Ultrasonic Rangefinders_

__Version:__ 0.1

by Mike Green (mike.is.green[at]gmail[dot]com)

## Update

The library now successfully compiles in the Arduino IDE. Testing will follow.

## Summary

I started writing this library during a bit of a building spree that died off a while ago. I never actually got it working, and it's languished here for quite some time. But I've resolved to get it working.

This library represents my first attempt at writing reusable C++ code, so it's gonna be rough. But its domain is also pretty simple, since the PING))) has an onboard controller that handles all the gritty details of its operation. All this library needs to do is send signals to the attached PING))) and receive its calculations.

## Usage

Currently the library supports a single public method: `measure()`. This method returns the number of microseconds it took for the pulse of sound to bounce back to the PING))) as a `long` number. 

### Example

	#include "Ping.h"
	
	// Create a Ping instance, connected to digital pin 7
	Ping ping(7);

	void setup() {
	  Serial.begin(9600);
	}
	
	// Activate the PING))) once per second and print the measured time to serial console.
	void loop() {
	  long duration, inches, cm, mm;
	  duration = ping.measure();
	  Serial.print("Pulse took ");
	  Serial.print(duration);
	  Serial.println(" microseconds to return.");
	  delay(1000);
	}

## License

This library is released under the terms of the GNU Lesser General Public License. See [LICENSE](http://github.com/mikedamage/arduino-libping/blob/master/LICENSE) for details.

## Enjoy!

![Arduino and Parallax PING)))](http://mikegreen.s3.amazonaws.com/photos/arduino_ping.jpg)