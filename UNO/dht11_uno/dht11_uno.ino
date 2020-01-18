#include <dht11.h>
#define DHT11PIN A0
 
int check;
dht11 DHT11;
 
void setup()
{
  Serial.begin(9600);

  Serial.print("LIBRARY VERSION: ");
  Serial.println(DHT11LIB_VERSION);
}
 
void loop()
{
  check = DHT11.read(DHT11PIN);
  if(check == 0){
    float h = (float)DHT11.humidity;
    float t = (float)DHT11.temperature;
    Serial.println(h);
    Serial.println(t);
  }
  else Serial.println("Erreur Capteur");
  // 2 minuites
  delay(120000);
}
