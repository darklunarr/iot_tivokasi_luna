#include <Arduino.h>

#define LED_KUNING 33 // LED Kuning di GPIO 33
#define LED_HIJAU 25  // LED Hijau di GPIO 25

void setup()
{
  Serial.begin(115200);
  Serial.println("ESP32 Blinking LED");

  pinMode(LED_KUNING, OUTPUT);
  pinMode(LED_HIJAU, OUTPUT);
}

void loop()
{
  digitalWrite(LED_KUNING, HIGH);
  Serial.println("LED Kuning ON");
  delay(1000);

  digitalWrite(LED_HIJAU, HIGH);
  Serial.println("LED Hijau ON");
  delay(1000);

  digitalWrite(LED_KUNING, LOW);
  Serial.println("LED Kuning OFF");
  delay(500);

  digitalWrite(LED_HIJAU, LOW);
  Serial.println("LED Hijau OFF");
  delay(500);
}
