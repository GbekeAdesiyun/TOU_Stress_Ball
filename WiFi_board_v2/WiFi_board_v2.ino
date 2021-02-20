#include <WiFi.h>;

const char* ssid = "Gbeke's Iphone";
const char* password = "JesusisLord";

void setup() {
  Serial.begin(115200);
  WiFi.begin(ssid, password);
  Serial.println("Connecting to Wifi");

  while (WiFi.status() != WL_CONNECTED) {
    Serial.print(".");
    delay(500);
  }

  Serial.println("\nConnected to the WiFi network");
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());
}

void loop() {
  if ((WiFi.status() == WL_CONNECTED)) //Check the current connectino status
  {
    Serial.println("You can try to ping me");
    delay(5000);
  }

}
