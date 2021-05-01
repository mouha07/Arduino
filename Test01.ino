int ledRouge = 12;
void setup() {
  pinMode(ledRouge, OUTPUT);
}

void loop() {
  digitalWrite(ledRouge, HIGH);
  delay(500);
  digitalWrite(ledRouge, LOW);
  delay(500);

}
