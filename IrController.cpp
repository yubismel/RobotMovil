#include "IrController.h"
#include "Config.h" 

void IrController::init() {
	pinMode(irPin, OUTPUT);
}