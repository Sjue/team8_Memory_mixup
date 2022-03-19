//Sydney Jue
#include <stdio.h>
#include <string.h>
#include <GL/glx.h>
#include "fonts.h"
#include <X11/Xlib.h>
#include "sjue.h"

class Credits credits; //initial instance of credits class

void Credits::showPage(int xres, int yres)
{
	Rect r;
	r.bot = yres -50;
	r.left = xres/2;
	ggprint16(&r, 0, 0x0088aaff, "Credits");
}
