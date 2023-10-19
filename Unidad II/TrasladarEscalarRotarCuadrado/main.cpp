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

void cuadrilatero(float x, float y, float sz){

    glBegin(GL_QUADS);
    glVertex2f(x, y - sz);
    glVertex2f(x, y);
    glVertex2f(x+sz, y);
    glVertex2f(x+sz, y-sz);
    glEnd();
}


void display(){

    planoCartesiano();

    glLoadIdentity();//sustituir la matriz actual por la matriz identidad

    //Primera Posicion (primer cuadrante)
    glPushMatrix();
    cuadrilatero(0.4,0.65,0.4);
    glPopMatrix();

    glEnd();

    //Segunda Posicion (segundo cuadrante)
    glColor3f(0.5,1,0);
    glPushMatrix();
    glTranslatef(-1.0, 0.0, 0.0); // Trasladar al segundo cuadrante
    cuadrilatero(0.4,0.65,0.4);
    glPopMatrix();
    glEnd();

    //Tercera Posicion (Tecer cuadrante)
    glColor3f(0.9,1,0);
    glPushMatrix();
    glTranslatef(-0.8, -0.8, 0.0); // Trasladar al segundo cuadrante
    glScalef(0.7,0.7,0); //Escalar el cuadrado
    cuadrilatero(0.4,0.65,0.4);
    glPopMatrix();
    glEnd();

    //Cuarta Posicion (Cuarto Cuadrante)

    glColor3f(0.5,1,0.5);
    glPushMatrix();
    glTranslatef(0.52, -1.0, 0.0);
    glRotatef(45.0f,0.0f,0.0f,0.1f);
    glScalef(0.7,0.7,0);
    cuadrilatero(0.4,0.65,0.4);
    glPopMatrix();
    glEnd();



//    //Primera Posi1.9, -0.28, 0.0cion (primer cuadrante)
//      glBegin(GL_QUADS);
//        glVertex2f(0.7,0.3);
//        glVertex2f(0.7,0.6);
//        glVertex2f(0.4,0.6);
//        glVertex2f(0.4,0.3);
//
//    glEnd();
//
//    glTranslatef(-1.0, 0.0, 0.0); // Trasladar al segundo cuadrante
//
//    //Segunda Posicion (segundo cuadrante)
//    glBegin(GL_QUADS);
//    glColor3f(0.5,1,0);
//        glVertex2f(0.7,0.3);
//        glVertex2f(0.7,0.6);
//        glVertex2f(0.4,0.6);
//        glVertex2f(0.4,0.3);
//    glEnd();
//
//    glTranslatef(0.2, -0.8, 0.0); // Trasladar al segundo cuadrante
//
//    glScalef(0.7,0.7,0); //Escalar el cuadrado
//
//    //Tercera Posicion (Tercer cuadrante)
//    glBegin(GL_QUADS);
//    glColor3f(0.9,1,0);
//        glVertex2f(0.7,0.3);
//        glVertex2f(0.7,0.6);
//        glVertex2f(0.4,0.6);
//        glVertex2f(0.4,0.3);
//    glEnd();
//
//    glTranslatef(1.9, -0.28, 0.0); // Trasladar al segundo cuadrante
//
//    glRotatef(45.0f,0.0f,0.0f,0.1f);
//
//     //Cuarta Posicion (Cuarto cuadrante)
//    glBegin(GL_QUADS);
//    glColor3f(0.9,0.6,0);
//        glVertex2f(0.7,0.3);
//        glVertex2f(0.7,0.6);
//        glVertex2f(0.4,0.6);
//        glVertex2f(0.4,0.3);
//    glEnd();
//
//    glLoadIdentity();
//



    glFlush();
}

int main(int argc, char** argv){

  glutInit(&argc, argv);
  glutInitWindowSize(1000, 1000);
  glutCreateWindow("Plano Cartesiano Cuadrilatero");
  glutDisplayFunc(display);
  glutMainLoop();

  return 0;
}
