#include <SPI.h>
#include <Adafruit_GFX.h>
#include <Adafruit_PCD8544.h>

#include "src/display.h"

class NokiaDisplay : Display
{
  private:
    Adafruit_PCD8544 *display;

  public:
    NokiaDisplay(int dc, int cs, int rst)
    {
      display = new Adafruit_PCD8544(dc, cs, rst);
      display->begin();
      display->setContrast(60);  // Adjust for your display
      clear();
    }

    void drawPixel(int x, int y, int val) {
      display->drawPixel(x, y, val);
    }
    void render() {
      display->display();
    }
    void clear() {
      display->clearDisplay();
    }


    ~NokiaDisplay() {
      delete display;
    }
};
