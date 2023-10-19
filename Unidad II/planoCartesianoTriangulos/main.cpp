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
    glBegin(GL_TRIANGLES);
        glVertex2f(0.8,0.1);
        glVertex2f(0.4,0.1);
        glVertex2f(0.6,0.4);
    glEnd();



    //triangulo 2 Segundo Cuadrante
    glColor3f(0,1,0);
    glBegin(GL_TRIANGLE_STRIP);
        glVertex2f(-0.1,0.1);
        glVertex2f(-0.6,0.1);
        glVertex2f(-0.3,0.3);
    glColor3f(0.5,0.5,1);
        glVertex2f(-0.9,0.3);
    glColor3f(50,50,0);
        glVertex2f(-0.6,0.4);
    glEnd();

    //figura 3 Cuarto Cuandrante
    glColor3f(0,1,1);
    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(0.5,-0.5);
        glVertex2f(0.6,-0.7);
        glVertex2f(0.7,-0.4);
    glColor3f(1,1,0);
        glVertex2f(0.4,-0.4);
    glColor3f(1,0.5,0);
        glVertex2f(0.2,-0.5);
    glColor3f(0.5,1,0);
        glVertex2f(0.4,-0.8);
    glColor3f(0.5,0.5,0);
        glVertex2f(0.6,-0.8);
    glColor3f(1,1,0.5);
        glVertex2f(0.6,-0.7);
    glColor3f(0.5,1,0.5);
        glVertex2f(0.6,-0.8);
    glEnd();


    glFlush();
}

int main(int argc, char** argv){

  glutInit(&argc, argv);
  glutInitWindowSize(1000, 1000);
  glutCreateWindow("Plano Cartesiano Triangulos");
  glutDisplayFunc(display);
  glutMainLoop();

  return 0;
}
