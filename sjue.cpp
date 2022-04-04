//Sydney Jue
#include <stdio.h>
#include <string.h>
#include <GL/glx.h>
#include "fonts.h"
#include <X11/Xlib.h>
#include "sjue.h"

class Credits credits; //initial instance of credits class
int x = (rand()%5)-2;
void Credits::showPage(int xres, int yres)
{
	Rect r;
	r.bot = yres -50;
	r.left = xres/2;
	ggprint16(&r, 0, 0x0088aaff, "Credits");
	r.bot = yres - 200;
	r.left = xres/2;
	ggprint16(&r, 0, 0x00fe4164, "Creators: Sydney Jue, Spencer Ledwell, Sunol Rasapatirat, Antonio Milin");

}

void sjue(int x)
{
 if(x ==0){
	 printf("Is complete\n");
 }else{

	 printf("Number does not equal 0 try again\n");
 }

}
