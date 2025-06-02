#include "Config.h"
#ifndef BOARDMAP_H
#define BOARDMAP_H
#define ARDUINO_AVR_MEGA2560
// DefiniciÃ³n de macros para identificar la placa
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
  // Motors
  
  static const int motorDirRight;
  static const int motorDirLeft;   
  static const int motorDirEnable;
  
  static const int motorDriveForward; 
  static const int motorDriveBackward;
  static const int motorDriveEnable;
  
   //Stepers Motors
  static const int stepperPinA1; 
  static const int stepperPinA2;
  static const int stepperPinB1;
  static const int stepperPinB2;

  // Sensores ultrasonicos
  static const int trigPin;
  static const int echoPin;

  // Servo
  static const int servoPin;

  // Bluetooth
  static const int bluetoothTX;
  static const int bluetoothRX;

  // GPG
  static const int gpsTX;
  static const int gpsRX;

  // LED y otros
  static const int ledI;
  static const int ledC;
  static const int ledD;
  static const int manualPingPin;
  static const int automaticPingPin;

  // Sensor IR
  static const int irSensorPin;

  // Sensor L
  static const int sensorLightPin;
  
    // Sound
  static const int soundPin;
  
    // Ir
  static const int irPin;  
};

#endif
