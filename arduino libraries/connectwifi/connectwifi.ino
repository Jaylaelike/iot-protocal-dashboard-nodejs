/*
Code for Internet of things device
Simple connect WiFi.
Coder : Isaranu Janthong
Created : 2017.Nov.20
*/

#include "ESP8266WiFi.h"

const char *ssid = "thaieasyelec_24G";
const char *passw = "v3nu55upp1y";

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);

  Serial.begin(115200);
  WiFi.begin(ssid, passw);

  Serial.print("WiFi connecting..");

  while((WiFi.status() != WL_CONNECTED)){
    delay(200);
      digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(50); 
    Serial.print(".");
  }

  if(WiFi.status() == WL_CONNECTED){
        // turn the LED on (HIGH is the voltage level) 
     Serial.println("Connected !");
  }else{
     
  }
}

void loop() {
  
}

