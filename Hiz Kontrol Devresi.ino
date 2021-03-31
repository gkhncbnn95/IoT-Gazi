const int DC=3;
const int pot= A0;
int motor;
const int led=4;

void setup()
{
 pinMode(DC,OUTPUT); 
  pinMode(led,OUTPUT);
  
}

void loop()
{
  motor=analogRead(pot);
  motor=map(motor,0,1023,0,255);
  
  if(motor >= 125)
  { digitalWrite(4,HIGH); }
  
  else
  { digitalWrite(4,LOW); }
  analogWrite(DC,motor);
}
