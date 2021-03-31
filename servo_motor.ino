include<Servo.h>
Servo sg90;

void setup()
{
 sg90.attach(3);
}

void loop()
{
 
  for(int baslangic = 0; baslangic <= 180 ; baslangic = baslangic+15)
  {
   sg90.write(baslangic); 
    delay(1000);
  }
  
  for(int donus=180; donus >=0 ; donus -=30) 
  {
  sg90.write(donus); 
  delay(1000); 
  }
  
  
}
