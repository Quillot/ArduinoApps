/*
 * Code written by Gabriel De Jesus / quillot.github.com
 * 5/24/2017 
 * Makes an LED blink on and off every second
 */
int ledPin = 10;

void setup() {
  // The code here will run once and setup the arduino
  pinMode(ledPin, OUTPUT);  // Initialize pin 10 so it can output power
}

void loop() {
  // The code here will run as long as arduino is on
  digitalWrite(ledPin, HIGH);  // Output HIGH on pin 10 to activate the led
  delay(1000);  // Wait a second before deactivating the led
  digitalWrite(ledPin, LOW);  // Output LOW on pin 10 to deactivate the led
  delay(1000); // Wait a second before activating the led
}
