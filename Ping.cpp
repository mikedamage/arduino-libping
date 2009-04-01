/*
 Ping.h - Parallax PING))) Library
 Copyright (C) 2009 Mike Green
 
 This library is free software; you can redistribute it and/or
 modify it under the terms of the GNU Lesser General Public
 License as published by the Free Software Foundation; either
 version 2.1 of the License, or (at your option) any later version.

 This library is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 Lesser General Public License for more details.

 You should have received a copy of the GNU Lesser General Public
 License along with this library; if not, write to the Free Software
 Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#include "WProgram.h"
#include "Ping.h"

// Public Functions:
Ping::Ping(int pin)
{
	_pin = pin;
}

Ping::measure() {
	long duration;
	sendInitPulse();
	duration = pulseIn(_pin, HIGH);
	return duration;
}

// Private Functions:
Ping::sendInitPulse() {
	pinMode(_pin, OUTPUT);
	digitalWrite(_pin, LOW);
	delayMicroseconds(2);
	digitalWrite(_pin, HIGH);
	delayMicroseconds(5);
	digitalWrite(_pin, LOW);
	pinMode(_pin, INPUT);
}