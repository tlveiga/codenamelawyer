#include "game.h"
#include <cstdio>


Game::Game(const int width, const int height) : width(width), height(height), size(width * height) {

	fprintf(stderr, "Game createfdd\n");

	this->timeDelta = 0;
	this->display = NULL;
	this->fps = 0;
	this->pixels = new int[size];
	for (int i = 0; i < size; i++)
		this->pixels[i] = 0;
}

Game::~Game() {
	delete this->pixels;

}

void Game::setdisplay(Display *display) {
	this->display = display;
	display->init(width, height);
}

void Game::setfps(int fps) {
	this->fps = fps;
	this->timeDelta = (1000 / fps);
}

int Game::getfps() {
	return this->fps;
}

void Game::update(long elapsed) {
	while (simulationTime < elapsed) {
		simulationTime += timeDelta;
		doupdate(simulationTime);
	}

	if (display != NULL) {
		display->setpixels(this->pixels, this->size);
		display->render();
	}
	//// Render

}

void Game::doupdate(long elaped) {
}
