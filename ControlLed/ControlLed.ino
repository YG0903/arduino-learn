int val = 1;
int old_val = 0;
int state = 0;
void setup() {
  pinMode(13, OUTPUT);
  pinMode(2, INPUT);
}

void loop() {
  val = digitalRead(2);
  if ((val == HIGH) && (old_val == LOW)) {
    state = 1 - state;
    delay(10);
  }
  old_val = val;
  if (state == 1) {
    digitalWrite(13, HIGH);
  } else {
    digitalWrite(13, LOW);
  }
}
