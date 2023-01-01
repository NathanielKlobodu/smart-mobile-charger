#include <ESP8266WiFi.h>  // include library

// set WiFi access point credentials
const char* ssid = "Battery Protector";
const char* pass = "12345678";

WiFiServer server(80);  // create a WiFi server object that listens at port 80

uint8_t rel = 4;  // relay pin

String request = "";  // string to store incoming request message

void setup() {
  // Serial.begin(115200); // initialize serial communication for debugging. Comment out to disable

  pinMode(rel, OUTPUT);     // set relay pin as output
  digitalWrite(rel, HIGH);  // turn on relay by default

  WiFi.softAP(ssid, pass);  // start WiFi AP with specified SSID and password
  delay(100);

  server.begin();           // start the WiFi server
}

void loop() {
  // check for incoming client, else return to top of loop
  WiFiClient client = server.available();
  if (!client) return;

  request = client.readStringUntil('\r');   // store client request message

  if ( request.indexOf("SLEEP") > 0 ) {     // if request contains "SLEEP"
    client.println("HTTP/1.1 200 OK\r\n");  // send http response header to client
    client.flush();           //clear output buffer
    Serial.println("SLEEP");  // print SLEEP to serial monitor
    ESP.deepSleep(0);         // enter deep sleep mode
  }

  delay(5);
}