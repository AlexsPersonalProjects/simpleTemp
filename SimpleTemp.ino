#include <DHT.h>
#define Type DHT11
int sensePin = 2;
DHT HT(sensePin, Type);
float humidity;
float tempC;
float tempF;
int setTime = 500;

void setup() {
Serial.begin(9600);
HT.begin();
delay(setTime);
Serial.println("Startup Complete!");
delay(1000);
}

void loop() {
  // put your main code here, to run repeatedly:
humidity = HT.readHumidity();
tempC = HT.readTemperature();
tempF = HT.readTemperature(true);

Serial.print("Humidity: ");
Serial.println(humidity);
Serial.print("Temperature (C): ");
Serial.println(tempC);
delay(10000);

}
