# RobotMovil
# Robot Arduino compatible
Firmware genérico y configurable para un robot móvil, compatible con varios tipos de placas de desarrollo (UNO/Mega, ESP32, STM32 y otros).
Modular y configurable para permitir adicionar módulos de sensores y actuadores dependiendo del prototipo al que se le quiera instalar.
## Características principales
	-Adición y configuración de módulos de sensores y actuadores mediante un fichero de configuración.
 	Capacidad para incluir:
		Control de movimiento mediante comandos enviados por Bluetooth.
		Modo automático con detección de obstáculos.
		Comunicación serial.
		Arquitectura modular orientada a objetos adaptable al hardware existente.

## Hardware Requerido

| Componente               | Cantidad |
|--------------------------|----------|
| Placa compatible         | 1        |
| Módulo Bluetooth HC-05/06| 1        |
| Sensor ultrasónico HC-SR04| 1        |
| Servomotor SG90          | 1        |
| Motores DC con cajas de reducción | 2 |
| Driver L298N o similar   | 1        |
| Batería LiPo/Li-ion      | 5        |

## Diagrama de Conexiones

Las conexiones se definen según la placa seleccionada. Consulta el archivo 'BoardMap.h' para los pines específicos de tu plataforma.

## Instalación
1. Clona este repositorio:
bash
   git clone https://github.com/tu-usuario/robot-bluetooth.git
    Abre el proyecto en Arduino IDE o PlatformIO
    Selecciona la placa correcta en las herramientas
    Carga el programa en tu placa
Uso
Comandos Bluetoothb Comando	Acción
				w	Avanzar
				z	Retroceder
				a	Girar izquierda
				d	Girar derecha
				s	Detener

El robot entra automáticamente en modo autónomo si no recibe comandos.
Configuración
Puedes ajustar estos parámetros editando los archivos correspondientes:
    SensorController.h: Sensibilidad de obstáculos (sensitivity)
    Robot.h: Velocidad predeterminada (defaultSpeed)
    
		/robot-bluetooth
		│
		├── src/
		│   ├── Robot.ino          # Programa principal
		│   ├── BoardMap.h         # Mapeo de pines por placa
		│   ├── BluetoothController.h/.cpp  # Control Bluetooth
		│   ├── MotorController.h/.cpp      # Control de motores
		│   ├── SensorController.h/.cpp     # Sensores y servo
		│   └── Robot.h/.cpp       # Lógica principal
		│
		├── lib/                  # Dependencias (si las hay)
		└── README.md             # Este archivo

Plataformas Compatibles
    Arduino UNO/Mega
    Arduino SAMD (Zero, MKR1000)
    ESP32
    STM32 (F1xx, F4xx)
    
Contribuir
Si deseas contribuir:
    Haz fork del proyecto
    Crea una rama con tu feature (git checkout -b feature/mejora)
    Haz commit de tus cambios (git commit -am 'Añade alguna mejora')
    Haz push a la rama (git push origin feature/mejora)
    Abre un Pull Request
