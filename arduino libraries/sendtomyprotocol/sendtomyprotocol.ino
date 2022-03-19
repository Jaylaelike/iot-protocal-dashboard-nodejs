/*
Code for Internet of things device
connect to server.
Coder : Isaranu Janthong
Created : 2017.Nov.11
*/

#include <myprotocol.h>

const char *ssid = "XYZ_FL1_2.4G";
const char *passw = "th@ipbschp";

String response; 
float value;

myprotocol myiot;

void setup() {

  Serial.begin(115200);
  bool conn = myiot.begin(ssid, passw);

  if(conn){
      Serial.println("myprotocol connected.");
    }else{
      Serial.println("re-connect again.");
     }

  response = myiot.sayhi();
  Serial.println("Are you ready ? :" + String(response)); 
  
  response = myiot.getVersion();
  Serial.println("myprotocol library version is " + String(response));  
}

void loop() {
  
  response = "";
  
  value = random(0,100);
  response = myiot.WriteDashboard(value);
  Serial.println(response);
  
  delay(5000);
}
