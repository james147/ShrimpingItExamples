/*
 * Blinks an led connected to pin 13 on and off every second
 * 
 * Suggestions:
 *  - Change the interval to speed up or slow down the led
 *  - Make the led to blink out a pattern
 */

#include <Wire.h>

int led = 13; // The pin the led is connected to
int counter = 0;

void setup() {
    Wire.begin(9);        // Starts the I2C bus as a slave with address 9
    Wire.onReceive(receiveEvent);
    pinMode(led, OUTPUT); // Sets the led pin to be an output pin
    digitalWrite(led, LOW);
}

void loop() {
    if (counter == 0) return;

    digitalWrite(led, HIGH);
    delay(200);
    digitalWrite(led, LOW);
    delay(200);

    counter--;
}

void receiveEvent(int numBytes) {
    counter += Wire.read();
}

/* Notes
 * There are two ways you can connect the led:
 *  - atmega -> led -> resistor -> 0v => Setting the atmega pin HIGH causes the led to turn on
 *  - 5v -> resistor -> led -> atmega => Setting the atmega pin LOW cases the led to turn on
 * Both of these are fine, just note the inverse logic when using the second method.
 */
   
