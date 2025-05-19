#include "SensorController.h"
void SensorController::init(){
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  myservo.attach(28);
}

int SensorController::getDistance(){
  digitalWrite(trigPin, LOW);
  delayMicroseconds(5);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  long time = pulseIn(echoPin, HIGH);
  return int(0.017 * time);
}

bool SensorController::checkObstacle(int angle){
  myservo.write(angle);
  delay(SERVO_STABILIZE_TIME);
  return (getDistance() < sensitivity);
}

bool SensorController::I(){
  return checkObstacle(120);
}

bool SensorController::C(){
  return checkObstacle(75);
}

bool SensorController::D(){
  return checkObstacle(30);
}
