//Sydney Jue
#include <stdio.h>
#include <string.h>
#include <GL/glx.h>
#include "fonts.h"
#include <X11/Xlib.h>
#include "sjue.h"
#include <stdlib.h>
#include <cstdlib>
#include <ctime>


class Credits credits; //initial instance of credits class
class Sjue mixup;
void Credits::showPage(int xres, int yres)
{
	Rect r;
	r.bot = yres -50;
	r.left = xres/2;
	ggprint16(&r, 0, 0x00000000, "Credits");
	r.bot = yres - 200;
	r.left = xres/2;
	ggprint16(&r, 0, 0x00000000, "Creators: Sydney Jue, Spencer Ledwell"); 
	r.bot = yres - 250;
	r.left = xres/2;
	ggprint16(&r,0, 0x00000000,"Sunol Rasapatirat, Antonio Milin");

	r.bot = yres - 350;
	r.left = xres/2;
	ggprint16(&r,0, 0x00000000, "Spencer Ledwell: Created all buttons on main menu screen, imported textures to the game and added game state that starts the game.");
	r.bot = yres - 450;
	r.left = xres/2;
	ggprint16(&r,0, 0x00000000,"Sydney Jue: Got rid of grids on main menu and created Credits page");
	//antonio
	r.bot = yres - 550;
	r.left = xres/2;
	ggprint16(&r,0, 0x00000000,"Antonio Milin: Changed visual elements, put a new background and changed the color fade of the program,");
	r.bot = yres - 570;
	ggprint16(&r,0, 0x00000000," adjusted and edited item pictures and imported them into the bship.cpp");
}

int Sjue::randos()
{
//	srand(time(NULL));
	int randNUM = (rand()% 3) + 1;
//	printf("Num: %i\n", randNUM);
	return randNUM;
}

//}
