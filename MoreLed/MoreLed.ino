void setup() {
  for (int i=2; i<=4; i++) {
    pinMode(i, OUTPUT);
  }
}

void loop() {
  for (int x=2; x<=4; x++) {
    digitalWrite(x, HIGH);
    delay(500);
    digitalWrite(x, LOW);
    delay(500);
  }
  for (int x=4; x>=2; x--) {
    digitalWrite(x, HIGH);
    delay(100);
    digitalWrite(x, LOW);
    delay(100);
  }
}
