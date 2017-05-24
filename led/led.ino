/*
 * Code written by Gabriel De Jesus / quillot.github.com
 * 5/24/2017 
 */
 
void setup() {
  // The code here will run once and setup the arduino
  int ledPin = 10;  // Initialize pin 10 so it can activate the led
}

void loop() {
  // The code here will run as long as arduino is on
  // The led will blink on and off every second
  pinMode(ledPin, HIGH);  // Output HIGH on pin 10 to activate the led
  delay(100);  // Wait a second before deactivating the led
  pinMode(ledPin, LOW);  // Output LOW on pin 10 to deactivate the led
  delay(100); // Wait a second before activating the led
}
