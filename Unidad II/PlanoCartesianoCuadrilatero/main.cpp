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

    planoCartesiano();


    //triangulo 1 Primer Cuadrante
    glColor3f(1,1,0);
    glBegin(GL_QUADS);
        glVertex2f(0.7,0.3);
        glVertex2f(0.7,0.6);
        glVertex2f(0.4,0.6);
        glVertex2f(0.4,0.3);
    glEnd();



    //cuadrilatero 2 Segundo Cuadrante
    glColor3f(1,0,0);
    glBegin(GL_QUAD_STRIP);
        glVertex2f(-0.2,0.2);
        glVertex2f(-0.2,0.4);
        glVertex2f(-0.4,0.2);
        glVertex2f(-0.4,0.4);
    glColor3f(1,0,0.5);
        glVertex2f(-0.5,0.3);
        glVertex2f(-0.5,0.5);
    glColor3f(1,0.5,0.5);
        glVertex2f(-0.7,0.2);
        glVertex2f(-0.7,0.4);

    glEnd();

    //cuadrilatero 3 Tercer Cuandrante
    glColor3f(1,1,0.6);
    glBegin(GL_POLYGON);
        glVertex2f(-0.9,-0.2);
        glVertex2f(-0.6,-0.3);
        glVertex2f(-0.5,-0.4);
        glVertex2f(-0.5,-0.6);
        glVertex2f(-0.6,-0.7);
        glVertex2f(-0.9,-0.8);
    glEnd();


    glFlush();
}

int main(int argc, char** argv){

  glutInit(&argc, argv);
  glutInitWindowSize(1000, 1000);
  glutCreateWindow("Plano Cartesiano Cuadrilateros");
  glutDisplayFunc(display);
  glutMainLoop();

  return 0;
}
