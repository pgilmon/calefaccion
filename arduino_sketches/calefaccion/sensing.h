#include"log.h"


class TemperatureReading{
  public:
  long address;
  float temperature;
}

class SensorReader{
  private:
  boolean _initialized;
  byte[] _address;
  Logger _logger;
  
  public:
  void init();
  void readFirstSensor(TemperatureReading &reading);
}
