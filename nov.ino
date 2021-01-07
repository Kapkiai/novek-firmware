/*

*/
#include <SoftwareSerial.h>
//#SoftwareSerial mySerial(4,5);
void setup() {
 //   mySerial.begin(9600);
    Serial.begin(9600);
    
}

void loop() {
 Serial.print(0x5, BIN);
 delay(1);
 Serial.print(0x9, BIN);
 delay(1);
 Serial.print(0x11, BIN);
 delay(3);
 Serial.print(0x4,BIN);
 delay(1);
 Serial.print(0x8, BIN);
 delay(1);
 Serial.print(0xA, BIN);
 delay(2);
 
}
