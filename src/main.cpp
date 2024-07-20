#include <Arduino.h>
#include "networking.h"

Networking network;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  network.setup();

}

void loop() {
  // put your main code here, to run repeatedly:
  network.writeDataToThingSpeak("100;200;300;400;500");
}
