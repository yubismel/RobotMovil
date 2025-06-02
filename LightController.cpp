#include "LightController.h"
void LightController::init() {
  pinMode(ledI, OUTPUT);
  pinMode(ledC, OUTPUT);
  pinMode(ledD, OUTPUT);
}

void LightController::alert()
{

}
void LightController::dancing(){
	for(int i = 0; i < 2 ; i++)
	{
	  digitalWrite(ledI, HIGH);
	  digitalWrite(ledC, LOW);
	  digitalWrite(ledD, LOW);
	  delay(200);  
	  digitalWrite(ledI, LOW);
	  digitalWrite(ledC, HIGH);
	  digitalWrite(ledD, LOW);
	  delay(200);
	  digitalWrite(ledI, LOW);
	  digitalWrite(ledC, LOW);
	  digitalWrite(ledD, HIGH);
	  delay(200);        
	 }
	 for(int i = 0; i < 3 ; i++)
	 {
	  digitalWrite(ledI, HIGH);
	  digitalWrite(ledC, HIGH);
	  digitalWrite(ledD, HIGH);
	  delay(100);                     
	  digitalWrite(ledI, LOW);
	  digitalWrite(ledC, LOW);
	  digitalWrite(ledD, LOW);   
	  delay(100);
	}
};
