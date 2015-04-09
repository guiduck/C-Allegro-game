#ifndef INITIAL_SCREEN_H_
#define INITIAL_SCREEN_H_

#include <stdio.h>
#include <string>
#include <allegro5/allegro.h>
#include <allegro5/allegro_image.h>

using namespace std;

class InitialScreen {

public:

	InitialScreen();

private:
	
	ALLEGRO_DISPLAY *display;
    int heigth;
	int width;


	void startAllegro();
	void startScreen(int heigth, int width);
	void colorScreen(unsigned int r, unsigned int g, unsigned int b);
	void refreshScreen();
	void startScreenLoop();
	void destroyScreen();
	void restScreen();

};



#endif /* INITIAL_SCREEN_H_*/

