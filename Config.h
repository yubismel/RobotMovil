#ifndef CONFIG_H
#define CONFIG_H

// =============================================
// Configuracion General del Robot
// =============================================

// Modo de depuracion (habilita mensajes seriales)
#define DEBUG_MODE true

// Tiempo minimo entre lecturas de sensores (ms)
#define SENSOR_READ_INTERVAL 100

// =============================================
// Configuracion de Bluetooth
// =============================================

// Velocidad de comunicacion Bluetooth
#define BLUETOOTH_BAUD_RATE 9600

// Tiempo de espera para lectura Bluetooth (ms)
#define BLUETOOTH_READ_TIMEOUT 200

// =============================================
// Configuracion de Motores
// =============================================

// Velocidades por defecto
#define DEFAULT_SPEED 150       // Velocidad normal (0-255)
#define TURN_SPEED 120          // Velocidad al girar (0-255)
#define REVERSE_SPEED 100       // Velocidad en reversa (0-255)
#define ACCELERATION_RAMP 50    // Tiempo de rampa de aceleraciï¿½n (ms)

// =============================================
// Configuraciï¿½n de Sensores
// =============================================

// Umbral de detecciï¿½n de obstï¿½culos (cm)
#define OBSTACLE_THRESHOLD 30

// Posiciones del servo para detecciï¿½n
#define SERVO_LEFT_POS 30       // Posiciï¿½n izquierda (grados)
#define SERVO_CENTER_POS 75     // Posiciï¿½n central (grados)
#define SERVO_RIGHT_POS 120     // Posiciï¿½n derecha (grados)

// Tiempo de estabilizaciï¿½n del servo (ms)
#define SERVO_STABILIZE_TIME 150

// =============================================
// Configuraciï¿½n del Modo Autï¿½nomo
// =============================================

// Tiempo de giro cuando detecta obstï¿½culo (ms)
#define AVOIDANCE_TURN_TIME 500

// Distancia de seguridad para reversa (cm)
#define SAFE_REVERSE_DISTANCE 15

// =============================================
// Configuraciï¿½n de Pines (alternativa a BoardMap)
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
