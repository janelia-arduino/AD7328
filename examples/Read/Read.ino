#include "AD7328.h"


const uint8_t CHIP_SELECT_PIN = 10;
const uint8_t CHANNEL = 0;
const uint8_t LOOP_DELAY = 100;

AD7328 adc = AD7328(CHIP_SELECT_PIN);

uint16_t adc_value;

void setup()
{
  Serial.begin(115200);

  adc.setRange(CHANNEL,UNI10);
}


void loop()
{
  adc_value = adc.read(CHANNEL);
  Serial.println(adc_value);
  delay(LOOP_DELAY);
}
