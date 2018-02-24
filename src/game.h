#ifndef _game_h_
#define _game_h_

#include "display.h"

///
/// Controls, states and time
///
class Game {
protected:
	Display * display;
	const int width, height, size;

	long simulationTime;
	int timeDelta, fps;

	int *pixels;
	virtual void doupdate(long elaped);

public:
	Game(const int width, const int height);
	~Game();

	void setdisplay(Display *display);
	virtual void update(long elapsed);

	void setfps(int fps);
	int getfps();

};

#endif