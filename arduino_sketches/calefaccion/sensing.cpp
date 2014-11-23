#include"sensing.h"
#include <OneWire.h>

const static int NO_OF_SENSORS = 1;
const static int SENSORS_PIN = 10;
const static int ADDRESS_SIZE = 8;
const static int DATA_SIZE = 9;


SensorReader::SensorReader(){
  _initialized = false;
  _address = new byte[ADDRESS_SIZE];
}

boolean SensorReader::init(){
  if(_initialized == false){
    _logger.log("Initializing sensors...");
    
    OneWire ds(SENSORS_PIN);
    ds.reset_search();
    if(ds.search(_address)){
      _logger.log("Found new device. Address", _address, ADDRESS_SIZE);
      _initialized = true;
  }
  return _initialized;
}

  
  
