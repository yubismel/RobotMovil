#include "MotorController.h"

void MotorController::init() {
  pinMode(motorRightReverse,OUTPUT);
  pinMode(motorRightOn, OUTPUT);
  pinMode(motorLeftReverse, OUTPUT);
  pinMode(motorLeftOn, OUTPUT);
  pinMode(chipEnableRight, OUTPUT);
  pinMode(chipEnableLeft, OUTPUT);
}

void MotorController::goOn(byte speed) {
  digitalWrite(chipEnableRight, HIGH);
  analogWrite(motorRightOn, speed);
  digitalWrite(motorRightReverse, LOW);

  digitalWrite(chipEnableLeft, HIGH);
  analogWrite(motorLeftOn, speed);
  digitalWrite(motorLeftReverse, LOW);
}

void MotorController::goBack(byte speed) {
  digitalWrite(chipEnableRight, HIGH);
  digitalWrite(motorRightOn, LOW);
  analogWrite(motorRightReverse, speed);

  digitalWrite(chipEnableLeft, HIGH);
  digitalWrite(motorLeftOn, LOW);
  analogWrite(motorLeftReverse, speed);
}

void MotorController::stopMove() {
  digitalWrite(chipEnableRight, LOW);
  digitalWrite(motorRightOn, LOW);
  digitalWrite(motorRightReverse, LOW);

  digitalWrite(chipEnableLeft, LOW);
  digitalWrite(motorLeftOn, LOW);
  digitalWrite(motorLeftReverse, LOW);
}

void MotorController::moveLeft(byte speed) {
  digitalWrite(chipEnableRight, HIGH);
  analogWrite(motorRightOn, speed);
  digitalWrite(motorRightReverse, LOW);

  digitalWrite(chipEnableLeft, HIGH);
  digitalWrite(motorLeftOn, LOW);
  analogWrite(motorLeftReverse, speed);
}

void MotorController::moveRight(byte speed) {
  digitalWrite(chipEnableRight, HIGH);
  digitalWrite(motorRightOn, LOW);
  analogWrite(motorRightReverse, speed);

  digitalWrite(chipEnableLeft, HIGH);
  analogWrite(motorLeftOn, speed);
  digitalWrite(motorLeftReverse, LOW);
}
