#include <Arduino.h>
#include "Blinker.h"

blinker:: blinker(unsigned int ledpin ,unsigned long blinkinterval){
    _ledpin = ledpin;
_blinkinterval = blinkinterval;
_nu =millis();
_volgendeblinkom = _nu;
}
blinker:: ~blinker(){

}

int blinker:: begin(){
  pinMode(_ledpin, OUTPUT);
 return 0;



}

int blinker:: handle(){
  int retVal = false;
  _nu = millis();
  if (_nu > _volgendeblinkom) {
    _volgendeblinkom = _nu + _blinkinterval ;
    digitalWrite(_ledpin, !digitalRead(_ledpin)) ;
    retVal = true ;
  }
  return retVal;

}

