#ifndef LIGHTCONTROLLER_H
#define LIGHTCONTROLLER_H
#include "BoardMap.h"
#include "Config.h" 
#include "arduino.h" 

class LightController {
public:
  void init();
  void alert();
  void dancing();
  
private:
    int ledI = BoardMap::ledI;
    int ledC = BoardMap::ledC;
    int ledD = BoardMap::ledD;

};
#endif
