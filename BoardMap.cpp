#include "BoardMap.h"


// Definición de pines para Arduino UNO/Mega
#if defined(ARDUINO_AVR_UNO) || defined(ARDUINO_AVR_MEGA2560)
const int BoardMap::motorRightReverse = 5;
const int BoardMap::motorRightOn = 6;
const int BoardMap::motorLeftReverse = 7;
const int BoardMap::motorLeftOn = 8;
const int BoardMap::chipEnableRight = 9;
const int BoardMap::chipEnableLeft = 10;
const int BoardMap::trigPin = 22;
const int BoardMap::echoPin = 24;
const int BoardMap::servoPin = 28;
const int BoardMap::bluetoothTX = 11;
const int BoardMap::bluetoothRX = 12;
const int BoardMap::ledPin = 13;
const int BoardMap::manualPingPin = 30;
const int BoardMap::automaticPingPin = 31;
const int BoardMap::irSensorPin = 26;

// Definición de pines para Arduino SAMD (Zero, MKR1000)
#elif defined(ARDUINO_SAMD_ZERO) || defined(ARDUINO_SAMD_MKR1000)
const int BoardMap::motorRightReverse = 2;
const int BoardMap::motorRightOn = 3;
const int BoardMap::motorLeftReverse = 4;
const int BoardMap::motorLeftOn = 5;
const int BoardMap::chipEnableRight = 6;
const int BoardMap::chipEnableLeft = 7;
const int BoardMap::trigPin = 8;
const int BoardMap::echoPin = 9;
const int BoardMap::servoPin = 10;
const int BoardMap::bluetoothTX = 11;
const int BoardMap::bluetoothRX = 12;
const int BoardMap::ledPin = 13;
const int BoardMap::manualPingPin = A0;
const int BoardMap::automaticPingPin = A1;
const int BoardMap::irSensorPin = A2;

// Definición de pines para ESP32
#elif defined(ESP32)
const int BoardMap::motorRightReverse = 18;
const int BoardMap::motorRightOn = 19;
const int BoardMap::motorLeftReverse = 21;
const int BoardMap::motorLeftOn = 22;
const int BoardMap::chipEnableRight = 23;
const int BoardMap::chipEnableLeft = 25;
const int BoardMap::trigPin = 26;
const int BoardMap::echoPin = 27;
const int BoardMap::servoPin = 13;
const int BoardMap::bluetoothTX = 16;
const int BoardMap::bluetoothRX = 17;
const int BoardMap::ledPin = 2;
const int BoardMap::manualPingPin = 32;
const int BoardMap::automaticPingPin = 33;
const int BoardMap::irSensorPin = 34;

// Definición de pines para STM32
#elif defined(STM32F1xx) || defined(STM32F4xx)
const int BoardMap::motorRightReverse = PA5;
const int BoardMap::motorRightOn = PA6;
const int BoardMap::motorLeftReverse = PA7;
const int BoardMap::motorLeftOn = PB0;
const int BoardMap::chipEnableRight = PB1;
const int BoardMap::chipEnableLeft = PB2;
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
