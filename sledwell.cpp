//Author: Spencer Ledwell
//Date: 02/24/2022
//CMPS3350: Group Project - My Source Code
#include <GL/glx.h>

bool sledwell(int n);

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

void sl_drawTitle()
{
  glColor3f(1.0f, 1.0f, 1.0f);
  glBegin(GL_QUADS);
    glTexCoord2f(0.0f, 1.0f);  glVertex2i(1200/2-128,    800-228);
    glTexCoord2f(0.0f, 0.0f); glVertex2i(1200/2-128,    800-100);
    glTexCoord2f(1.0f, 0.0f); glVertex2i(1200/2+128, 800-100);
    glTexCoord2f(1.0f, 1.0f);  glVertex2i(1200/2+128, 800-228);
  glEnd();
  glBindTexture(GL_TEXTURE_2D, 0);
}
