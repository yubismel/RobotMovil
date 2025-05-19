#include "Config.h"
#include "Arduino.h"
// Variables configurables en tiempo de ejecución
#ifdef DEBUG_MODE
    bool debugEnabled = true;
#else
    bool debugEnabled = false;
#endif

byte currentMaxSpeed = DEFAULT_SPEED;
