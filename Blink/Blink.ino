/*
 * Blinks an led connected to pin 13 on and off every second
 * 
 * Suggestions:
 *  - Change the interval to speed up or slow down the led
 *  - Make the led to blink out a pattern
 */

int led = 13; // The pin the led is connected to

void setup() {
    pinMode(led, OUTPUT); // Sets the led pin to be an output pin
}

void loop() {
    digitalWrite(led, HIGH); // Sets the led pin to high
    delay(1000); // Delays for 1 second
    digitalWrite(led, LOW); // Sets the led pin to low
    delay(1000); // Delays for 1 second
}

/* Notes
 * There are two ways you can connect the led:
 *  - atmega -> led -> resistor -> 0v => Setting the atmega pin HIGH causes the led to turn on
 *  - 5v -> resistor -> led -> atmega => Setting the atmega pin LOW cases the led to turn on
 * Both of these are fine, just note the inverse logic when using the second method.
 */
   
