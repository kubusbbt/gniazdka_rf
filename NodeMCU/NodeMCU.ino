#define BLYNK_PRINT Serial


/**** Biblioteki Blynk *****/
#include <ESP8266WiFi.h>
#include <ESP8266HTTPClient.h>
#include <BlynkSimpleEsp8266.h>


/**** Biblioteki RC switch *****/
#include <RCSwitch.h>
RCSwitch mySwitch = RCSwitch();


char auth[] = "f012bd4309ee48a6b7c8046fc7c0e13b";
char ssid[] = "JAdesign";
char pass[] = "16031987";


void setup()
{
  Serial.begin(9600);
  
  Blynk.begin(auth, ssid, pass);

  // Numer pinu do wysyłki danych RC
  mySwitch.enableTransmit(D1);
  
  mySwitch.setPulseLength(206);
}


void loop()
{
  Blynk.run();
}
