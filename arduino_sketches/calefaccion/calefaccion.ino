

static const int ONEWIRE_BUS = 2;
static const int NO_OF_SENSORS = 2;


OneWire oneWire(ONEWIRE_BUS);
DallasTemperature sensors(
Logger log;


class Status{
  
  private:
  float _sensorReadings[2];
  float _reference;
  int _referenceSensorIndex;
  float _hystersis;
  boolean _heatingOn;
  
  public:
  boolean updateHeating();
}

boolean Status::updateHeating(){
  if(_heatingOn){
    _heatingOn = _sensorReadings[_referenceSensorIndex] >
      _reference - _hysteresis;
  }
  else{
    _heatingOn = _sensorReadings[_referenceSensorIndex] >
      _reference + _hysteresis;
  }
  return _heatingOn;
}

boolean getHeatingOn(Status &status){
  boolean result = false;
  if(status.heatingOn){
    result = status.sensorReadings[status.referenceSensorIndex] >
      status.reference - status.hysteresis;
  }
  else{
    result = status.
        

void setup() {
  sensors.begin()
  log.log("Sensors started");
}

void loop() {
  // put your main code here, to run repeatedly:

}
