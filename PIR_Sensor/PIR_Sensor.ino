int relay=7;
int sensor = 7;
int sensor2 = 3;
int sensor3 = 4;
void setup() {
  // put your setup code here, to run once:
pinMode(relay,OUTPUT);
pinMode(sensor, INPUT);
pinMode(sensor2, INPUT);
pinMode(sensor3, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int sensorval = digitalRead(sensor);
  int sensorval2 = digitalRead(sensor2);
  int sensorval3 = digitalRead(sensor3);

  Serial.println(sensorval);
  if (sensorval == HIGH&&sensorval2 == HIGH&&sensorval3 == HIGH){
digitalWrite(relay, HIGH); 
delay(30000);
}
 else {
    digitalWrite(relay, LOW); 
  }
}



  
  
  
