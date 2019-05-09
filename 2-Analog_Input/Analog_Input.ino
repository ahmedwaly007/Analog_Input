void setup() {
  Serial.begin(9600);     // start the serial comunication with baud rate 9600 per second
}

void loop() {
  Serial.print("ADC Value= ");
  Serial.println(analogRead(A0));
  delay(500);
}
