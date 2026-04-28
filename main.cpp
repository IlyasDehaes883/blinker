#include <Arduino.h>
// put function declarations here:
// classdefinitie

#include "Blinker.h"


blinker led1 = blinker(14,800,100);
blinker led2 = blinker(5,800,50);
blinker led3 = blinker(26,500,60);
blinker led4 = blinker(18,400,100);
blinker led5 = blinker(19,300,50);



void setup() {
  // put your setup code here, to run once:
led1.begin();
led2.begin();
led3.begin();
led4.begin();
led5.begin();
Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
led1.handle();
led2.handle();
led3.handle();
led4.handle();
led5.handle();

}


