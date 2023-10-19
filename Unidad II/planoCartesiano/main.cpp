#include <GL/gl.h>
#include <GL/glut.h>

void display(){

  glClear(GL_COLOR_BUFFER_BIT);

  // Dibujar el plano cartesiano
    glColor3f(1.0f, 0.0f, 1.0f); // Color morado
    //Eje X
    glBegin(GL_LINES);
    glVertex2f(-0.9, 0.0);
    glVertex2f(0.9, 0.0);

    //Eje Y
    glVertex2f(0.0, -0.9);
    glVertex2f(0.0, 0.9);
    glEnd();


  glFlush();
}

int main(int argc, char** argv){

  glutInit(&argc, argv);
  glutInitWindowSize(1000, 1000);
  glutCreateWindow("Plano Cartesiano");
  glutDisplayFunc(display);
  glutMainLoop();

  return 0;
}
