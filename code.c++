int sensorProximidadePin = 7;
int ledVermelhoPin = 6;

bool estadoLedVermelho = false;

void setup()
{
  pinMode(ledVermelhoPin, OUTPUT);
  pinMode(sensorProximidadePin, INPUT);
}

void loop()
{
  bool estadoSensorProximidade = digitalRead(sensorProximidadePin);
  estadoLedVermelho = !estadoSensorProximidade;
  
  digitalWrite(ledVermelhoPin, estadoLedVermelho);
  delay(500);
}