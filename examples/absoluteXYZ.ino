#include <ESP8266WiFi.h>
#include <PS2Mouse.h>

PS2Mouse mouse(SCL, SDA);
void IRAM_ATTR handleInterrupt();

uint16_t x, y;

void setup() {
  Serial.begin(115200);
  mouse.begin();
  attachInterrupt(digitalPinToInterrupt(SCL), handleInterrupt, FALLING);
}

byte raw[6];
  char Str[16];
void handleInterrupt() {
  noInterrupts();
    for(int i = 0; i < 6; i++){
      raw[i] = mouse.get(true);
    }
  interrupts();
}

void loop() {
    if(raw[0] != 0 && raw[0] != 0x80){
      mouse.getAbsoluteAxis(raw, x, y);
      Serial.print("Z pressure ");
      Serial.print(raw[2]);
      Serial.print("\t");
      Serial.print("X position ");
      Serial.print(x);
      Serial.print("\t");
      Serial.print("Y position ");
      Serial.print(y);
      Serial.println();
    }
}
