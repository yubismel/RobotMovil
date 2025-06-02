#include "BluetoothController.h"
#include "Config.h" 
#include "arduino.h" 

void BluetoothController::init() {
   BTserial.begin(BLUETOOTH_BAUD_RATE);
  Serial.println("BluetoothController::init");
   Serial.print("BLUETOOTH_BAUD_RATE: ");
    Serial.println(BLUETOOTH_BAUD_RATE);
}

String BluetoothController::getCommand() {
 // BTserial.setTimeout(BLUETOOTH_READ_TIMEOUT);
  if (BTserial.available()) {
    return BTserial.readStringUntil('\n');
  }
  return "";
}
String BluetoothController::getString() {
  Serial.println("__________________Funcion getString() ");
  String cadena ="";
  while (BTserial.available()) 
  {
    cadena=cadena + BTserial.read();
    Serial.print("________________BTserial available: ");
  }
  return cadena;
}
