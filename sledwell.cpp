//Author: Spencer Ledwell
//Date: 02/24/2022
//CMPS3350: Group Project - My Source Code
#include "sledwell.h"
#include <GL/glx.h>


bool sledwell(int n);

class Gamestate gamestate;

void Gamestate::showPage(int xres, int yres, GLuint bshipTexture)
{
	//bind Background Texture again
	glBindTexture(GL_TEXTURE_2D, bshipTexture);
	glColor3f(1.0f, 1.0f, 1.0f);
	glBegin(GL_QUADS);
		glTexCoord2f(0.0f, 1.0f);  glVertex2i(0,    yres);
		glTexCoord2f(0.0f, 0.0f); glVertex2i(0,    0);
		glTexCoord2f(1.0f, 0.0f); glVertex2i(xres, 0);
		glTexCoord2f(1.0f, 1.0f);  glVertex2i(xres, yres);
	glEnd();
	glBindTexture(GL_TEXTURE_2D, 0);

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
