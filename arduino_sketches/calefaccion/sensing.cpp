#include"sensing.h"

const static int SENSORS_PIN = 10;


SensorReader::SensorReader(): _oneWire(SENSORS_PIN), 
  _dallasTemperature(_oneWire), _initialized(false){
}

void SensorReader::init(){
  if(_initialized == false){
    _logger.log("Initializing sensors...");
    _dallasTemperature.begin();
    _initialized = true;
  }
}

float SensorReader::readSensor(const int sensorIndex){
  _dallasTemperature.requestTemperatures();
  return _dallasTemperature.getTempCByIndex(sensorIndex);
}

  
  
