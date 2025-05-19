#include "Config.h"
#ifndef BOARDMAP_H
#define BOARDMAP_H
#define ARDUINO_AVR_MEGA2560
// Definición de macros para identificar la placa
#if defined(ARDUINO_AVR_UNO) || defined(ARDUINO_AVR_MEGA2560)
  #define BOARD_TYPE "Arduino AVR"
#elif defined(ARDUINO_SAMD_ZERO) || defined(ARDUINO_SAMD_MKR1000)
  #define BOARD_TYPE "Arduino SAMD"
#elif defined(ESP32)
  #define BOARD_TYPE "ESP32"
#elif defined(STM32F1xx) || defined(STM32F4xx)
  #define BOARD_TYPE "STM32"
#else
  #error "Placa no soportada. Por favor, agrega las definiciones de pines para esta placa en BoardMap."
#endif

class BoardMap {
public:
  // Motores
  static const int motorRightReverse;
  static const int motorRightOn;
  static const int motorLeftReverse;
  static const int motorLeftOn;
  static const int chipEnableRight;
  static const int chipEnableLeft;

  // Sensores ultrasónicos
  static const int trigPin;
  static const int echoPin;

  // Servo
  static const int servoPin;

  // Bluetooth
  static const int bluetoothTX;
  static const int bluetoothRX;

  // LED y otros
  static const int ledPin;
  static const int manualPingPin;
  static const int automaticPingPin;

  // Sensor IR
  static const int irSensorPin;
};

#endif
