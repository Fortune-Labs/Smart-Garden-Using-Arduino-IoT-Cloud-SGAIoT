## Arduino Code

// Include necessary libraries
#include <Arduino.h>
#include <ESP8266WiFi.h>
#include <DHT.h>
#include <ArduinoIoTCloud.h>
#include <WiFiConnectionManager.h>

// Define constants and variables
#define DHTPIN 2
#define DHTTYPE DHT22
DHT dht(DHTPIN, DHTTYPE);

const char* ssid = "your_SSID";
const char* password = "your_PASSWORD";

int soilMoistureValue1 = 0;
int soilMoistureValue2 = 0;
int soilMoistureValue3 = 0;
float temperature = 0;
float humidity = 0;

void setup() {
  Serial.begin(115200);
  dht.begin();
  pinMode(D5, OUTPUT); // Water pump control pin

  // Connect to Wi-Fi
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Connecting to WiFi...");
  }

  // Connect to Arduino IoT Cloud
  ArduinoCloud.begin(ArduinoIoTPreferredConnection);
  ArduinoCloud.addProperty(temperature, READ, ON_CHANGE, NULL);
  ArduinoCloud.addProperty(humidity, READ, ON_CHANGE, NULL);
  ArduinoCloud.addProperty(soilMoistureValue1, READ, ON_CHANGE, NULL);
  ArduinoCloud.addProperty(soilMoistureValue2, READ, ON_CHANGE, NULL);
  ArduinoCloud.addProperty(soilMoistureValue3, READ, ON_CHANGE, NULL);
}

void loop() {
  ArduinoCloud.update();

  // Read sensor data
  temperature = dht.readTemperature();
  humidity = dht.readHumidity();
  soilMoistureValue1 = analogRead(A0);
  soilMoistureValue2 = analogRead(A1);
  soilMoistureValue3 = analogRead(A2);

  // Control water pump based on soil moisture
  if (soilMoistureValue1 < 500 || soilMoistureValue2 < 500 || soilMoistureValue3 < 500) {
    digitalWrite(D5, HIGH);
  } else {
    digitalWrite(D5, LOW);
  }

  delay(2000); // Delay for 2 seconds
}
