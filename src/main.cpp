#include <Arduino.h>

#define ANALOG_PIN A0

const int LOWER_BARRIER = 10;

const int VOL_UP = 850; // 148 ohm
const int VOL_DOWN = 1000; // 55 ohm

const int UP = 700; // 301.3 ohm
const int DOWN = 500; // 563 ohm

const int MODE = 250; // 1.041 k
const int MUTE = 10; // 2.040 k

void setup() {
  // put your setup code here, to run once:
}

void loop() {
  int value = analogRead(ANALOG_PIN);
  if(value>LOWER_BARRIER){

  }
  else if(){

  }
  else if(){

  }
  else if(){

  }
  else if(){
    
  }
}