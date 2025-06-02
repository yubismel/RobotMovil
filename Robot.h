#ifndef ROBOT_H
#define ROBOT_H

#include "MotorController.h"
#include "SensorController.h"
#include "BluetoothController.h"
#include "GpsController.h"
#include "LightController.h"
#include "SteperMotorController.h"
#include "SoundController.h"
#include "IrController.h"
#include "Config.h"

class Robot {
public:
  Robot(MotorController &motor, SensorController &sensor, BluetoothController &bluetooth, GpsController &gps, LightController &light, SteperMotorController &steperMotor, SoundController &sound, IrController &ir)
      : motorController(motor), sensorController(sensor), bluetoothController(bluetooth),gpsController(gps),lightController(light), steperMotorController (steperMotor), soundController (sound), irController (ir) {}

  void init();
  void run();

private:
  MotorController &motorController;
  SensorController &sensorController;
  BluetoothController &bluetoothController;
  GpsController &gpsController;
  LightController &lightController;
  SteperMotorController &steperMotorController;
  SoundController &soundController;
  IrController  &irController;

  void processCommand(String command);
  void automaticMode();
};

#endif
