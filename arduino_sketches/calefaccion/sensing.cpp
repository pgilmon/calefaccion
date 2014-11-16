#include"sensing.h"
#include <OneWire.h>

const static int NO_OF_SENSORS = 1;
const static int SENSORS_PIN = 10;

SensorReader::SensorReader(){
  this->_initialized = false;
  this->_address = new byte[8];
}

boolean SensorReader::init(){
  if(_initialized == false){
    _logger.log("Initializing sensors...");
    
    OneWire ds(SENSORS_PIN);
    ds.reset_search();
    if(
    
    _initialized = true;
  }
  return _initialized;
}

