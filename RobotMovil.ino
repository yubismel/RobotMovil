
#include "MotorController.h"
#include "SensorController.h"
#include "BluetoothController.h"
#include "GpsController.h"
#include "LightController.h"
#include "SoundController.h"
#include "IrController.h"
#include "Robot.h"
#include "Config.h"


MotorController motorController;
SensorController sensorController;
BluetoothController bluetoothController;
GpsController gpsController;
LightController lightController;
SteperMotorController steperMotorController;
SoundController soundController;
IrController irController;
Robot robot(motorController, sensorController, bluetoothController, gpsController, lightController, steperMotorController, soundController, irController);

void setup() {
  // #ifdef DEBUG_MODE
  //  Serial.begin(9600);
  //  while(!Serial); // Para placas con USB nativo
  //  Serial.println("Iniciando sistema...");
  //  #endif
  Serial.begin(9600);
  motorController.init();
  sensorController.init();
  bluetoothController.init();
  gpsController.init();
  lightController.init();
  steperMotorController.init();
  soundController.init();
  irController.init();
  robot.init();
  
}

void loop() {
  robot.run();
}
