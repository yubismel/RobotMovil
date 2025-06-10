#include "BoardMap.h"
#include "Arduino.h"


// For Arduino UNO/Mega
#if defined(ARDUINO_AVR_MEGA2560)
// Motors
const int BoardMap::motorDirLeft = 22;
const int BoardMap::motorDirRight = 23;
const int BoardMap::motorDirEnable = 2;

const int BoardMap::motorDriveBackward = 24;
const int BoardMap::motorDriveForward = 25;
const int BoardMap::motorDriveEnable = 3;

//Stepers Motors
const int BoardMap::stepperPinA1 = 26;
const int BoardMap::stepperPinA2 = 27;
const int BoardMap::stepperPinB1 = 28;
const int BoardMap::stepperPinB2 = 29;

//Ultrasonido
const int BoardMap::trigPin = 30;
const int BoardMap::echoPin = 31;
const int BoardMap::servoPin = 32;

//bluetooth
const int BoardMap::bluetoothTX = 16;
const int BoardMap::bluetoothRX = 17;

//GPS
const int BoardMap::gpsTX = 18;
const int BoardMap::gpsRX = 19;

//Light
const int BoardMap::ledI = 45;
const int BoardMap::ledC = 49;
const int BoardMap::ledD = 53;


const int BoardMap::manualPingPin = 33;
const int BoardMap::automaticPingPin = 34;
const int BoardMap::irSensorPin = 35;

const int BoardMap::sensorLightPin = A0;
const int BoardMap::soundPin = 36;
const int BoardMap::irPin = 37;

// For Arduino SAMD (Zero, MKR1000)
#elif defined(ARDUINO_SAMD_ZERO) || defined(ARDUINO_SAMD_MKR1000)
const int BoardMap::motorDirEnable = 32;// 2
const int BoardMap::motorDirRight = 33; //3
const int BoardMap::motorDriveBackward = 4;
const int BoardMap::motorDirLeft = 5;
const int BoardMap::motorDirEnable = 6;
const int BoardMap::motorDriveEnable = 7;
const int BoardMap::trigPin = 8;
const int BoardMap::echoPin = 9;
const int BoardMap::servoPin = 10;
const int BoardMap::bluetoothTX = 11;
const int BoardMap::bluetoothRX = 12;
const int BoardMap::ledPin = 13;
const int BoardMap::manualPingPin = A0;
const int BoardMap::automaticPingPin = A1;
const int BoardMap::irSensorPin = A2;

// For ESP32
#elif defined(ESP32)
const int BoardMap::motorDirEnable = 18;
const int BoardMap::motorDirRight = 19;
const int BoardMap::motorDriveBackward = 21;
const int BoardMap::motorDirLeft = 22;
const int BoardMap::motorDirEnable = 23;
const int BoardMap::motorDriveEnable = 25;
const int BoardMap::trigPin = 26;
const int BoardMap::echoPin = 27;
const int BoardMap::servoPin = 13;
const int BoardMap::bluetoothTX = 16;
const int BoardMap::bluetoothRX = 17;
const int BoardMap::ledPin = 2;
const int BoardMap::manualPingPin = 32;
const int BoardMap::automaticPingPin = 33;
const int BoardMap::irSensorPin = 34;

// For STM32
#elif defined(STM32F1xx) || defined(STM32F4xx)
const int BoardMap::motorDirEnable = PA5;
const int BoardMap::motorDirRight = PA6;
const int BoardMap::motorDriveBackward = PA7;
const int BoardMap::motorDirLeft = PB0;
const int BoardMap::motorDirEnable = PB1;
const int BoardMap::motorDriveEnable = PB2;
const int BoardMap::trigPin = PB3;
const int BoardMap::echoPin = PB4;
const int BoardMap::servoPin = PB5;
const int BoardMap::bluetoothTX = PB6;
const int BoardMap::bluetoothRX = PB7;
const int BoardMap::ledPin = PC13;
const int BoardMap::manualPingPin = PA0;
const int BoardMap::automaticPingPin = PA1;
const int BoardMap::irSensorPin = PA2;

#endif
