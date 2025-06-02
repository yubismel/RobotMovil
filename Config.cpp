#include "Config.h"
#include "Arduino.h"
// Variables configurables en tiempo de ejecuciÃ³n
#ifdef DEBUG_MODE
    bool debugEnabled = true;
#else
    bool debugEnabled = false;
#endif

byte currentMaxSpeed = DEFAULT_SPEED;
