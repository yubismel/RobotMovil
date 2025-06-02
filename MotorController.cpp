#include "MotorController.h"

void MotorController::init() {  
  pinMode(motorDirRight, OUTPUT);
  pinMode(motorDirLeft, OUTPUT);
  pinMode(motorDirEnable,OUTPUT);
  
  pinMode(motorDriveForward, OUTPUT);
  pinMode(motorDriveBackward, OUTPUT);  
  pinMode(motorDriveEnable, OUTPUT);
}

void MotorController::goOn(byte speed) {
  analogWrite(motorDriveEnable, speed);  
  
  digitalWrite(motorDriveBackward, LOW);
  digitalWrite(motorDriveForward, HIGH);
  
}

void MotorController::goBack(byte speed) {
  analogWrite(motorDriveEnable, speed);  
  
  digitalWrite(motorDriveForward, LOW);
  digitalWrite(motorDriveBackward, HIGH);
}

void MotorController::stopMove() {
  analogWrite(motorDriveEnable, 0);  
  
  digitalWrite(motorDriveForward, LOW);
  digitalWrite(motorDriveBackward, LOW);
}

void MotorController::moveLeft(byte speed) {
  analogWrite(motorDirEnable, speed);
  
  digitalWrite(motorDirRight, LOW);
  digitalWrite(motorDirLeft, HIGH);
}

void MotorController::moveRight(byte speed) {
  analogWrite(motorDirEnable, speed);  
  
  digitalWrite(motorDirLeft, LOW);
  digitalWrite(motorDirRight, HIGH);
}
void MotorController::stopMoveDir(byte speed) {
  analogWrite(motorDirEnable, 0);  
  
  digitalWrite(motorDirLeft, LOW);
  digitalWrite(motorDirRight, LOW);
}
