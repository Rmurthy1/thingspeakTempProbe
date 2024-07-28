#include <Arduino.h>
#include "networking.h"

// networking class
Networking network;

// temperature libraries
#include <OneWire.h>
#include <DallasTemperature.h>

// hardware pin definitions
#define ONE_WIRE_BUS 6 // d2

// Setup a oneWire instance to communicate with any OneWire devices
OneWire oneWire(ONE_WIRE_BUS);
// Pass our oneWire reference to Dallas Temperature sensor
DallasTemperature sensors(&oneWire);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  network.setup();
}

void loop() {
  // put your main code here, to run repeatedly:
  network.writeDataToThingSpeak("100;200;300;400;500");
}
