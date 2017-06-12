/*
Copyright (c) 2017, Julien de la Bruère-Terreault, drgfreeman@tuta.io
This work is licensed under a Creative Commons Attribution-ShareAlike 4.0 International License.
http://creativecommons.org/licenses/by-sa/4.0//
*/

// Potentiometer pin
int potPin = A0;

// LED pin
int ledPin = 3;

void setup() {
  // Initialize serial communication
  Serial.begin(9600);

  // Set the ledPin as an output
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Read potentiometer value and assign to a variable
  int potValue = analogRead(potPin);

  // Calcualte the voltage from the potentiometer value
  float potVolts = float(potValue) * 5. / 1023.;

  // Print potentiometer value to serial monitor
  Serial.print(potValue);
  Serial.print(", ");
  Serial.println(potVolts);

  // Map the potentiometer value (0-1023) to the led value (0-255)
  int ledValue = map(potValue, 0, 1023, 0, 255);

  // Control the LED brightness using Pulse Width Modulation
  analogWrite(ledPin, ledValue);
}
