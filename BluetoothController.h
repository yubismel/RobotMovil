#ifndef BLUETOOTHCONTROLLER_H
#define BLUETOOTHCONTROLLER_H

#include <SoftwareSerial.h>
#include "BoardMap.h"

class BluetoothController {
public:
  void init();
  String getCommand();

private:
  SoftwareSerial BTserial = SoftwareSerial(BoardMap::bluetoothTX, BoardMap::bluetoothRX);
};

#endif
