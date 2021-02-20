// for Arduino microcontroller
//int Led_Red = 10;
//int Led_Green = 11;
//int Led_Blue = 9;

// for ESP8266 microcontroller
//int Led_Red = D3;
//int Led_Green = D2;
//int Led_Blue = D4;

// for ESP32 microcontroller
int Led_Red = D21;
int Led_Green = D19;
int Led_Blue = D18;
 

void setup() {
  pinMode(Led_Red, OUTPUT); 
  pinMode(Led_Green, OUTPUT); 
  pinMode(Led_Blue, OUTPUT); 
}
void loop() {
   for(int val = 255; val> 0; val--) {
      analogWrite (Led_Red, val);
      analogWrite (Led_Blue, 255-val);
      analogWrite (Led_Green, 128-val);
      delay (15);
   }

   for(int val = 0; val <255; val++) {
      analogWrite (Led_Red, val);
      analogWrite (Led_Blue, 255-val);
      analogWrite (Led_Green, 128-val);
      delay (15);
   }
}
