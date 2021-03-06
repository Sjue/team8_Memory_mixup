//Author: Spencer Ledwell
//Date: 02/24/2022
//CMPS3350: Group Project - My Source Code
#include "sledwell.h"
#include <stdio.h>
#include <string.h>
#include <GL/glx.h>
#include "fonts.h"
#include <X11/Xlib.h>
#include "sjue.h"
#include <stdlib.h>

bool sledwell(int n);

class Gamestate gamestate;

void Gamestate::printButtonGuide(int xres, int yres)
{
	Rect r;
	r.bot = 20;
	r.left = xres/2;
	ggprint16(&r, 0, 0x00000000, "ESC - Main Menu");
}



bool sledwell(int n)
{
    if (n > 50) {
      return 1;
    } else {
      return 0;
    }
}
