#include "ESP_I2S.h"
#include "BluetoothA2DPSink.h"

const uint8_t I2S_SCK = 5;    /* Audio data bit clock              BCK端口*/
const uint8_t I2S_WS = 19;    /* Audio data left and right clock   LCK端口*/
const uint8_t I2S_SDOUT = 18; /* ESP32 audio data output (to speakers)   IO端口*/
I2SClass i2s;

BluetoothA2DPSink a2dp_sink(i2s);

void setup() {
  pinMode(2, OUTPUT);
  digitalWrite(2, 1);

  i2s.setPins(I2S_SCK, I2S_WS, I2S_SDOUT);
  if (!i2s.begin(I2S_MODE_STD, 44100, I2S_DATA_BIT_WIDTH_16BIT, I2S_SLOT_MODE_STEREO, I2S_STD_SLOT_BOTH)) {
    Serial.println("Failed to initialize I2S!");
    while (1)
      ;  // do nothing
  }
  a2dp_sink.start("_55987的蓝牙播放器");
  a2dp_sink.set_volume(20);  //8进制

  digitalWrite(2, 0);
}
void loop() {}
