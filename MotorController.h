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
  void moveLeft(byte speed);
  void moveRight(byte speed);
  void stopMove();
  void stopMoveDir(byte speed);
private:
//Usamos los pines definidos en BoardMap  
  int motorDirRight = BoardMap::motorDirRight;
  int motorDirLeft = BoardMap::motorDirLeft; 
  int motorDirEnable = BoardMap::motorDirEnable;
  
  int motorDriveBackward = BoardMap::motorDriveBackward;  
  int motorDriveForward = BoardMap::motorDriveForward;
  int motorDriveEnable = BoardMap::motorDriveEnable;
};
#endif
