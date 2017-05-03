/*
Copyright (c) 2017, Julien de la Bruère-Terreault, drgfreeman@tuta.io
This work is licensed under a Creative Commons Attribution-ShareAlike 4.0 International License.
http://creativecommons.org/licenses/by-sa/4.0//
*/

// Button pin
int btnPin = 2;

// LED pin
int ledPin = 3;

// LED state variable
bool ledState = 0;

// Button previous state variable
bool prevBtnState = 0;

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

  if (btnState && !prevBtnState) {
    toggleLED();
    delay(50);
  }

  // Note the button state for the next pass
  prevBtnState = btnState;
}

void toggleLED() {
  // Check current LED state and change accordingly
  if (ledState) {
    // The LED is currently on, turn it off
    digitalWrite(ledPin, LOW);
    // Note the new LED state
    ledState = 0;
  }
  else {
    // The LED is currently off, turn it on
    digitalWrite(ledPin, HIGH);
    // Note the new LED state
    ledState = 1;
  }
}
