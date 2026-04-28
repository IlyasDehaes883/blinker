#ifndef BLINKER_H
    #define BLINKER_H
// classdefinitie

class blinker{
private: 
   unsigned long _startDelay;
  unsigned long _blinkinterval ;
unsigned long _volgendeblinkom ;
  unsigned long _ledpin ;
public:
blinker(unsigned int ledpin ,unsigned long blinkinterval , const long startDelay);
~blinker();
int begin(); 
int handle();

};
#endif
