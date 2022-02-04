#include <Arduino.h>

// Use WiFiManager
#include <WiFiManager.h>


void setup() {
  Serial.begin(115200);
  Serial.println();
  Serial.println("Starting WiFiManager");

  WiFiManager wifiManager;
  bool wifi_connection; 

  // reset settings - wipe stored credentials for testing
  // these are stored by the esp library
  //wifiManager.resetSettings();

  wifi_connection = wifiManager.autoConnect(); // uses 'ESP' end chip ID as SSID for config WiFi

  if (!wifi_connection) {
    Serial.println("WiFi connection failed");
    // ESP.restart();
  } else {
    Serial.println("WiFi connection successful");
  }
}

void loop() {
  // put your main code here, to run repeatedly:
}