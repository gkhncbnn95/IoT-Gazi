int sensorPin = A0;               
int esikDegeri = 500;              
int buzzerPin = 8;                 
int veri;                          

void setup() {
  Serial.begin(9600);
  pinMode(buzzerPin, OUTPUT);      
}
void loop() {
  veri = analogRead(sensorPin);
Serial.println(veri);
  if(veri < esikDegeri){           
    digitalWrite(buzzerPin, HIGH); 
    delay(100);
    digitalWrite(buzzerPin, LOW);
    delay(100);
  }
  else{                          
    digitalWrite(buzzerPin, LOW);
  }
}
