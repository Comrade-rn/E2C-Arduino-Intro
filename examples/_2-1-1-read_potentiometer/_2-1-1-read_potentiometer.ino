/*
Copyright (c) 2017, Julien de la Bruère-Terreault, drgfreeman@tuta.io
This work is licensed under a Creative Commons Attribution-ShareAlike 4.0 International License.
http://creativecommons.org/licenses/by-sa/4.0//
*/

// Potentiometer pin
int potPin = A0;

void setup() {
  // Initialize serial communication
  Serial.begin(9600);
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
}
