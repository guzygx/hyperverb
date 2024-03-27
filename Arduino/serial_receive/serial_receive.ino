int incomingByte = 0;

void setup() {
  Serial.begin(9600); // Assurez-vous que cela correspond au baud rate de TouchDesigner
}

void loop() {
  if (Serial.available()) {
    incomingByte = Serial.read();
    Serial.println(incomingByte);
  }
}