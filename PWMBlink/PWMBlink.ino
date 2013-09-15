/*
 * Makes an LED slowly get brighter.
 * 
 * Suggestions:
 *  - Make the LED slowly dim as well
 */

int led = 11; // Must be a PWM pin (3, 5, 6, 9, 10 or 11)

void setup() {
    pinMode(led, OUTPUT); // Sets the led pin to be an output pin
}

void loop() {
    // Slowly increase the brightness
    for (unsigned char x = 0; x < 255; x++) {
        analogWrite(led, x);
        delay(10);
    }
}

/* Note
 * You cannot use pin 13 for this sketch, it requires a pwm capable pin such as; 3, 5, 6, 9, 10 or 11
 */
   
