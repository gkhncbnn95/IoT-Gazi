#include <dht.h>

dht DHT;

#define DHT11_PIN 7

void setup(){
  Serial.begin(9600);
}

void loop(){
  int chk = DHT.read11(DHT11_PIN);
  Serial.print("Sıcaklık = ");
  Serial.print(DHT.temperature); 
  Serial.println(" °C");

  Serial.print("Sıcaklık = ");
  Serial.print(DHT.temperature * 1.8 + 32); 
  Serial.println(" °F");

  Serial.print("Sıcaklık = ");
  Serial.print(DHT.temperature +273.15); 
  Serial.println(" °K");
   
  Serial.print("Nem = ");
  Serial.print(DHT.humidity);
    Serial.println(" %");
        Serial.println(" ");
  delay(2000);
}
