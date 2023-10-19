#include <GL/gl.h>
#include <GL/glut.h>

void display3(){

  glClear(GL_COLOR_BUFFER_BIT);

  // Dibujar una línea Vertical
  glColor3f(1.0f, 0.0f, 1.0f);
  glBegin(GL_LINES);
  glVertex2f(5.0, 0.0);
  glVertex2f(-5.0, 0.0);
  glEnd();

  glBegin(GL_LINES);
  glVertex2f(0.0, 5.0);
  glVertex2f(0.0, -5.0);
  glEnd();



  glFlush();
}

int mainn(int argc, char** argv){

  glutInit(&argc, argv);
  glutInitWindowSize(500, 500);
  glutCreateWindow("Ambas Lineas");
  glutDisplayFunc(display3);
  glutMainLoop();

  return 0;
}

