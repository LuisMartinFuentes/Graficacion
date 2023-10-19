#include <GL/gl.h>
#include <GL/glut.h>
#include <cmath>
#define M_PI 3.14159265358979323846
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
//
//void triangulos(float x, float y, float size){
//
//    glBegin(GL_TRIANGLES);
//    glVertex2f(x, y); // Vértice inferior
//    glVertex2f(x + size, y); // Vértice inferior derecho
//    glVertex2f(x + size / 2, y + size * sqrt(3.0) / 2); // Vértice superior (triángulo equilátero)
//    glEnd();
//
//}

void estrella(float x, float y, float sz){

glPushMatrix();
 glRotatef(90.0f,0.0f,0.0f,0.1f);

   glBegin(GL_TRIANGLES);
    for (int i = 0; i < 6; i++) {
        float angle1 = i * 2 * M_PI / 6;
        float angle2 = (i + 2) * 2 * M_PI / 6;
        float x1 = x + sz * cos(angle1);
        float y1 = y + sz * sin(angle1);
        float x2 = x + sz * cos(angle2);
        float y2 = y + sz * sin(angle2);
        glVertex2f(x, y);
        glVertex2f(x1, y1);
        glVertex2f(x2, y2);
    }
    glEnd();

    glPopMatrix();

}
void display(){

    planoCartesiano();
    glLoadIdentity();//sustituir la matriz actual por la matriz identidad

    //Primera Posicion (primer cuadrante)
    glPushMatrix();

    estrella(0.5,-0.5,0.3);
    glPopMatrix();
    glEnd();

    //Segunda Posicion (segundo cuadrante)
    glColor3f(0.5,1,0);
    glPushMatrix();
    glTranslatef(-1.0, 0.0, 0.0); // Trasladar al segundo cuadrante
    estrella(0.5,-0.5,0.3);
    glPopMatrix();
    glEnd();

    //Tercera Posicion (Tercer cuadrante)
    glColor3f(0.9,1,0);
    glPushMatrix();
    glTranslatef(-0.85, -.85, 0.0); // Trasladar al segundo cuadrante
    glScalef(0.7,0.7,0); //Escalar la Estrella
    estrella(0.5,-0.5,0.3);
    glPopMatrix();
    glEnd();


    glColor3f(0.5,1,0.5);
    glPushMatrix();
    glTranslatef(0.08, -.70, 0.0);
    glRotatef(-20.0f,0.0f,0.0f,0.1f);
    glScalef(0.7,0.7,0);
    estrella(0.5,-0.5,0.3);
    glPopMatrix();
    glEnd();

    glColor3f(0.2,0.5,0.5);
    glPushMatrix();
    glTranslatef(-0.75, -0.75, 0.0);
    glScalef(1.5, 1.5,0);
    estrella(0.5,-0.5,0.3);
    glPopMatrix();
    glEnd();



    glFlush();

}



/*void display(){

    planoCartesiano();

    //Primera Posicion (primer cuadrante)

    glColor3f(1,1,0);
      glBegin(GL_TRIANGLES);
        glVertex2f(0.7,0.4);
        glVertex2f(0.3,0.4);
        glVertex2f(0.5,0.7);
    glEnd();
    glColor3f(1,1,0);
      glBegin(GL_TRIANGLES);
        glVertex2f(0.3,0.6);
        glVertex2f(0.7,0.6);
        glVertex2f(0.5,0.3);
    glEnd();

    glTranslatef(-1.0, 0.0, 0.0); // Trasladar al segundo cuadrante

    //Segunda Posicion (segundo cuadrante)
     glColor3f(1,1,0);
      glBegin(GL_TRIANGLES);
        glVertex2f(0.7,0.4);
        glVertex2f(0.3,0.4);
        glVertex2f(0.5,0.7);
    glEnd();
    glColor3f(1,1,0);
      glBegin(GL_TRIANGLES);
        glVertex2f(0.3,0.6);
        glVertex2f(0.7,0.6);
        glVertex2f(0.5,0.3);
    glEnd();

    glTranslatef(0.2, -0.8, 0.0); // Trasladar al segundo cuadrante

    glScalef(0.7,0.7,0); //Escalar la Estrella

   //Tercera Posicion (Tercer cuadrante)
     glColor3f(1,1,0);
          glBegin(GL_TRIANGLES);
            glVertex2f(0.7,0.4);
            glVertex2f(0.3,0.4);
            glVertex2f(0.5,0.7);
        glEnd();
        glColor3f(1,1,0);
          glBegin(GL_TRIANGLES);
            glVertex2f(0.3,0.6);
            glVertex2f(0.7,0.6);
            glVertex2f(0.5,0.3);
        glEnd();

    glTranslatef(1.9, -0.28, 0.0); // Trasladar al segundo cuadrante

    glRotatef(45.0f,0.0f,0.0f,0.1f);

    //Cuarta Posicion (Cuarto cuadrante)
    glBegin(GL_QUADS);
     glColor3f(1,1,0);
          glBegin(GL_TRIANGLES);
            glVertex2f(0.7,0.4);
            glVertex2f(0.3,0.4);
            glVertex2f(0.5,0.7);
        glEnd();
        glColor3f(1,1,0);
          glBegin(GL_TRIANGLES);
            glVertex2f(0.3,0.6);
            glVertex2f(0.7,0.6);
            glVertex2f(0.5,0.3);
        glEnd();

        glTranslatef(-1.65, 1.54, 0.0); // Trasladar al segundo cuadrante
         glScalef(3.0,3.0,0); //Escalar la Estrella
        glRotatef(-45.0f,0.0f,0.0f,0.1f); //Rotar la Estrella

         glBegin(GL_QUADS);
     glColor3f(1,1,0);
          glBegin(GL_TRIANGLES);
            glVertex2f(0.7,0.4);
            glVertex2f(0.3,0.4);
            glVertex2f(0.5,0.7);
        glEnd();
        glColor3f(1,1,0);
          glBegin(GL_TRIANGLES);
            glVertex2f(0.3,0.6);
            glVertex2f(0.7,0.6);
            glVertex2f(0.5,0.3);
        glEnd();




    glFlush();
}*/

int main(int argc, char** argv){

  glutInit(&argc, argv);
  glutInitWindowSize(1000, 1000);
  glutCreateWindow("ESTRELLA");
  glutDisplayFunc(display);
  glutMainLoop();

  return 0;
}

