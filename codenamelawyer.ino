#include "src/game.h"

#include "displaywrapper.h"

const int8_t RST_PIN = D2;
const int8_t CE_PIN = D1;
const int8_t DC_PIN = D6;

NokiaDisplay display = NokiaDisplay(DC_PIN, CE_PIN, RST_PIN);

void setup()
{
  Serial.begin(115200);
  Serial.println("Start");
}

void loop()
{
  for (int x = 0; x < 84; x++)
  {
    for (int y = 0; y < 48; y++)
    {
      display.drawPixel(x, y, (x + y) % 2);
    }
  }
  display.render();
  Serial.println("Print");
  delay(1000);
}
