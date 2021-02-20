#include <analogWrite.h>

#include <dummy.h>
#include <HTTPClient.h>

#include <AzureIotHub.h>
#include <Esp32MQTTClient.h>

for ESP32 microcontroller
int fsrAnalogPin = 23; // FSR is connected to analog 23
int fsrReading;      // the analog reading from the FSR resistor divider
int LEDbrightness;
 
int Led_Red = 18;
int Led_Green = 19;
int Led_Blue = 21;
 

void setup() {
  Serial.begin(9600);   // We'll send debugging information via the Serial monitor
  pinMode(Led_Red, OUTPUT); //pin with connected to resistor
  pinMode(Led_Green, OUTPUT); 
  pinMode(Led_Blue, OUTPUT); 
  pinMode(fsrAnalogPin, INPUT);
}
void loop() {
  fsrReading = analogRead(fsrAnalogPin);
  Serial.print("Analog reading = ");
  Serial.println(fsrReading);
 
  // we'll need to change the range from the analog reading (0-1023) down to the range
  // used by analogWrite (0-255) with map!
  LEDbrightness = map(fsrReading, 0, 1023, 0, 255);
  // LED gets brighter the harder you press
  analogWrite (Led_Red, LEDbrightness);
  //analogWrite (Led_Blue, LEDbrightness);
  //analogWrite (Led_Green, LEDbrightness);

  delay(100);
}


 
