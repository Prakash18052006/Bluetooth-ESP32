#include "BluetoothSerial.h"

  BluetoothSerial SerialBT;

  void setup(){
    Serial.begin(115200);
    SerialBT.begin("ESP32test");
    Serial.println("Now you can pair the device");

  }
  void loop(){
    if(Serial.available()){
      SerialBT.write(Serial.read());
    }
      if(SerialBT.available()){
      Serial.write(SerialBT.read());
    }
    delay(10);
  }