#include <Servo.h>    
 
Servo mg901;       
Servo mg902;

int pozisyon_x=0;     
int pozisyon_y=0;
const int x_pin=A0;   
const int y_pin=A1;


void setup() {
  mg901.attach(9);   
  mg902.attach(10);
  Serial.begin(9600);   
}

void loop() 
{
  pozisyon_x = analogRead(x_pin);              
  pozisyon_x = map(pozisyon_x, 0, 1023, 0, 180); 
  mg901.write(pozisyon_x);                   
                         
 
  pozisyon_y = analogRead(y_pin);              
  pozisyon_y = map(pozisyon_y, 0, 1023, 0, 90);  
  mg902.write(pozisyon_y);            
 
  if(pozisyon_x != 0 || pozisyon_y != 0)
  {
  Serial.print("Servo 1: "); 
  Serial.print(pozisyon_x);  
  Serial.print("\n");           
  Serial.print("Servo 2: "); 
  Serial.print(pozisyon_y);
  Serial.print("\n");  
  delay(500);
  
  }
   
  
  
  
}