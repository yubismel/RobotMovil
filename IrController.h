#ifndef IRCONTROLLER_H
#define IRCONTROLLER_H

#include "Arduino.h"
#include "BoardMap.h"

class IrController {
public:
  void init();

private:
  int irPin = BoardMap::irPin;
};

#endif
