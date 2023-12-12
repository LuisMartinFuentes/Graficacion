#include <GL/gl.h>
#include <GL/glut.h>

void display2(){

  glClear(GL_COLOR_BUFFER_BIT);

  // Dibujar una línea Horizontal
  glColor3f(1.0f, 0.0f, 1.0f);
  glBegin(GL_LINES);
  glVertex2f(5.0, 0.0);
  glVertex2f(-5.0, 0.0);
  glEnd();

  glFlush();
}

int main2(int argc, char** argv){

  glutInit(&argc, argv);
  glutInitWindowSize(500, 500);
  glutCreateWindow("Línea Horizontal");
  glutDisplayFunc(display2);
  glutMainLoop();

  return 0;
}
