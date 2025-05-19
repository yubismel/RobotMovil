#ifndef ROBOT_H
#define ROBOT_H


#include "MotorController.h"
#include "SensorController.h"
#include "BluetoothController.h"
#include "Config.h"

class Robot {
public:
  Robot(MotorController &motor, SensorController &sensor, BluetoothController &bluetooth)
      : motorController(motor), sensorController(sensor), bluetoothController(bluetooth) {}

  void init();
  void run();

private:
  MotorController &motorController;
  SensorController &sensorController;
  BluetoothController &bluetoothController;

  void processCommand(String command);
  void automaticMode();
};

#endif
