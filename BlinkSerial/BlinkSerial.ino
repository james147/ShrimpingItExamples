/*
 * Blinks an led connected to pin 13 on and off every second
 * 
 * Suggestions:
 *  - Send a message indicating the leds state
 */

int led = 13; // The pin the led is connected to
int counter = 0;

void setup() {
    pinMode(led, OUTPUT); // Sets the led pin to be an output pin
    Serial.begin(9200); // Initialize the serial interface
}

void loop() {
    counter++;
    Serial.print("Hello world "); // Write a string to the serial interface
    Serial.println(counter); // Write a integer to the serial interface and end the line
    digitalWrite(led, counter % 2); // Toggle the led pin on every increase of counter
    delay(1000); // Delays for 1 second
}

/* Notes
 * Serial.print will send its argument converted to the text to the serial interface,
 * Serial.println will do the same, but also send a new line character
 * Serial.write will send raw binary data to the serial interface
 * 
 * See http://arduino.cc/en/reference/serial for more info on the serial interface
 */
   
