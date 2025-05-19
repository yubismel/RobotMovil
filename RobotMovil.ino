
#include "MotorController.h"
#include "SensorController.h"
#include "BluetoothController.h"
#include "Robot.h"
#include "Config.h"


MotorController motorController;
SensorController sensorController;
BluetoothController bluetoothController;
Robot robot(motorController, sensorController, bluetoothController);

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
  robot.init();
}

void loop() {
  robot.run();
}
