void ledStartup() {
  for (int i = 0; i<4; i++) {
    digitalWrite(LED2, HIGH);
    delay(250);
    digitalWrite(LED1, HIGH);
    digitalWrite(LED2, LOW);
    delay(250);
    digitalWrite(LED1, LOW);
    delay(500);
  }
  delay(50);
  for(int i = 0; i<3; i++) {
    digitalWrite(LED1, HIGH);
    digitalWrite(LED2, HIGH);
    delay(250);
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, LOW);
    delay(250);
  }
}

void blinkLED(int x) {
  if(x == 1) {
  digitalWrite(LED1, HIGH);
  delay(100);
  digitalWrite(LED1, LOW);
  delay(100);
  }

  else {
    digitalWrite(LED2, HIGH);
    delay(100);
    digitalWrite(LED2, LOW);
    delay(100);
  }
}

void blinkLEDs(int x) {

  for (int i = 0; i < x; i++) {
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, HIGH);
  delay(150);
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  delay(150);
  }
}
