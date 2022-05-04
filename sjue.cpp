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
	ggprint16(&r,0, 0x00000000,"Antonio Milin: Changed visual elements, put a new background and changed the color fade of the program,\n adjusted and edited item pictures and imported them into the bship.cpp");
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
