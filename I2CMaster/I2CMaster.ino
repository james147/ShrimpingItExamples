/*
 * Blinks an led connected to pin 13 on and off every second
 * 
 * Suggestions:
 *  - Change the interval to speed up or slow down the led
 *  - Make the led to blink out a pattern
 */

#include <Wire.h>

int led = 13; // The pin the led is connected to
byte x = 0;

void setup() {
    Wire.begin(); // Start the I2C bus as a master device
    pinMode(led, OUTPUT); // Sets the led pin to be an output pin
    digitalWrite(led, LOW);
}

void loop() {
    Wire.beginTransmission(9); // transmit to device #9
    Wire.write(x);              // send x
    Wire.endTransmission();    // stop transmitting
    x++;
    if (x > 5) x = 0;  // reset x
    delay(5000);
}

/* Notes
 */
   
