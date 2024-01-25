#define water_sensor 2
#define sensor_sinal A1

int water_volume = 0;

void setup() {
  pinMode(water_sensor, OUTPUT);

  digitalWrite(water_sensor, LOW);
  Serial.begin(9600);
}

void loop() {
  int volume = readSensor(); 
  Serial.print("Nível de água: ");
  Serial.println(volume);
  delay(1000);
}

int readSensor() {  
  digitalWrite(water_sensor, HIGH);  
  delay(10);
  water_volume = analogRead(sensor_sinal);
  digitalWrite(water_sensor, LOW);
  return water_volume;
}