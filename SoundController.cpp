#include "SoundController.h"

void SoundController::init() {  
  pinMode(soundPin, OUTPUT);
}
void SoundController::notify() {  
  //generar tono de 440Hz durante 1000 ms
  tone(soundPin, 600);
  delay(200);
  tone(soundPin, 700);
  delay(200);
  
  //detener tono durante 500ms  
  noTone(soundPin);
  delay(500);
}
