#include <Arduino.h>
#include <WiFi.h>

void setup() {
  Serial.begin(9600);
  
  // WiFiモジュールを初期化
  WiFi.mode(WIFI_STA);
  WiFi.disconnect();
  delay(100);
  
  // MACアドレスを取得
  String macAddress = WiFi.macAddress();
  
  // MACアドレスをシリアルモニタに出力
  Serial.print("MAC Address: ");
  Serial.println(macAddress);
}

void loop() {
  // 何もしない
}
