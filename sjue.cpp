//Sydney Jue
#include <stdio.h>
#include <string.h>
#include <GL/glx.h>
#include "fonts.h"
#include <X11/Xlib.h>
#include "sjue.h"
#include <stdlib.h>

class Credits credits; //initial instance of credits class
//class Sjue sydney;
void Credits::showPage(int xres, int yres)
{
	Rect r;
	r.bot = yres -50;
	r.left = xres/2;
	ggprint16(&r, 0, 0x0088aaff, "Credits");
	r.bot = yres - 200;
	r.left = xres/2;
	ggprint16(&r, 0, 0x00fe4164, "Creators: Sydney Jue, Spencer Ledwell"); 
	r.bot = yres - 250;
	r.left = xres/2;
	ggprint16(&r,0, 0x00fe4146,"Sunol Rasapatirat, Antonio Milin");

}

/*void Sjue::sjue(int x)
{
 if(x > 5 && x < 20){
	 printf("Number Successful!\n");
	 return;
 }else{

	 printf("Number is not between 5 and 20 try again\n");
	 return;
 }

}*/
