#define BLYNK_PRINT Serial


#include <ESP8266_Lib.h>
#include <BlynkSimpleShieldEsp8266.h>

char auth[] = "BURAYA BLNYK TOKEN YAZILACAK";
char ssid[] = "WİFİ ADI";
char pass[] = "WİFİ SİFRESİ";
#define EspSerial Serial1
#define ESP8266_BAUD 115200

ESP8266 wifi(&EspSerial);

void setup()
{
  Serial.begin(9600);

  delay(10);

  EspSerial.begin(ESP8266_BAUD);
  delay(10);

  Blynk.begin(auth, wifi, ssid, pass);
}

void loop()
{
  Blynk.run();
}
