#ifndef SOUNDCONTROLLER_H
#define SOUNDCONTROLLER_H
#include "Arduino.h"
#include "BoardMap.h"
#include "Config.h"

class SoundController{
public:
  void init();
  void notify();   
private:
//Usamos los pines definidos en BoardMap  
  int soundPin = BoardMap::soundPin;
};
#endif
