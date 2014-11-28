#include"log.h"
#include <OneWire.h>
#include <DallasTemperature.h>

class SensorReader{
  private:
  boolean _initialized;
  Logger _logger;
  OneWire _oneWire;
  DallasTemperature _dallasTemperature;
  
  public:
  void init();
  float readSensor(const int sensorIndex);
}
