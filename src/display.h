#ifndef _display_h_
#define _display_h_


class Display
{
public:
	virtual void init(int width, int height) = 0;
	virtual void setpixels(int *pixels, int size) = 0;
	virtual void render() = 0;
	virtual void clear() = 0;
};

#endif