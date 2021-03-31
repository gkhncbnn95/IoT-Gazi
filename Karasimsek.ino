const int led1= 2;
const int led2= 3;
const int led3= 4;
const int led4= 5;
const int led5= 6;

void setup() {
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(led5,OUTPUT);
  
 

}

void loop() {
digitalWrite(2,HIGH);
delay(500);
digitalWrite(3,HIGH);
delay(500);
digitalWrite(4,HIGH);
delay(500);
digitalWrite(5,HIGH);
delay(500);
digitalWrite(6,HIGH);
delay(500);

digitalWrite(6,LOW);
delay(500);
digitalWrite(5,LOW);
delay(500);
digitalWrite(4,LOW);
delay(500);
digitalWrite(3,LOW);
delay(500);
digitalWrite(2,LOW);
delay(500);


  

}
