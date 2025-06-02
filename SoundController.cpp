#include "SoundController.h"

void SoundController::init() {  
  pinMode(soundPin, OUTPUT);
}
void SoundController::notify() {  
  //generar tono de 440Hz durante 1000 ms
  tone(soundPin, 440);
  delay(1000);
  //generar tono de 523Hz durante 500ms, y detenerlo durante 500ms.
  tone(soundPin, 523, 300);
  delay(500);
    //generar tono de 440Hz durante 1000 ms
  tone(soundPin, 400);
  delay(500);
    //generar tono de 440Hz durante 1000 ms
  tone(soundPin, 400);
  delay(500);

  //detener tono durante 500ms  
  noTone(soundPin);
  delay(500);
}
