/*
Copyright (c) 2017, Julien de la Bruère-Terreault, drgfreeman@tuta.io
This work is licensed under a Creative Commons Attribution-ShareAlike 4.0 International License.
http://creativecommons.org/licenses/by-sa/4.0//
*/

// Button pin
int btnPin = 2;

// LED pin
int ledPin = 3;

void setup() {
  // Initialize serial communication
  Serial.begin(9600);

  // Set button pin as input
  pinMode(btnPin, INPUT_PULLUP);

  // Set LED pin as output
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Read button state and assign to a variable
  bool btnState = !digitalRead(btnPin);

  // Print button state to serial monitor
  Serial.println(btnState);

  // Turn the LED on if the button is pressed
  if (btnState) {
    // Button is pressed, turn led on
    digitalWrite(ledPin, HIGH);
  }
  else {
    // Button is released, turn led off
    digitalWrite(ledPin, LOW);
  }
}
