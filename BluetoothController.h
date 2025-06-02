#ifndef BLUETOOTHCONTROLLER_H
#define BLUETOOTHCONTROLLER_H

#include <SoftwareSerial.h>
#include "BoardMap.h"

class BluetoothController {
public:
  void init();
  String getCommand();
  String getString();

private:
  SoftwareSerial BTserial = SoftwareSerial(BoardMap::bluetoothRX, BoardMap::bluetoothTX);
};

#endif
