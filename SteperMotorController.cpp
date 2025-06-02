#include "SteperMotorController.h"
void SteperMotorController::init() {
  pinMode(stepperPinA1, OUTPUT);
  pinMode(stepperPinA2, OUTPUT);
  pinMode(stepperPinB1, OUTPUT);
  pinMode(stepperPinB2, OUTPUT);    			
	 
}
void SteperMotorController::step(char d, int step){
	if(d == 'l'){
		  myStepper.setSpeed(15);
		  myStepper.step(step);
		  delay(1000);
	}
	if(d == 'r'){
		  myStepper.setSpeed(15);
		  myStepper.step(-step);
		  delay(1000);
	}	
	digitalWrite(stepperPinA1, LOW);
	digitalWrite(stepperPinA2, LOW);
	digitalWrite(stepperPinB1, LOW);
	digitalWrite(stepperPinB2, LOW);
};   
