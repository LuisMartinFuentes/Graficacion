#include <GL/gl.h>
#include <GL/glut.h>

void display1(){

  glClear(GL_COLOR_BUFFER_BIT);

  // Dibujar una línea Vertical
  glColor3f(1.0f, 0.0f, 1.0f);
  glBegin(GL_LINES);
  glVertex2f(0.0, 5.0);
  glVertex2f(0.0, -5.0);
  glEnd();


  glFlush();
}

int main1(int argc, char** argv){

  glutInit(&argc, argv);
  glutInitWindowSize(500, 500);
  glutCreateWindow("Línea Vertical");
  glutDisplayFunc(display1);
  glutMainLoop();

  return 0;
}
