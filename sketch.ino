int ldrPin = A0; // Photoresistor connected to A0
int ledPin = 9;  // LED connected to digital pin 9
int ldrValue = 0; // Variable to store LDR value

void setup() {
  pinMode(ldrPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  ldrValue = analogRead(ldrPin); // Read the light level
  Serial.print("Light level: ");
  Serial.println(ldrValue);

  if (ldrValue < 260) {
    digitalWrite(ledPin, HIGH); // If it's dark, turn on LED
  } else {
    digitalWrite(ledPin, LOW);  // If it's light, turn off LED
  }

  delay(1000); // Delay for 1 second before next reading
}
