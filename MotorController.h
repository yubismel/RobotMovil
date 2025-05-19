#ifndef MOTORCONTROLLER_H
#define MOTORCONTROLLER_H
#include "Arduino.h"
#include "BoardMap.h"
#include "Config.h"

class MotorController{
public:
  void init();
  void goOn(byte speed = DEFAULT_SPEED); 
  void goBack(byte speed);
  void stopMove();
  void moveLeft(byte speed);
  void moveRight(byte speed);
private:
//Usamos los pines definidos en BoardMap
  int motorRightReverse = BoardMap::motorRightReverse;
  int motorRightOn = BoardMap::motorRightOn;
  int motorLeftReverse = BoardMap::motorLeftReverse;
  int motorLeftOn = BoardMap::motorLeftOn;
  int chipEnableRight = BoardMap::chipEnableRight;
  int chipEnableLeft = BoardMap::chipEnableLeft;
};
#endif
