#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>

#define he 0.12
#define b 0.05
#define a 0.05
#define ha 0.05
#define l 0.05
#define f 0.05

bool empezar=0;
int velocidad=0;
double rotate_x=0;
//double rotate_y=0;

void giro(){
    rotate_x+=velocidad;
    if(rotate_x>360)rotate_x=0;
    glutPostRedisplay();
}

void reshape(int w, int h){
    glViewport(0, 0, w, h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    //gluPerspective(100, (double)w / (double)h, 1, 200);
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    gluLookAt(0, 0, 1, 0, 0, 0, 0, 1, 0);
    glPopMatrix();
}

void skin(){

    ///Cabeza Inicio
   // Cara Trasera
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_QUADS);
    glVertex3f(0.1, 0.4, -he);
    glVertex3f(-0.1, 0.4, -he);
    glVertex3f(-0.1, 0.8, -he);
    glVertex3f(0.1, 0.8, -he);
    glEnd();

    // Cara Frontal
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex3f(0.1, 0.4, he);
    glVertex3f(-0.1, 0.4, he);
    glVertex3f(-0.1, 0.8, he);
    glVertex3f(0.1, 0.8, he);
    glEnd();

    // Cara derecha
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex3f(0.1, 0.4, -he);
    glVertex3f(0.1, 0.4, he);
    glVertex3f(0.1, 0.8, he);
    glVertex3f(0.1, 0.8, -he);
    glEnd();

    // Cara izquierda
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex3f(-0.1, 0.4, -he);
    glVertex3f(-0.1, 0.4, he);
    glVertex3f(-0.1, 0.8, he);
    glVertex3f(-0.1, 0.8, -he);
    glEnd();

    // Cara superior
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex3f(0.1, 0.8, -he);
    glVertex3f(-0.1, 0.8, -he);
    glVertex3f(-0.1, 0.8, he);
    glVertex3f(0.1, 0.8, he);
    glEnd();

    // Cara inferior
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_QUADS);
    glVertex3f(0.1, 0.4, -he);
    glVertex3f(-0.1, 0.4, -he);
    glVertex3f(-0.1, 0.4, he);
    glVertex3f(0.1, 0.4, he);
    glEnd();

    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex3f(-0.02, 0.64, -0.121);
    glVertex3f(-0.08, 0.64, -0.121);
    glVertex3f(-0.08, 0.76, -0.121);
    glVertex3f(-0.02, 0.76, -0.121);
    glEnd();

    glColor3f(0.8, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex3f(-0.02, 0.64, -0.1211);
    glVertex3f(-0.052, 0.64, -0.1211);
    glVertex3f(-0.052, 0.705, -0.1211);
    glVertex3f(-0.02, 0.705, -0.1211);
    glEnd();

     glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex3f(0.02, 0.64, -0.121);
    glVertex3f(0.08, 0.64, -0.121);
    glVertex3f(0.08, 0.76, -0.121);
    glVertex3f(0.02, 0.76, -0.121);
    glEnd();

    glColor3f(0.8, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex3f(0.02, 0.64, -0.1211);
    glVertex3f(0.052, 0.64, -0.1211);
    glVertex3f(0.052, 0.705, -0.1211);
    glVertex3f(0.02, 0.705, -0.1211);
    glEnd();

    glColor3f(0.8, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex3f(0.08, 0.64, -0.121);
    glVertex3f(0.1, 0.64, -0.121);
    glVertex3f(0.1, 0.6, -0.121);
    glVertex3f(0.08, 0.6, -0.121);
    glEnd();

    glColor3f(0.8, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex3f(0.08, 0.6, -0.121);
    glVertex3f(0.06, 0.6, -0.121);
    glVertex3f(0.06, 0.56, -0.121);
    glVertex3f(0.08, 0.56, -0.121);
    glEnd();

    glColor3f(0.8, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex3f(0.08, 0.56, -0.121);
    glVertex3f(0.1, 0.56, -0.121);
    glVertex3f(0.1, 0.52, -0.121);
    glVertex3f(0.08, 0.52, -0.121);
    glEnd();

     glColor3f(0.8, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex3f(-0.08, 0.64, -0.121);
    glVertex3f(-0.1, 0.64, -0.121);
    glVertex3f(-0.1, 0.6, -0.121);
    glVertex3f(-0.08, 0.6, -0.121);
    glEnd();

    glColor3f(0.8, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex3f(-0.08, 0.6, -0.121);
    glVertex3f(-0.06, 0.6, -0.121);
    glVertex3f(-0.06, 0.56, -0.121);
    glVertex3f(-0.08, 0.56, -0.121);
    glEnd();

    glColor3f(0.8, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex3f(-0.08, 0.56, -0.121);
    glVertex3f(-0.1, 0.56, -0.121);
    glVertex3f(-0.1, 0.52, -0.121);
    glVertex3f(-0.08, 0.52, -0.121);
    glEnd();

    glColor3f(0.8, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex3f(-0.06, 0.56, -0.121);
    glVertex3f(0.06, 0.56, -0.121);
    glVertex3f(0.06, 0.52, -0.121);
    glVertex3f(-0.06, 0.52, -0.121);
    glEnd();

    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex3f(-0.06, 0.52, -0.121);
    glVertex3f(-0.04, 0.52, -0.121);
    glVertex3f(-0.04, 0.4, -0.121);
    glVertex3f(-0.06, 0.4, -0.121);
    glEnd();

    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex3f(0.06, 0.52, -0.121);
    glVertex3f(0.04, 0.52, -0.121);
    glVertex3f(0.04, 0.4, -0.121);
    glVertex3f(0.06, 0.4, -0.121);
    glEnd();


    ///Cabeza Final

    ///CUERPO INICIO
    glColor3f(0.196, 0.196, 0.196);
    glBegin(GL_QUADS);
    glVertex3f(0.11, -0.15, b);
    glVertex3f(-0.11, -0.15, b);
    glVertex3f(-0.11, 0.4, b);
    glVertex3f(0.11, 0.4, b);
    glEnd();

    glColor3f(0.196, 0.196, 0.196);
    glBegin(GL_QUADS);
    glVertex3f(0.11, -0.15, -b);
    glVertex3f(-0.11, -0.15, -b);
    glVertex3f(-0.11, 0.4, -b);
    glVertex3f(0.11, 0.4, -b);
    glEnd();

    glColor3f(0.196, 0.196, 0.196);
    glBegin(GL_QUADS);
    glVertex3f(0.11, -0.15, b);
    glVertex3f(-0.11, -0.15, -b);
    glVertex3f(-0.11, 0.4, -b);
    glVertex3f(0.11, 0.4, b);
    glEnd();

    glColor3f(0.196, 0.196, 0.196);
    glBegin(GL_QUADS);
    glVertex3f(0.11, -0.15, b);
    glVertex3f(-0.11, -0.15, -b);
    glVertex3f(-0.11, 0.4, -b);
    glVertex3f(0.11, 0.4, b);
    glEnd();

    glColor3f(0.196, 0.196, 0.196);
    glBegin(GL_QUADS);
    glVertex3f(0.11, -0.15, b);
    glVertex3f(-0.11, -0.15, b);
    glVertex3f(-0.11, 0.4, -b);
    glVertex3f(0.11, 0.4, -b);
    glEnd();

    glColor3f(0.196, 0.196, 0.196);
    glBegin(GL_QUADS);
    glVertex3f(0.11, -0.15, b);
    glVertex3f(-0.11, -0.15, b);
    glVertex3f(-0.11, 0.4, -b);
    glVertex3f(0.11, 0.4, -b);
    glEnd();

     glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex3f(0.06, 0.32, -0.051);
    glVertex3f(0.04, 0.32, -0.051);
    glVertex3f(0.04, 0.4, -0.051);
    glVertex3f(0.06, 0.4, -0.051);
    glEnd();

    glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex3f(-0.06, 0.32, -0.051);
    glVertex3f(-0.04, 0.32, -0.051);
    glVertex3f(-0.04, 0.4, -0.051);
    glVertex3f(-0.06, 0.4, -0.051);
    glEnd();

    glColor3f(0.8, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex3f(-0.04, 0.36, -0.051);
    glVertex3f(0.04, 0.36, -0.051);
    glVertex3f(0.04, 0.4, -0.051);
    glVertex3f(-0.04, 0.4, -0.051);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_QUADS);
    glVertex3f(-0.04, 0.36, -0.051);
    glVertex3f(0.04, 0.36, -0.051);
    glVertex3f(0.04, 0.32, -0.051);
    glVertex3f(-0.04, 0.32, -0.051);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_QUADS);
    glVertex3f(-0.06, 0.27, -0.051);
    glVertex3f(0.06, 0.27, -0.051);
    glVertex3f(0.06, 0.32, -0.051);
    glVertex3f(-0.06, 0.32, -0.051);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_QUADS);
    glVertex3f(-0.04, 0.27, -0.051);
    glVertex3f(0.04, 0.27, -0.051);
    glVertex3f(0.04, 0.235, -0.051);
    glVertex3f(-0.04, 0.235, -0.051);
    glEnd();

    glColor3f(.0, .0, .0);
    glBegin(GL_QUADS);
    glVertex3f(-0.04, 0.193, -0.051);
    glVertex3f(0.04, 0.193, -0.051);
    glVertex3f(0.04, 0.235, -0.051);
    glVertex3f(-0.04, 0.235, -0.051);
    glEnd();

    glColor3f(.0, .0, .0);
    glBegin(GL_QUADS);
    glVertex3f(0.04, 0.27, -0.051);
    glVertex3f(0.06, 0.27, -0.051);
    glVertex3f(0.06, 0.235, -0.051);
    glVertex3f(0.04, 0.235, -0.051);
    glEnd();

    glColor3f(.0, .0, .0);
    glBegin(GL_QUADS);
    glVertex3f(-0.06, 0.27, -0.051);
    glVertex3f(-0.08, 0.27, -0.051);
    glVertex3f(-0.08, 0.32, -0.051);
    glVertex3f(-0.06, 0.32, -0.051);
    glEnd();

    glColor3f(.0, .0, .0);
    glBegin(GL_QUADS);
    glVertex3f(-0.04, 0.27, -0.051);
    glVertex3f(-0.06, 0.27, -0.051);
    glVertex3f(-0.06, 0.235, -0.051);
    glVertex3f(-0.04, 0.235, -0.051);
    glEnd();

    glColor3f(.0, .0, .0);
    glBegin(GL_QUADS);
    glVertex3f(0.06, 0.27, -0.051);
    glVertex3f(0.08, 0.27, -0.051);
    glVertex3f(0.08, 0.32, -0.051);
    glVertex3f(0.06, 0.32, -0.051);
    glEnd();

    glColor3f(.0, .0, .0);
    glBegin(GL_QUADS);
    glVertex3f(0.08, 0.36, -0.051);
    glVertex3f(0.1, 0.36, -0.051);
    glVertex3f(0.1, 0.32, -0.051);
    glVertex3f(0.08, 0.32, -0.051);
    glEnd();

    glColor3f(.0, .0, .0);
    glBegin(GL_QUADS);
    glVertex3f(-0.08, 0.36, -0.051);
    glVertex3f(-0.1, 0.36, -0.051);
    glVertex3f(-0.1, 0.32, -0.051);
    glVertex3f(-0.08, 0.32, -0.051);
    glEnd();

    glColor3f(.0, .0, .0);
    glBegin(GL_QUADS);
    glVertex3f(0.06, 0.36, -0.051);
    glVertex3f(0.08, 0.36, -0.051);
    glVertex3f(0.08, 0.4, -0.051);
    glVertex3f(0.06, 0.4, -0.051);
    glEnd();

    glColor3f(.0, .0, .0);
    glBegin(GL_QUADS);
    glVertex3f(-0.06, 0.36, -0.051);
    glVertex3f(-0.08, 0.36, -0.051);
    glVertex3f(-0.08, 0.4, -0.051);
    glVertex3f(-0.06, 0.4, -0.051);
    glEnd();

    glColor3f(.0, .0, .0);
    glBegin(GL_QUADS);
    glVertex3f(-0.04, 0.193, -0.051);
    glVertex3f(-0.0, 0.193, -0.051);
    glVertex3f(-0.0, -0.12, -0.051);
    glVertex3f(-0.04, -0.12, -0.051);
    glEnd();

    glColor3f(.0, .0, .0);
    glBegin(GL_QUADS);
    glVertex3f(0.04, -0.08, -0.051);
    glVertex3f(-0.0, -0.08, -0.051);
    glVertex3f(-0.0, -0.12, -0.051);
    glVertex3f(0.04, -0.12, -0.051);
    glEnd();

    glColor3f(.0, .0, .0);
    glBegin(GL_QUADS);
    glVertex3f(0.04, -0.02, -0.051);
    glVertex3f(-0.0, -0.02, -0.051);
    glVertex3f(-0.0, 0.02, -0.051);
    glVertex3f(0.04, 0.02, -0.051);
    glEnd();

    glColor3f(.0, .0, .0);
    glBegin(GL_QUADS);
    glVertex3f(0.04, 0.13, -0.051);
    glVertex3f(-0.0, 0.13, -0.051);
    glVertex3f(-0.0, 0.09, -0.051);
    glVertex3f(0.04, 0.09, -0.051);
    glEnd();

    glColor3f(1.0, .0, .0);
    glBegin(GL_QUADS);
    glVertex3f(0.11, 0.193, -0.051);
    glVertex3f(0.06, 0.193, -0.051);
    glVertex3f(0.06, 0.235, -0.051);
    glVertex3f(0.11, 0.235, -0.051);
    glEnd();

    glColor3f(.0, .0, .0);
    glBegin(GL_QUADS);
    glVertex3f(0.11, -0.15, -0.051);
    glVertex3f(0.04, -0.15, -0.051);
    glVertex3f(0.04, -0.12, -0.051);
    glVertex3f(0.11, -0.12, -0.051);
    glEnd();

    glColor3f(.0, .0, .0);
    glBegin(GL_QUADS);
    glVertex3f(-0.11, -0.15, -0.051);
    glVertex3f(-0.04, -0.15, -0.051);
    glVertex3f(-0.04, -0.12, -0.051);
    glVertex3f(-0.11, -0.12, -0.051);
    glEnd();

    glColor3f(.0, .0, .0);
    glBegin(GL_QUADS);
    glVertex3f(0.11, 0.193, -0.051);
    glVertex3f(0.06, 0.193, -0.051);
    glVertex3f(0.06, 0.235, -0.051);
    glVertex3f(0.11, 0.235, -0.051);
    glEnd();

    glColor3f(.0, .0, .0);
    glBegin(GL_QUADS);
    glVertex3f(-0.11, -0.15, 0.051);
    glVertex3f(0.11, -0.15, 0.051);
    glVertex3f(0.11, -0.12, 0.051);
    glVertex3f(-0.11, -0.12, 0.051);
    glEnd();

    glColor3f(.0, .0, .0);
    glBegin(GL_QUADS);
    glVertex3f(-0.11, -0.15, 0.051);
    glVertex3f(0.11, -0.15, -0.051);
    glVertex3f(0.11, -0.12, -0.051);
    glVertex3f(-0.11, -0.12, 0.051);
    glEnd();

    glColor3f(.0, .0, .0);
    glBegin(GL_QUADS);
    glVertex3f(-0.11, -0.15, 0.051);
    glVertex3f(0.11, -0.15, -0.051);
    glVertex3f(0.11, -0.12, -0.051);
    glVertex3f(-0.11, -0.12, 0.051);
    glEnd();


    ///CUERPO FINAL

    ///BRAZO IZQUIERO INICIO
    glColor3f(0.196, 0.196, 0.196);
    glBegin(GL_QUADS);
    glVertex3f(-0.19, -0.0, a);
    glVertex3f(-0.11, -0.0, a);
    glVertex3f(-0.11, 0.4, a);
    glVertex3f(-0.19, 0.4, a);
    glEnd();

    glColor3f(0.196, 0.196, 0.196);
    glBegin(GL_QUADS);
    glVertex3f(-0.19, -0.0, -a);
    glVertex3f(-0.11, -0.0, -a);
    glVertex3f(-0.11, 0.4, -a);
    glVertex3f(-0.19, 0.4, -a);
    glEnd();

    glColor3f(0.196, 0.196, 0.196);
    glBegin(GL_QUADS);
    glVertex3f(-0.19, -0.0, a);
    glVertex3f(-0.11, -0.0, -a);
    glVertex3f(-0.11, 0.4, -a);
    glVertex3f(-0.19, 0.4, a);
    glEnd();

    glColor3f(0.196, 0.196, 0.196);
    glBegin(GL_QUADS);
    glVertex3f(-0.19, -0.0, a);
    glVertex3f(-0.11, -0.0, -a);
    glVertex3f(-0.11, 0.4, -a);
    glVertex3f(-0.19, 0.4, a);
    glEnd();

    glColor3f(0.196, 0.196, 0.196);
    glBegin(GL_QUADS);
    glVertex3f(-0.19, -0.0, a);
    glVertex3f(-0.11, -0.0, a);
    glVertex3f(-0.11, 0.4, -a);
    glVertex3f(-0.19, 0.4, -a);
    glEnd();

    glColor3f(0.196, 0.196, 0.196);
    glBegin(GL_QUADS);
    glVertex3f(-0.19, -0.0, a);
    glVertex3f(-0.11, -0.0, a);
    glVertex3f(-0.11, 0.4, -a);
    glVertex3f(-0.19, 0.4, -a);
    glEnd();

    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex3f(-0.11, 0.4, 0.051);
    glVertex3f(-0.19, 0.4, .051);
    glVertex3f(-0.19, 0.36, 0.051);
    glVertex3f(-0.11, 0.36, 0.051);
    glEnd();

    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex3f(-0.11, 0.4, -0.051);
    glVertex3f(-0.19, 0.4, -0.051);
    glVertex3f(-0.19, 0.36, -0.051);
    glVertex3f(-0.11, 0.36, -0.051);
    glEnd();

    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex3f(-0.11, 0.4, 0.051);
    glVertex3f(-0.19, 0.4, -0.051);
    glVertex3f(-0.19, 0.36, -0.051);
    glVertex3f(-0.11, 0.36, 0.051);
    glEnd();

    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex3f(-0.11, 0.4, 0.051);
    glVertex3f(-0.19, 0.4, -0.051);
    glVertex3f(-0.19, 0.36, -0.051);
    glVertex3f(-0.11, 0.36, 0.051);
    glEnd();

    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex3f(-0.11, -0.0, 0.051);
    glVertex3f(-0.19, -0.0, 0.051);
    glVertex3f(-0.19, 0.035, 0.051);
    glVertex3f(-0.11, 0.035, 0.051);
    glEnd();

    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex3f(-0.11, -0.0, -0.051);
    glVertex3f(-0.19, -0.0, -0.051);
    glVertex3f(-0.19, 0.035, -0.051);
    glVertex3f(-0.11, 0.035, -0.051);
    glEnd();

    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex3f(-0.11, -0.0, 0.051);
    glVertex3f(-0.19, -0.0, -0.051);
    glVertex3f(-0.19, 0.035, -0.051);
    glVertex3f(-0.11, 0.035, 0.051);
    glEnd();

    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex3f(-0.11, -0.0, 0.051);
    glVertex3f(-0.19, -0.0, -0.051);
    glVertex3f(-0.19, 0.035, -0.051);
    glVertex3f(-0.11, 0.035, 0.051);
    glEnd();

    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex3f(-0.11, -0.0, -0.051);
    glVertex3f(-0.115, -0.0, -0.051);
    glVertex3f(-0.115, 0.4, -0.051);
    glVertex3f(-0.11, 0.4, -0.051);
    glEnd();

    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex3f(-0.11, -0.0, 0.051);
    glVertex3f(-0.115, -0.0, 0.051);
    glVertex3f(-0.115, 0.4, 0.051);
    glVertex3f(-0.11, 0.4, 0.051);
    glEnd();

    ///BRAZO IZQUIERO FINAL

    ///MANO IZQUIERDA
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_QUADS);
    glVertex3f(-0.19, -0.1, ha);
    glVertex3f(-0.11, -0.1, ha);
    glVertex3f(-0.11, 0.0, ha);
    glVertex3f(-0.19, 0.0, ha);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_QUADS);
    glVertex3f(-0.19, -0.1, -ha);
    glVertex3f(-0.11, -0.1, -ha);
    glVertex3f(-0.11, 0.0, -ha);
    glVertex3f(-0.19, 0.0, -ha);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_QUADS);
    glVertex3f(-0.19, -0.1, ha);
    glVertex3f(-0.11, -0.1, -ha);
    glVertex3f(-0.11, 0.0, -ha);
    glVertex3f(-0.19, 0.0, ha);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_QUADS);
    glVertex3f(-0.19, -0.1, ha);
    glVertex3f(-0.11, -0.1, -ha);
    glVertex3f(-0.11, 0.0, -ha);
    glVertex3f(-0.19, 0.0, ha);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_QUADS);
    glVertex3f(-0.19, -0.1, ha);
    glVertex3f(-0.11, -0.1, ha);
    glVertex3f(-0.11, 0.0, -ha);
    glVertex3f(-0.19, 0.0, -ha);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_QUADS);
    glVertex3f(-0.19, -0.1, ha);
    glVertex3f(-0.11, -0.1, ha);
    glVertex3f(-0.11, 0.0, -ha);
    glVertex3f(-0.19, 0.0, -ha);
    glEnd();
    ///MANO IZQUIERDA FINAL

    ///BRAZO DERECHO INICIO
    glColor3f(0.196, 0.196, 0.196);
    glBegin(GL_QUADS);
    glVertex3f(0.11, -0.0, a);
    glVertex3f(0.19, -0.0, a);
    glVertex3f(0.19, 0.4, a);
    glVertex3f(0.11, 0.4, a);
    glEnd();

    glColor3f(0.196, 0.196, 0.196);
    glBegin(GL_QUADS);
    glVertex3f(0.11, -0.0, -a);
    glVertex3f(0.19, -0.0, -a);
    glVertex3f(0.19, 0.4, -a);
    glVertex3f(0.11, 0.4, -a);
    glEnd();

    glColor3f(0.196, 0.196, 0.196);
    glBegin(GL_QUADS);
    glVertex3f(0.11, -0.0, a);
    glVertex3f(0.19, -0.0, -a);
    glVertex3f(0.19, 0.4, -a);
    glVertex3f(0.11, 0.4, a);
    glEnd();

    glColor3f(0.196, 0.196, 0.196);
    glBegin(GL_QUADS);
    glVertex3f(0.11, -0.0, a);
    glVertex3f(0.19, -0.0, -a);
    glVertex3f(0.19, 0.4, -a);
    glVertex3f(0.11, 0.4, a);
    glEnd();

    glColor3f(0.196, 0.196, 0.196);
    glBegin(GL_QUADS);
    glVertex3f(0.11, -0.0, a);
    glVertex3f(0.19, -0.0, a);
    glVertex3f(0.19, 0.4, -a);
    glVertex3f(0.11, 0.4, -a);
    glEnd();

    glColor3f(0.196, 0.196, 0.196);
    glBegin(GL_QUADS);
    glVertex3f(0.11, -0.0, a);
    glVertex3f(0.19, -0.0, a);
    glVertex3f(0.19, 0.4, -a);
    glVertex3f(0.11, 0.4, -a);
    glEnd();

    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex3f(0.11, -0.0, 0.051);
    glVertex3f(0.19, -0.0, 0.051);
    glVertex3f(0.19, 0.035, 0.051);
    glVertex3f(0.11, 0.035, 0.051);
    glEnd();

    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex3f(0.11, -0.0, -0.051);
    glVertex3f(0.19, -0.0, -0.051);
    glVertex3f(0.19, 0.035, -0.051);
    glVertex3f(0.11, 0.035, -0.051);
    glEnd();

    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex3f(0.11, -0.0, 0.051);
    glVertex3f(0.19, -0.0, -0.051);
    glVertex3f(0.19, 0.035, -0.051);
    glVertex3f(0.11, 0.035, 0.051);
    glEnd();

    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex3f(0.11, -0.0, 0.051);
    glVertex3f(0.19, -0.0, -0.051);
    glVertex3f(0.19, 0.035, -0.051);
    glVertex3f(0.11, 0.035, 0.051);
    glEnd();

    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex3f(0.11, 0.4, 0.051);
    glVertex3f(0.19, 0.4, 0.051);
    glVertex3f(0.19, 0.36, 0.051);
    glVertex3f(0.11, 0.36, 0.051);
    glEnd();

    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex3f(0.11, 0.4, -0.051);
    glVertex3f(0.19, 0.4, -0.051);
    glVertex3f(0.19, 0.36, -0.051);
    glVertex3f(0.11, 0.36, -0.051);
    glEnd();

    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex3f(0.11, 0.4, 0.051);
    glVertex3f(0.19, 0.4, -0.051);
    glVertex3f(0.19, 0.36, -0.051);
    glVertex3f(0.11, 0.36, 0.051);
    glEnd();

    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex3f(0.11, 0.4, 0.051);
    glVertex3f(0.19, 0.4, -0.051);
    glVertex3f(0.19, 0.36, -0.051);
    glVertex3f(0.11, 0.36, 0.051);
    glEnd();

    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex3f(0.11, -0.0, -0.051);
    glVertex3f(0.115, -0.0, -0.051);
    glVertex3f(0.115, 0.4, -0.051);
    glVertex3f(0.11, 0.4, -0.051);
    glEnd();

    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex3f(0.11, -0.0, 0.051);
    glVertex3f(0.115, -0.0, 0.051);
    glVertex3f(0.115, 0.4, 0.051);
    glVertex3f(0.11, 0.4, 0.051);
    glEnd();
    ///BRAZO DERECHO FINAL

    ///MANO DERECHA INICIO
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_QUADS);
    glVertex3f(0.11, -0.1, ha);
    glVertex3f(0.19, -0.1, ha);
    glVertex3f(0.19, 0.0, ha);
    glVertex3f(0.11, 0.0, ha);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_QUADS);
    glVertex3f(0.11, -0.1, -ha);
    glVertex3f(0.19, -0.1, -ha);
    glVertex3f(0.19, 0.0, -ha);
    glVertex3f(0.11, 0.0, -ha);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_QUADS);
    glVertex3f(0.11, -0.1, ha);
    glVertex3f(0.19, -0.1, -ha);
    glVertex3f(0.19, 0.0, -ha);
    glVertex3f(0.11, 0.0, ha);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_QUADS);
    glVertex3f(0.11, -0.1, ha);
    glVertex3f(0.19, -0.1, -ha);
    glVertex3f(0.19, 0.0, -ha);
    glVertex3f(0.11, 0.0, ha);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_QUADS);
    glVertex3f(0.11, -0.1, ha);
    glVertex3f(0.19, -0.1, ha);
    glVertex3f(0.19, 0.0, -ha);
    glVertex3f(0.11, 0.0, -ha);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_QUADS);
    glVertex3f(0.11, -0.1, ha);
    glVertex3f(0.19, -0.1, ha);
    glVertex3f(0.19, 0.0, -ha);
    glVertex3f(0.11, 0.0, -ha);
    glEnd();
    ///MANO DERECHA FINAL

    ///PIERNA IZQUIERDA INICIO
    glColor3f(0.196, 0.196, 0.196);
    glBegin(GL_QUADS);
    glVertex3f(-0.002, -0.6, l);
    glVertex3f(-0.11, -0.6, l);
    glVertex3f(-0.11, -0.15, l);
    glVertex3f(-0.002, -0.15, l);
    glEnd();

    glColor3f(0.196, 0.196, 0.196);
    glBegin(GL_QUADS);
    glVertex3f(-0.002, -0.6, -l);
    glVertex3f(-0.11, -0.6, -l);
    glVertex3f(-0.11, -0.15, -l);
    glVertex3f(-0.002, -0.15, -l);
    glEnd();

    glColor3f(0.196, 0.196, 0.196);
    glBegin(GL_QUADS);
    glVertex3f(-0.002, -0.6, l);
    glVertex3f(-0.11, -0.6, -l);
    glVertex3f(-0.11, -0.15, -l);
    glVertex3f(-0.002, -0.15, l);
    glEnd();

    glColor3f(0.196, 0.196, 0.196);
    glBegin(GL_QUADS);
    glVertex3f(-0.002, -0.6, l);
    glVertex3f(-0.11, -0.6, -l);
    glVertex3f(-0.11, -0.15, -l);
    glVertex3f(-0.002, -0.15, l);
    glEnd();

    glColor3f(0.196, 0.196, 0.196);
    glBegin(GL_QUADS);
    glVertex3f(-0.002, -0.6, l);
    glVertex3f(-0.11, -0.6, l);
    glVertex3f(-0.11, -0.15, -l);
    glVertex3f(-0.002, -0.15, -l);
    glEnd();

    glColor3f(0.196, 0.196, 0.196);
    glBegin(GL_QUADS);
    glVertex3f(-0.002, -0.6, l);
    glVertex3f(-0.11, -0.6, l);
    glVertex3f(-0.11, -0.15, -l);
    glVertex3f(-0.002, -0.15, -l);
    glEnd();

    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex3f(-0.11, -0.6, 0.051);
    glVertex3f(-0.002, -0.6, 0.051);
    glVertex3f(-0.002, -0.56, 0.051);
    glVertex3f(-0.11, -0.56, 0.051);
    glEnd();

    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex3f(-0.11, -0.6, -0.051);
    glVertex3f(-0.002, -0.6, -0.051);
    glVertex3f(-0.002, -0.56, -0.051);
    glVertex3f(-0.11, -0.56, -0.051);
    glEnd();

    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex3f(-0.11, -0.6, 0.051);
    glVertex3f(-0.002, -0.6, -0.051);
    glVertex3f(-0.002, -0.56, -0.051);
    glVertex3f(-0.11, -0.56, 0.051);
    glEnd();

    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex3f(-0.11, -0.6, 0.051);
    glVertex3f(-0.002, -0.6, -0.051);
    glVertex3f(-0.002, -0.56, -0.051);
    glVertex3f(-0.11, -0.56, 0.051);
    glEnd();
    ///PIERNA IZQUIERDA FINAL\

    ///PIE IZQUIERDO INICIO
    glColor3f(0.753, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex3f(-0.002, -0.7, f);
    glVertex3f(-0.11, -0.7, f);
    glVertex3f(-0.11, -0.6, f);
    glVertex3f(-0.002, -0.6, f);
    glEnd();

    glColor3f(0.753, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex3f(-0.002, -0.7, -f);
    glVertex3f(-0.11, -0.7, -f);
    glVertex3f(-0.11, -0.6, -f);
    glVertex3f(-0.002, -0.6, -f);
    glEnd();

    glColor3f(0.753, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex3f(-0.002, -0.7, f);
    glVertex3f(-0.11, -0.7, -f);
    glVertex3f(-0.11, -0.6, -f);
    glVertex3f(-0.002, -0.6, f);
    glEnd();

    glColor3f(0.753, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex3f(-0.002, -0.7, f);
    glVertex3f(-0.11, -0.7, -f);
    glVertex3f(-0.11, -0.6, -f);
    glVertex3f(-0.002, -0.6, f);
    glEnd();

    glColor3f(0.753, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex3f(-0.002, -0.7, f);
    glVertex3f(-0.11, -0.7, f);
    glVertex3f(-0.11, -0.6, -f);
    glVertex3f(-0.002, -0.6, -f);
    glEnd();

    glColor3f(0.753, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex3f(-0.002, -0.7, f);
    glVertex3f(-0.11, -0.7, f);
    glVertex3f(-0.11, -0.6, -f);
    glVertex3f(-0.002, -0.6, -f);
    glEnd();
    ///PIE IZQUIERDO FINAL

    ///PIERNA DERECHA INICIO
    glColor3f(0.196, 0.196, 0.196);
    glBegin(GL_QUADS);
    glVertex3f(0.11, -0.6, l);
    glVertex3f(0.002, -0.6, l);
    glVertex3f(0.002, -0.15, l);
    glVertex3f(0.11, -0.15, l);
    glEnd();

    glColor3f(0.196, 0.196, 0.196);
    glBegin(GL_QUADS);
    glVertex3f(0.11, -0.6, -l);
    glVertex3f(0.002, -0.6, -l);
    glVertex3f(0.002, -0.15, -l);
    glVertex3f(0.11, -0.15, -l);
    glEnd();

    glColor3f(0.196, 0.196, 0.196);
    glBegin(GL_QUADS);
    glVertex3f(0.11, -0.6, l);
    glVertex3f(0.002, -0.6, -l);
    glVertex3f(0.002, -0.15, -l);
    glVertex3f(0.11, -0.15, l);
    glEnd();

    glColor3f(0.196, 0.196, 0.196);
    glBegin(GL_QUADS);
    glVertex3f(0.11, -0.6, l);
    glVertex3f(0.002, -0.6, -l);
    glVertex3f(0.002, -0.15, -l);
    glVertex3f(0.11, -0.15, l);
    glEnd();

    glColor3f(0.196, 0.196, 0.196);
    glBegin(GL_QUADS);
    glVertex3f(0.11, -0.6, l);
    glVertex3f(0.002, -0.6, l);
    glVertex3f(0.002, -0.15, -l);
    glVertex3f(0.11, -0.15, -l);
    glEnd();

    glColor3f(0.196, 0.196, 0.196);
    glBegin(GL_QUADS);
    glVertex3f(0.11, -0.6, l);
    glVertex3f(0.002, -0.6, l);
    glVertex3f(0.002, -0.15, -l);
    glVertex3f(0.11, -0.15, -l);
    glEnd();

    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex3f(0.11, -0.6, 0.051);
    glVertex3f(0.002, -0.6, 0.051);
    glVertex3f(0.002, -0.56, 0.051);
    glVertex3f(0.11, -0.56, 0.051);
    glEnd();

    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex3f(0.11, -0.6, -0.051);
    glVertex3f(0.002, -0.6, -0.051);
    glVertex3f(0.002, -0.56, -0.051);
    glVertex3f(0.11, -0.56, -0.051);
    glEnd();

    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex3f(0.11, -0.6, 0.051);
    glVertex3f(0.002, -0.6, -0.051);
    glVertex3f(0.002, -0.56, -0.051);
    glVertex3f(0.11, -0.56, 0.051);
    glEnd();

    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex3f(0.11, -0.6, 0.051);
    glVertex3f(0.002, -0.6, -0.051);
    glVertex3f(0.002, -0.56, -0.051);
    glVertex3f(0.11, -0.56, 0.051);
    glEnd();
    ///PIERNA DERECHA FINAL

    ///PIE DERECHO INICIO
    glColor3f(0.753, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex3f(0.11, -0.7, f);
    glVertex3f(0.002, -0.7, f);
    glVertex3f(0.002, -0.6, f);
    glVertex3f(0.11, -0.6, f);
    glEnd();

    glColor3f(0.753, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex3f(0.11, -0.7, -f);
    glVertex3f(0.002, -0.7, -f);
    glVertex3f(0.002, -0.6, -f);
    glVertex3f(0.11, -0.6, -f);
    glEnd();

    glColor3f(0.753, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex3f(0.11, -0.7, f);
    glVertex3f(0.002, -0.7, -f);
    glVertex3f(0.002, -0.6, -f);
    glVertex3f(0.11, -0.6, f);
    glEnd();

    glColor3f(0.753, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex3f(0.11, -0.7, f);
    glVertex3f(0.002, -0.7, -f);
    glVertex3f(0.002, -0.6, -f);
    glVertex3f(0.11, -0.6, f);
    glEnd();

    glColor3f(0.753, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex3f(0.11, -0.7, f);
    glVertex3f(0.002, -0.7, f);
    glVertex3f(0.002, -0.6, -f);
    glVertex3f(0.11, -0.6, -f);
    glEnd();

    glColor3f(0.753, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex3f(0.11, -0.7, f);
    glVertex3f(0.002, -0.7, f);
    glVertex3f(0.002, -0.6, -f);
    glVertex3f(0.11, -0.6, -f);
    glEnd();

    glColor3f(0.545, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex3f(0.11, -0.7, 0.051);
    glVertex3f(0.002, -0.7, 0.051);
    glVertex3f(0.002, -0.65, 0.051);
    glVertex3f(0.11, -0.65, 0.051);
    glEnd();

     glColor3f(0.545, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex3f(0.11, -0.7, -0.051);
    glVertex3f(0.002, -0.7, -0.051);
    glVertex3f(0.002, -0.65, -0.051);
    glVertex3f(0.11, -0.65, -0.051);
    glEnd();

    glColor3f(0.545, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex3f(0.11, -0.7, 0.051);
    glVertex3f(0.002, -0.7, -0.051);
    glVertex3f(0.002, -0.65, -0.051);
    glVertex3f(0.11, -0.65, 0.051);
    glEnd();

    glColor3f(0.545, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex3f(0.11, -0.7, 0.051);
    glVertex3f(0.002, -0.7, -0.051);
    glVertex3f(0.002, -0.65, -0.051);
    glVertex3f(0.11, -0.65, 0.051);
    glEnd();

 glColor3f(0.545, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex3f(-0.11, -0.7, 0.051);
    glVertex3f(-0.002, -0.7, 0.051);
    glVertex3f(-0.002, -0.65, 0.051);
    glVertex3f(-0.11, -0.65, 0.051);
    glEnd();

     glColor3f(0.545, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex3f(-0.11, -0.7, -0.051);
    glVertex3f(-0.002, -0.7, -0.051);
    glVertex3f(-0.002, -0.65, -0.051);
    glVertex3f(-0.11, -0.65, -0.051);
    glEnd();

    glColor3f(0.545, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex3f(-0.11, -0.7, 0.051);
    glVertex3f(-0.002, -0.7, -0.051);
    glVertex3f(-0.002, -0.65, -0.051);
    glVertex3f(-0.11, -0.65, 0.051);
    glEnd();

    glColor3f(0.545, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex3f(-0.11, -0.7, 0.051);
    glVertex3f(-0.002, -0.7, -0.051);
    glVertex3f(-0.002, -0.65, -0.051);
    glVertex3f(-0.11, -0.65, 0.051);
    glEnd();

    glColor3f(0.545, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex3f(-0.08, -0.6, -0.051);
    glVertex3f(-0.03, -0.6, -0.051);
    glVertex3f(-0.03, -0.65, -0.051);
    glVertex3f(-0.08, -0.65, -0.051);
    glEnd();

    glColor3f(0.545, 0.0, 0.0);
    glBegin(GL_QUADS);
    glVertex3f(0.08, -0.6, -0.051);
    glVertex3f(0.03, -0.6, -0.051);
    glVertex3f(0.03, -0.65, -0.051);
    glVertex3f(0.08, -0.65, -0.051);
    glEnd();
    ///PIE DERECHO FINAL
}

void fondo(){

    ///Piso
    glColor3f(1.0, 0.96, 0.8); // Blanco humo
    glBegin(GL_POLYGON);
    glVertex3f(1.0,-1.0,0.5);
    glVertex3f(-1.0,-1.0,0.5);
    glVertex3f(-0.4,0.2,0.5);
    glVertex3f(0.4,0.2,0.5);
    glEnd();

    glColor3f(0.827, 0.827, 0.827);
    glBegin(GL_LINES);
    glVertex3f(-0.5,-0.0,.49);
    glVertex3f(0.5,-0.0,.49);
    glEnd();

    glColor3f(0.827, 0.827, 0.827);
    glBegin(GL_LINES);
    glVertex3f(-0.6,-0.2,.49);
    glVertex3f(0.6,-0.2,.49);
    glEnd();

    glColor3f(0.827, 0.827, 0.827);
    glBegin(GL_LINES);
    glVertex3f(-0.7,-0.4,.49);
    glVertex3f(0.7,-0.4,.49);
    glEnd();

    glColor3f(0.827, 0.827, 0.827);
    glBegin(GL_LINES);
    glVertex3f(-0.8,-0.6,.49);
    glVertex3f(0.8,-0.6,.49);
    glEnd();

    glColor3f(0.827, 0.827, 0.827);
    glBegin(GL_LINES);
    glVertex3f(-0.9,-0.8,.49);
    glVertex3f(0.9,-0.8,.49);
    glEnd();

    glColor3f(0.827, 0.827, 0.827);
    glBegin(GL_LINES);
    glVertex3f(-0.2,0.2,.49);
    glVertex3f(-0.55,-1.0,.49);
    glEnd();

    glColor3f(0.827, 0.827, 0.827);
    glBegin(GL_LINES);
    glVertex3f(-0.0,0.2,.49);
    glVertex3f(-0.0,-1.0,.49);
    glEnd();

    glColor3f(0.827, 0.827, 0.827);
    glBegin(GL_LINES);
    glVertex3f(0.2,0.2,.49);
    glVertex3f(0.55,-1.0,.49);
    glEnd();



    ///Parte Trasera
     glColor3f(0.850, 0.827, 0.827); // Gris claro
    glBegin(GL_POLYGON);
    glVertex3f(0.4,0.2,.5);
    glVertex3f(-0.4,0.2,.5);
    glVertex3f(-0.4,1.0,.5);
    glVertex3f(0.4,1.0,.5);
    glEnd();

    glColor3f(.0, .0, .0);
    glBegin(GL_LINES);
    glVertex3f(-0.4,0.2,.49);
    glVertex3f(-0.4,1.0,.49);
    glEnd();

    glColor3f(.0, .0, .0);
    glBegin(GL_LINES);
    glVertex3f(0.4,0.2,.49);
    glVertex3f(0.4,1.0,.49);
    glEnd();

    glColor3f(.0, .0, .0);
    glBegin(GL_LINES);
    glVertex3f(0.0,0.2,.49);
    glVertex3f(0.0,1.0,.49);
    glEnd();

    glColor3f(0.588, 0.294, 0.0);
    glBegin(GL_QUADS);
    glVertex3f(0.05,0.525,.491);
    glVertex3f(-0.05,0.525,.491);
    glVertex3f(-0.05,0.675,.491);
    glVertex3f(0.05,0.675,.491);
    glEnd();

    glColor3f(0.804, 0.522, 0.247);
    glBegin(GL_QUADS);
    glVertex3f(0.05,0.570,.491);
    glVertex3f(0.4,0.570,.491);
    glVertex3f(0.4,0.630,.491);
    glVertex3f(0.05,0.630,.491);
    glEnd();

    glColor3f(0.804, 0.522, 0.247);
    glBegin(GL_QUADS);
    glVertex3f(-0.05,0.570,.491);
    glVertex3f(-0.4,0.570,.491);
    glVertex3f(-0.4,0.630,.491);
    glVertex3f(-0.05,0.630,.491);
    glEnd();

    ///Parte izquierda
    glColor3f(0.827, 0.827, 0.827); // Gris claro
    glBegin(GL_POLYGON);
    glVertex3f(-1.0,-1.0,0.5);
    glVertex3f(-0.4,0.2,0.5);
    glVertex3f(-0.4,1.0,0.5);
    glVertex3f(-1.0,1.0,0.5);
    glEnd();

    glColor3f(0.663, 0.663, 0.663);
    glBegin(GL_LINES);
    glVertex3f(-0.9,-0.8,-.49);
    glVertex3f(-0.9,1.0,-.49);
    glEnd();

    glColor3f(0.663, 0.663, 0.663);
    glBegin(GL_LINES);
    glVertex3f(-0.8,-0.6,-.49);
    glVertex3f(-0.8,1.0,-.49);
    glEnd();

    glColor3f(0.663, 0.663, 0.663);
    glBegin(GL_LINES);
    glVertex3f(-0.7,-0.4,-.49);
    glVertex3f(-0.7,1.0,-.49);
    glEnd();

    glColor3f(0.663, 0.663, 0.663);
    glBegin(GL_LINES);
    glVertex3f(-0.6,-0.2,-.49);
    glVertex3f(-0.6,1.0,-.49);
    glEnd();

    glColor3f(0.663, 0.663, 0.663);
    glBegin(GL_LINES);
    glVertex3f(-0.5,0.0,-.49);
    glVertex3f(-0.5,1.0,-.49);
    glEnd();

    glColor3f(0.663, 0.663, 0.663);
    glBegin(GL_LINES);
    glVertex3f(-0.4,0.4,-.49);
    glVertex3f(-1.0,-0.575,-.49);
    glEnd();

    glColor3f(0.663, 0.663, 0.663);
    glBegin(GL_LINES);
    glVertex3f(-0.4,0.6,-.49);
    glVertex3f(-1.0,-0.0,-.49);
    glEnd();

    glColor3f(0.663, 0.663, 0.663);
    glBegin(GL_LINES);
    glVertex3f(-0.4,0.8,-.49);
    glVertex3f(-1.0,0.575,-.49);
    glEnd();


    ///Parte Derercha
    glColor3f(0.827, 0.827, 0.827); // Gris claro
    glBegin(GL_POLYGON);
    glVertex3f(1.0,-1.0,.5);
    glVertex3f(0.3,0.2,.5);
    glVertex3f(0.3,1.0,.5);
    glVertex3f(1.0,1.0,.5);
    glEnd();

    glColor3f(0.663, 0.663, 0.663);
    glBegin(GL_LINES);
    glVertex3f(0.9,-0.8,.49);
    glVertex3f(0.9,1.0,.49);
    glEnd();

    glColor3f(0.663, 0.663, 0.663);
    glBegin(GL_LINES);
    glVertex3f(0.8,-0.6,.49);
    glVertex3f(0.8,1.0,.49);
    glEnd();

    glColor3f(0.663, 0.663, 0.663);
    glBegin(GL_LINES);
    glVertex3f(0.7,-0.4,.49);
    glVertex3f(0.7,1.0,.49);
    glEnd();

    glColor3f(0.663, 0.663, 0.663);
    glBegin(GL_LINES);
    glVertex3f(0.6,-0.2,.49);
    glVertex3f(0.6,1.0,.49);
    glEnd();

    glColor3f(0.663, 0.663, 0.663);
    glBegin(GL_LINES);
    glVertex3f(0.5,-0.0,.49);
    glVertex3f(0.5,1.0,.49);
    glEnd();

    glColor3f(0.663, 0.663, 0.663);
    glBegin(GL_LINES);
    glVertex3f(0.4,0.4,-.49);
    glVertex3f(1.0,-0.575,-.49);
    glEnd();

    glColor3f(0.663, 0.663, 0.663);
    glBegin(GL_LINES);
    glVertex3f(0.4,0.6,-.49);
    glVertex3f(1.0,-0.0,-.49);
    glEnd();

    glColor3f(0.663, 0.663, 0.663);
    glBegin(GL_LINES);
    glVertex3f(0.4,0.8,-.49);
    glVertex3f(1.0,0.575,-.49);
    glEnd();
}


void display(){

    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    fondo();

    glPushMatrix();
    //glRotatef(15,-0.5,1,0);
    glRotatef(rotate_x,0,.1,.0);
    skin();
    glPopMatrix();

    glutSwapBuffers(); // Intercambia el buffer de dibujo y el buffer de respaldo para mostrar la escena renderizada.
}

void mouse(int button, int state,int x, int y){
    if(state!=GLUT_DOWN)return;
    if(button==GLUT_LEFT_BUTTON){
        if(!empezar){empezar=1;glutIdleFunc(giro);}
        velocidad += velocidad<=10 ? 1:0;
    }

    else if(button==GLUT_RIGHT_BUTTON){
        velocidad -= velocidad-1>=0 ? 1:0;
    }
    glutPostRedisplay();
}

int main(int argc, char** argv){

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH); // Configura el modo de visualización.
    glutInitWindowSize(1700, 800);
    glutCreateWindow("Cubo con Evento de Mouse");

    // Activa el control de profundidad para 3D.
    glEnable(GL_DEPTH_TEST);
    glEnable(GL_NORMALIZE);


    glutDisplayFunc(display);
    glutReshapeFunc(reshape);

    glutMouseFunc(mouse);
    glutMainLoop();

  return 0;
}

