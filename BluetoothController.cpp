#include "BluetoothController.h"
#include "Config.h" 
void BluetoothController::init() {
   BTserial.begin(BLUETOOTH_BAUD_RATE);
}

String BluetoothController::getCommand() {
  BTserial.setTimeout(BLUETOOTH_READ_TIMEOUT);
  if (BTserial.available()) {
    return BTserial.readStringUntil('\n');
  }
  return "";
}
