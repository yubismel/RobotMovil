#ifndef CONFIG_H
#define CONFIG_H

// =============================================
// Configuraci�n General del Robot
// =============================================

// Modo de depuraci�n (habilita mensajes seriales)
#define DEBUG_MODE true

// Tiempo m�nimo entre lecturas de sensores (ms)
#define SENSOR_READ_INTERVAL 100

// =============================================
// Configuraci�n de Bluetooth
// =============================================

// Velocidad de comunicaci�n Bluetooth
#define BLUETOOTH_BAUD_RATE 9600

// Tiempo de espera para lectura Bluetooth (ms)
#define BLUETOOTH_READ_TIMEOUT 200

// =============================================
// Configuraci�n de Motores
// =============================================

// Velocidades por defecto
#define DEFAULT_SPEED 150       // Velocidad normal (0-255)
#define TURN_SPEED 120          // Velocidad al girar (0-255)
#define REVERSE_SPEED 100       // Velocidad en reversa (0-255)
#define ACCELERATION_RAMP 50    // Tiempo de rampa de aceleraci�n (ms)

// =============================================
// Configuraci�n de Sensores
// =============================================

// Umbral de detecci�n de obst�culos (cm)
#define OBSTACLE_THRESHOLD 30

// Posiciones del servo para detecci�n
#define SERVO_LEFT_POS 30       // Posici�n izquierda (grados)
#define SERVO_CENTER_POS 75     // Posici�n central (grados)
#define SERVO_RIGHT_POS 120     // Posici�n derecha (grados)

// Tiempo de estabilizaci�n del servo (ms)
#define SERVO_STABILIZE_TIME 150

// =============================================
// Configuraci�n del Modo Aut�nomo
// =============================================

// Tiempo de giro cuando detecta obst�culo (ms)
#define AVOIDANCE_TURN_TIME 500

// Distancia de seguridad para reversa (cm)
#define SAFE_REVERSE_DISTANCE 15

// =============================================
// Configuraci�n de Pines (alternativa a BoardMap)
// =============================================
// (Opcional - puede usarse en lugar de BoardMap para configuraciones simples)

/*
// Ejemplo para Arduino UNO
#define MOTOR_RIGHT_REVERSE 5
#define MOTOR_RIGHT_ON 6
#define MOTOR_LEFT_REVERSE 7
#define MOTOR_LEFT_ON 8
#define CHIP_ENABLE_RIGHT 9
#define CHIP_ENABLE_LEFT 10
#define TRIG_PIN 22
#define ECHO_PIN 24
#define SERVO_PIN 28
#define BLUETOOTH_TX 11
#define BLUETOOTH_RX 12
#define LED_PIN 13
*/

#endif
