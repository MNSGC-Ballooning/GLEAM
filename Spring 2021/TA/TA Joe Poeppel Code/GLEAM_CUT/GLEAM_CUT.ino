/* DO NOT DELETE - PLEASE CONTACT JOE POEPPEL WITH ANY QUESTIONS                                |                                                                                     s  |
 * University of Minnesota - Twin Cities                                                        |
 * AEM 4490 - Introduction to Aerospace Topics                                                  |
 * GLEAM Project - Central Unit Transmitter                                                     |
 * Author: Joe Poeppel - poepp027@umn.edu                                                       |
 * Date: 5/7/2021                                                                              |
 *                                                                                              | 
 * XBee Series 3 Mesh Network: Central Unit Transmitter for GLEAM Project                       |
 * This software is to be placed on the ground unit transmitter that is to send a request       |
 * to the various measurement devices and a request to the ground unit receiver to parse the    |
 * data onace all measurement devices have been signalled to send data. Designed for a          |
 * Teensy 3.5 and Teensyduino.                                                                  |
 ----------------------------------------------------------------------------------------------*/

#include <XBeeAPI.h> // This must be the "xbee-arduino-master" library; May need to contact Joe Poeppel to get this library as it has been altered from what can be downloaded online.

XBee xBee = XBee(); // Creating xBee object
uint8_t payload[] = {0};// Allocating memory
uint8_t payloadR[] = {0,0};


// GROUP A
//Object      Unit#    Mac Addres: (1st 8 bytes, 2nd 8 bytes)
XBeeAddress64 UnitA1 = XBeeAddress64(0x0013A200, 0x41C153D8); // Karalus, Calvin
XBeeAddress64 UnitA2 = XBeeAddress64(0x0013A200, 0x41C16D02); // Meyer, Shawn
XBeeAddress64 UnitA3 = XBeeAddress64(0x0013A200, 0x41C18A50); // Nihart, Joe, 41C185C8 
XBeeAddress64 UnitA4 = XBeeAddress64(0x0013A200, 0x41C15400); // Toriseva, Ben
XBeeAddress64 UnitA5 = XBeeAddress64(0x0013A200, 0x41C185C8); // Professor Flaten

//Object    txUnit#              (Unit#, Payload[], Payload Size)
ZBTxRequest txUnitA1 = ZBTxRequest(UnitA1, payload, sizeof(payload));
ZBTxRequest txUnitA2 = ZBTxRequest(UnitA2, payload, sizeof(payload));
ZBTxRequest txUnitA3 = ZBTxRequest(UnitA3, payload, sizeof(payload));
ZBTxRequest txUnitA4 = ZBTxRequest(UnitA4, payload, sizeof(payload));
ZBTxRequest txUnitA5 = ZBTxRequest(UnitA5, payload, sizeof(payload));



// GROUP B
//Object      Unit#    Mac Addres: (1st 8 bytes, 2nd 8 bytes)
XBeeAddress64 UnitB1 = XBeeAddress64(0x0013A200, 0x41C153E6); // Bauers, Macy
XBeeAddress64 UnitB2 = XBeeAddress64(0x0013A200, 0x41C16D1C); // Elliot, Greta
XBeeAddress64 UnitB3 = XBeeAddress64(0x0013A200, 0x41C16D04); // Saner, Garvin
XBeeAddress64 UnitB4 = XBeeAddress64(0x0013A200, 0x41C153DF); // Stevens, Ben
XBeeAddress64 UnitB5 = XBeeAddress64(0x0013A200, 0x41B786DA); // Joe Poeppel

//Object    txUnit#              (Unit#, Payload[], Payload Size)
ZBTxRequest txUnitB1 = ZBTxRequest(UnitB1, payload, sizeof(payload));
ZBTxRequest txUnitB2 = ZBTxRequest(UnitB2, payload, sizeof(payload));
ZBTxRequest txUnitB3 = ZBTxRequest(UnitB3, payload, sizeof(payload));
ZBTxRequest txUnitB4 = ZBTxRequest(UnitB4, payload, sizeof(payload));
ZBTxRequest txUnitB5 = ZBTxRequest(UnitB5, payload, sizeof(payload));



