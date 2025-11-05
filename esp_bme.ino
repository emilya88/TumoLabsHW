#include <Wire.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_BME280.h>


Adafruit_BME280 bme; 

void setup() {
  Serial.begin(9600);
 
  bool status;
  status = bme.begin(0x76);  
  if (!status) {
    Serial.println("Could not find a BME280 sensor");
    while (1);
  }

  Serial.println();
}


void loop() {
  Serial.print("Temperature: ");
  Serial.print(bme.readTemperature());
  Serial.println(" °C");

  Serial.print("Pressure: ");
  Serial.print(bme.readPressure() / 100.0F); 
  Serial.println(" hPa");

  Serial.print("Humidity: ");
  Serial.print(bme.readHumidity());
  Serial.println(" %");

  Serial.println();  
  delay(1000);     
}