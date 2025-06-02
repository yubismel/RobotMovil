#ifndef GPSCONTROLLER_H
#define GPSCONTROLLER_H

#include <SoftwareSerial.h>
#include "BoardMap.h"


class GpsController {
public:
  void init();
  String getPosition();

private:
  SoftwareSerial GPSserial = SoftwareSerial(BoardMap::gpsTX,BoardMap::gpsRX);
};
#endif
