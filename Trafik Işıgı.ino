const int k = 8;
const int s = 6;
const int y = 5;

void setup() {
  pinMode(8, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);

}

void loop() {
digitalWrite(k,HIGH);
delay(10000);
digitalWrite(s,HIGH);
delay(10000);
digitalWrite(k,LOW);
digitalWrite(s,LOW);
delay(2000);
digitalWrite(y,HIGH);
delay(5000);
digitalWrite(y,LOW);
}
