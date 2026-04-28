#include <Arduino.h>
#include "Blinker.h"

blinker:: blinker(unsigned int ledpin ,unsigned long blinkinterval , const long startDelay){
    _ledpin = ledpin;
_blinkinterval = blinkinterval;
    
_startDelay = startDelay;
}
blinker:: ~blinker(){

}

int blinker:: begin(){
  pinMode(_ledpin, OUTPUT);
    
_volgendeblinkom =  millis() + _startDelay;



}

int blinker:: handle(){
  int retVal = false;
  unsigned long _nu = millis();
  if (_nu > _volgendeblinkom) {
    _volgendeblinkom = _nu + _blinkinterval ;
    digitalWrite(_ledpin, !digitalRead(_ledpin)) ;
    retVal = true ;
  }
  return retVal;

}


