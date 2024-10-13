int relay=3;
int relay2=4;
int relay3=5;
int relay4=6;

int sensor = A0;
int sensor2 = 10;

void setup() {
  // put your setup code here, to run once:
pinMode(relay,OUTPUT);
pinMode(relay2,OUTPUT);
pinMode(relay3,OUTPUT);
pinMode(relay4,OUTPUT);
pinMode(sensor, INPUT);
pinMode(sensor2, INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
 int sensorval = analogRead(sensor);
 int sensorval2 = digitalRead(sensor2);
 Serial.println(sensorval);
  
 if (sensorval >500 ){
  digitalWrite(relay, HIGH); 
  digitalWrite(relay2, HIGH); 
  digitalWrite(relay3, HIGH); 
  digitalWrite(relay4, HIGH); 

    
  Serial.print("Human Detected");
}
 else {
    
    digitalWrite(relay, LOW); 
  digitalWrite(relay2, LOW); 
  digitalWrite(relay3, LOW); 
  digitalWrite(relay4, LOW); 

    Serial.print("Lights OFF");

  }
}



  
  
  
