/*                                                                                              |
 * University of Minnesota - Twin Cities                                                        |
 * AEM 4490 - Introduction to Aerospace Topics                                                  |
 * GLEAM Project - Central Unit Receiver: LED Functions                                          |
 * Author: Joe Poeppel - poepp027@umn.edu                                                       |
 * Date: 2/25/2021                                                                              |                                          
 ----------------------------------------------------------------------------------------------*/

void ledStartup() {
  for (int i = 0; i<4; i++) {
   delay(500);
   digitalWrite(LED1, HIGH);
   delay(250);
   digitalWrite(LED2, HIGH);
   digitalWrite(LED1, LOW);
   delay(250);
   digitalWrite(LED2, LOW);
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
  if (x == 1) {
  digitalWrite(LED1, HIGH);
  delay(100);
  digitalWrite(LED1, LOW);
  }

  else if (x == 2) {
  digitalWrite(LED2, HIGH);
  delay(100);
  digitalWrite(LED2, LOW);
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