// GROUP C
//Object      Unit#    Mac Addres: (1st 8 bytes, 2nd 8 bytes)
XBeeAddress64 UnitC1 = XBeeAddress64(0x0013A200, 0x41C1539B); // Grau-Firkus, Cooper
XBeeAddress64 UnitC2 = XBeeAddress64(0x0013A200, 0x41C18524); // Hartford, Peter
XBeeAddress64 UnitC3 = XBeeAddress64(0x0013A200, 0x41C16D0C); // Lanauze-Baez, Alfonso
XBeeAddress64 UnitC4 = XBeeAddress64(0x0013A200, 0x41C185AE); // Mattson, Tyler
XBeeAddress64 UnitC5 = XBeeAddress64(0x0013A200, 0x41C153B5); // Sorge, Ben  

//Object    txUnit#              (Unit#, Payload[], Payload Size)
ZBTxRequest txUnitC1 = ZBTxRequest(UnitC1, payload, sizeof(payload));
ZBTxRequest txUnitC2 = ZBTxRequest(UnitC2, payload, sizeof(payload));
ZBTxRequest txUnitC3 = ZBTxRequest(UnitC3, payload, sizeof(payload));
ZBTxRequest txUnitC4 = ZBTxRequest(UnitC4, payload, sizeof(payload));
ZBTxRequest txUnitC5 = ZBTxRequest(UnitC5, payload, sizeof(payload));



// GROUP D
//Object      Unit#    Mac Addres: (1st 8 bytes, 2nd 8 bytes)
XBeeAddress64 UnitD1 = XBeeAddress64(0x0013A200, 0x41C18A03); // Anderson, Logan
XBeeAddress64 UnitD2 = XBeeAddress64(0x0013A200, 0x41C189F8); // Das, Roudh
XBeeAddress64 UnitD3 = XBeeAddress64(0x0013A200, 0x41C18A31); // Habegger Mc Cabe, Erne
XBeeAddress64 UnitD4 = XBeeAddress64(0x0013A200, 0x41C189DA); // Ray, Ben
XBeeAddress64 UnitD5 = XBeeAddress64(0x0013A200, 0x41C1515D); // Vanhatten, Isabelle

//Object    txUnit#              (Unit#, Payload[], Payload Size)
ZBTxRequest txUnitD1 = ZBTxRequest(UnitD1, payload, sizeof(payload));
ZBTxRequest txUnitD2 = ZBTxRequest(UnitD2, payload, sizeof(payload));
ZBTxRequest txUnitD3 = ZBTxRequest(UnitD3, payload, sizeof(payload));
ZBTxRequest txUnitD4 = ZBTxRequest(UnitD4, payload, sizeof(payload));
ZBTxRequest txUnitD5 = ZBTxRequest(UnitD5, payload, sizeof(payload));



// RECEIVER
XBeeAddress64 Receiver = XBeeAddress64(0x0013A200, 0x41B7B2A9); 
ZBTxRequest txReceiver = ZBTxRequest(Receiver, payloadR, sizeof(payloadR));

int LED1 = 24;
int LED2 = 25;

int timeBetweenRequests = 2000; // Time between data requests (in milliseconds)
int timeAfterRequests = 2500;   // Time between Reciever request and next Unit 1 request (in milliseconds)

bool GroupAActive = true; 
bool GroupBActive = true; 
bool GroupCActive = true; 
bool GroupDActive = true;  

int ResendHeaderPin = 0;

void requestHeader();
void requestData();
void ledStartup();
void blinkLED(int x);
void blinkLEDs(int x);

void setup() {

  Serial5.begin(115200);
  xBee.setSerial(Serial5);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(ResendHeaderPin, INPUT_PULLUP);
  ledStartup();

  // Startup Delay (need to wait for CUR to boot up)
  digitalWrite(LED1, HIGH);
  delay(10000);
  digitalWrite(LED1, LOW);
  requestHeader();
  
}

void loop() {

 if(digitalRead(ResendHeaderPin) == LOW) { blinkLEDs(3); requestHeader(); }
 requestData();
 Serial.println("Request Sent");
 
}
