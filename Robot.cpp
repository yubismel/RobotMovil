#include "Robot.h"

void Robot::init() {
 
    steperMotorController.step('l', 500);	
    steperMotorController.step('r', 1000);
    steperMotorController.step('l', 500);
	
	 motorController.goOn(80);
	  delay(1000);  
	 motorController.goBack(80);
	  delay(1000);  
	 motorController.stopMove();
	 delay(500);	 
	 motorController.moveLeft(100);
	  delay(1000);  
	 motorController.moveRight(100);
	  delay(2000);	  
	   motorController.moveLeft(100);
	  delay(1000);  
	 motorController.stopMoveDir();
	 
	 
	
	lightController.dancing(); 
	soundController.notify();
	Serial.println("Robot iniciado");
}

void Robot::run() {
 String command = bluetoothController.getString();
 Serial.println("Test bluetooth....... ");
 Serial.print("Receptor: ");
 Serial.println(BoardMap::bluetoothRX);
 Serial.print("Transmisor: ");
 Serial.println(BoardMap::bluetoothTX);
 Serial.print("BLUETOOTH_BAUD_RATE: ");
 Serial.println(BLUETOOTH_BAUD_RATE);
 Serial.print("Comando llegado por bluetooth: ");
 Serial.println(command);

 Serial.print("Mostrando datos del GPS: ");
 String test = gpsController.getPosition();
 test = gpsController.getPosition();
  Serial.println(test);
  if (command !="" ) {
    processCommand(command);
  } else {
  //  automaticMode();
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
