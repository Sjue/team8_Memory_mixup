//Author: Spencer Ledwell
//Date: 02/24/2022
//CMPS3350: Group Project - My Source Code
#include "sledwell.h"
#include <GL/glx.h>
#include <X11/Xlib.h>

bool sledwell(int n);

class Gamestate gamestate;

void Gamestate::showPage(int xres, int yres)
{
	Rect r;
	r.bot = 50;
	r.left = xres/2;
	ggprint16(&r, 0, 0x0088aaff, "Press B to return to the Main Menu");
}


int myMain()
{
//Adding some changes to see how github works

return 0;
}

bool sledwell(int n)
{
    if (n > 50) {
      return 1;
    } else {
      return 0;
    }
}
