#ifndef STEPERMOTORCONTROLLER_H
#define STEPERMOTORCONTROLLER_H

#include <Stepper.h>
#include "BoardMap.h"
#include "Config.h" 
#include "arduino.h" 

class SteperMotorController {
public:
  void init(); 
  void step(char d, int step);    
private:
    int stepperPinA1 = BoardMap::stepperPinA1;
	int stepperPinA2 = BoardMap::stepperPinA2;
	int stepperPinB1 = BoardMap::stepperPinB1;
	int stepperPinB2 = BoardMap::stepperPinB2;
	
	const int stepsPerRevolution = 2048;
	Stepper myStepper = Stepper(stepsPerRevolution, stepperPinA1, stepperPinB1, stepperPinA2, stepperPinB2);
	
   
};
#endif
