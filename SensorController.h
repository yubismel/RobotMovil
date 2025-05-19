#ifndef SENSORCONTROLLER_H
#define SENSORCONTROLLER_H
#include "Arduino.h"
#include <Servo.h>
#include "BoardMap.h"
#include "Config.h"
class SensorController{
public:
  void init();
  int getDistance();
  bool checkObstacle(int angle);
  bool I();
  bool C();
  bool D();
private:
  Servo myservo;
  const int trigPin = BoardMap::trigPin;
  const int echoPin = BoardMap::echoPin;
  //const byte sensitivity = 70;
  const byte sensitivity = OBSTACLE_THRESHOLD;
  const int servoPin = BoardMap::servoPin;
};
#endif
