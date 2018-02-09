#ifndef _display_h_
#define _display_h_

class Display
{
  virtual void drawPixel(int x, int y, int val) = 0;
  virtual void render() = 0;
  virtual void clear() = 0;
};

#endif