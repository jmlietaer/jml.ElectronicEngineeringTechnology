/*
Source code   :   Dcf77.h
Author        :   J.M. Lietaer, Belgium, Europe - dcf77 (at) lietaer (dot) be 
Date written  :	   March 06, 2010 
Library       :   DCF77
                  Read data from a DCF77 module and display date/time 
 */

#ifndef Dcf77_h
#define Dcf77_h

#include “Arduino.h”

class Dcf77 {
public:
  Dcf77(int pin);
  int signal();
  const char* version();
  const char* getDateTime();
  const char* decodeDateTime();

private:
  int _pin;
}; 

#endif


