#include <GL/gl.h>
#include <GL/glut.h>

void planoCartesiano(){

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

void display(){

    glClear(GL_COLOR_BUFFER_BIT);

    planoCartesiano();


    //figura 1 Primer Cuadrante
    glBegin(GL_LINE_STRIP);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(0.3,0.3);
    glVertex2f(0.6,0.7);
    glVertex2f(0.9,0.3);
    glVertex2f(0.6,0.3);
    glEnd();



    //figura 2 Segundo Cuadrante
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(-0.6,0.2);
    glVertex2f(-0.6,0.7);
    glVertex2f(-0.4,0.5);
    glVertex2f(-0.8,0.5);
    glEnd();

    //figura 3 Tercer Cuandrante
    glBegin(GL_LINE_LOOP);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(-0.7,-0.3);
    glVertex2f(-0.4,-0.3);
    glVertex2f(-0.4,-0.6);
    glVertex2f(-0.7,-0.6);
    glEnd();


    glFlush();
}

int main(int argc, char** argv){

  glutInit(&argc, argv);
  glutInitWindowSize(1000, 1000);
  glutCreateWindow("Plano Cartesiano Figuras");
  glutDisplayFunc(display);
  glutMainLoop();

  return 0;
}
