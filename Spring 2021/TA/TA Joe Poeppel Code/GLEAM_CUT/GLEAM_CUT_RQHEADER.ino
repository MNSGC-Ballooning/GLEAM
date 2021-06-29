void requestHeader() {
  payload[0] = 'H';
  payloadR[0] = 'R';
  payloadR[1] = 'Q';

 // GROUP A
 if (GroupAActive == true) {
  xBee.send(txUnitA1);
  blinkLED(1);
  delay(timeBetweenRequests);
  xBee.send(txUnitA2);
  blinkLED(1);
  delay(timeBetweenRequests);
  xBee.send(txUnitA3);
  blinkLED(1);
  delay(timeBetweenRequests);
  xBee.send(txUnitA4);
  blinkLED(1);
  delay(timeBetweenRequests);
  xBee.send(txUnitA5);
  blinkLED(1);
  delay(timeAfterRequests);
 }
  

 // GROUP B
 if (GroupBActive == true) {
  xBee.send(txUnitB1);
  blinkLED(1);
  delay(timeBetweenRequests);
  xBee.send(txUnitB2);
  blinkLED(1);
  delay(timeBetweenRequests);
  xBee.send(txUnitB3);
  blinkLED(1);
  delay(timeBetweenRequests);
  xBee.send(txUnitB4);
  blinkLED(1);
  delay(timeBetweenRequests);
  xBee.send(txUnitB5);
  blinkLED(1);
  delay(timeAfterRequests);
 }

 // GROUP C
 if (GroupCActive == true) {
  xBee.send(txUnitC1);
  blinkLED(1);
  delay(timeBetweenRequests);
  xBee.send(txUnitC2);
  blinkLED(1);
  delay(timeBetweenRequests);
  xBee.send(txUnitC3);
  blinkLED(1);
  delay(timeBetweenRequests);
  xBee.send(txUnitC4);
  blinkLED(1);
  delay(timeBetweenRequests);
  xBee.send(txUnitC5);
  blinkLED(1);
  delay(timeAfterRequests);
 }

 // GROUP D
 if (GroupDActive == true) {
  xBee.send(txUnitD1);
  blinkLED(1);
  delay(timeBetweenRequests);
  xBee.send(txUnitD2);
  blinkLED(1);
  delay(timeBetweenRequests);
  xBee.send(txUnitD3);
  blinkLED(1);
  delay(timeBetweenRequests);
  xBee.send(txUnitD4);
  blinkLED(1);
  delay(timeBetweenRequests);
  xBee.send(txUnitD5);
  blinkLED(1);
  delay(timeAfterRequests);
 }

 // RECEIVER
  xBee.send(txReceiver);
  blinkLED(2);
  delay(timeAfterRequests);

}
