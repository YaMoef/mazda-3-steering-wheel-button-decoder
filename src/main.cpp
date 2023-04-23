#include <Arduino.h>

#define ANALOG_PIN A0

const int STANDARD_DEVIATION = 3.5; // deviation in percent 1 ~= 10

const int VOL_DOWN = 915;
const int VOL_DOWN_DELAY = 150;

const int VOL_UP = 860;
const int VOL_UP_DELAY = 150;

const int UP = 705;
const int UP_DELAY = 150;

const int DOWN = 625;
const int DOWN_DELAY = 150;

const int MODE = 475;
const int MODE_DELAY = 150;

const int MUTE = 406;
const int MUTE_DELAY = 150;

void setup()
{
  Serial.begin(9600);
  // put your setup code here, to run once:
}

void loop()
{
  int value = analogRead(ANALOG_PIN);
  // Serial.println(VOL_DOWN * ((100.0 - STANDARD_DEVIATION) / 100.0));
  delay(10);
  if (value >= VOL_DOWN * ((100.0 - STANDARD_DEVIATION) / 100.0) && value <= VOL_DOWN * ((100.0 + STANDARD_DEVIATION) / 100.0))
  {
    Serial.println("VOL DOWN: " + String(value) + "/" + VOL_DOWN);

    delay(VOL_DOWN_DELAY);
  }
  else if (value >= VOL_UP * ((100.0 - STANDARD_DEVIATION) / 100.0) && value <= VOL_UP * ((100.0 + STANDARD_DEVIATION) / 100.0))
  {
    Serial.println("VOL_UP: " + String(value) + "/" + VOL_UP);
    delay(VOL_UP_DELAY);
  }
  else if (value >= UP * ((100.0 - STANDARD_DEVIATION) / 100.0) && value <= UP * ((100.0 + STANDARD_DEVIATION) / 100.0))
  {
    Serial.println("UP: " + String(value) + "/" + UP);
    delay(UP_DELAY);
  }
  else if (value >= DOWN * ((100.0 - STANDARD_DEVIATION) / 100.0) && value <= DOWN * ((100.0 + STANDARD_DEVIATION) / 100.0))
  {
    Serial.println("DOWN: " + String(value) + "/" + DOWN);
    delay(DOWN_DELAY);
  }
  else if (value >= MODE * ((100.0 - STANDARD_DEVIATION) / 100.0) && value <= MODE * ((100.0 + STANDARD_DEVIATION) / 100.0))
  {
    Serial.println("MODE: " + String(value) + "/" + MODE);
    delay(MODE_DELAY);
  }
  else if (value >= MUTE * ((100.0 - STANDARD_DEVIATION) / 100.0) && value <= MUTE * ((100.0 + STANDARD_DEVIATION) / 100.0))
  {
    Serial.println("MUTE: " + String(value) + "/" + MUTE);
    delay(MUTE_DELAY);
  }
}