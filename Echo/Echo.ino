/*
 * Echos messages after converting them to upper case;
 * 
 * Suggestions:
 *  - Blink the led on different messages
 */

const int led = 13; // The pin the led is connected to
const int length = 256; // The length of the buffer
char buffer[length]; // Character buffer (holds 256 characters)

void setup() {
    pinMode(led, OUTPUT); // Sets the led pin to be an output pin
    Serial.begin(9600); // Initialize the serial interface
}

void loop() {
    if (Serial.available()) {
        for(int i = 0; i < length; i++) {
            buffer[i] = 0;
        }
        Serial.readBytesUntil('\r', buffer, length); // Read bytes into buffer until a \r is found or a timeout occures
        String message = String(buffer); // Convert the buffer to an instance of a String
        message.toUpperCase(); // Convert the message to upper case
        Serial.println(message); // Print the contents of the buffer
    }
}

