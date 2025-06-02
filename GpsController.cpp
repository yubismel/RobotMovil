#include "GpsController.h"
#include "Config.h" 
void GpsController::init() {
  // BTserial.begin(BLUETOOTH_BAUD_RATE);   
  GPSserial.begin(9600); 
}

String GpsController::getPosition()
{
String data = "Void";	
  if(GPSserial.available())
  {
    data=GPSserial.read();    
  }
  return data;
}
