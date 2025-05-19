#include "Robot.h"

void Robot::init() {
  Serial.println("Robot iniciado");
}

void Robot::run() {
  String command = bluetoothController.getCommand();
  if (command !="" ) {
    processCommand(command);
  } else {
    automaticMode();
  }
}

void Robot::processCommand(String command) {
  if (command == "w") motorController.goOn(100);
  else if (command == "z") motorController.goBack(100);
  else if (command == "s") motorController.stopMove();
  else if (command == "a") motorController.moveLeft(100);
  else if (command == "d") motorController.moveRight(100);
}

void Robot::automaticMode() {
//  if (millis() - lastSensorCheck < SENSOR_READ_INTERVAL) return;
  if (!sensorController.I() && !sensorController.C() && !sensorController.D()) {
    motorController.goOn(100);
  } else if (sensorController.I()) {
    motorController.moveRight(100);
  } else if (sensorController.D()) {
    motorController.moveLeft(100);
  } else {
    motorController.goBack(100);
  }
}
