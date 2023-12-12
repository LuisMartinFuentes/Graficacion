
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>


#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>

bool empezar=0;
int velocidad=0;
double rotate_x=0;
//double rotate_y=0;

void giro(){
    rotate_x+=velocidad;
    if(rotate_x>360)rotate_x=0;
    glutPostRedisplay();
}

void reshape(int width, int height){
    glViewport(0, 0, width, height);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-1, 1, -1, 1, -1, 1);
    glMatrixMode(GL_MODELVIEW);
}

void cube(){
    // Cuerpo (cubo más grande y cuadrado)
    glColor3f(0.0, 0.0, 0.0);  // Color negro
    glBegin(GL_QUADS);
    glVertex3f(-0.2, -0.2, -0.1);
    glVertex3f(0.2, -0.2, -0.1);
    glVertex3f(0.2, 0.5, -0.1);
    glVertex3f(-0.2, 0.5, -0.1);
    glEnd();

    // Cabeza (cubo más pequeño y cuadrado) conectado al cuerpo
    glColor3f(0.7, 0.7, 0.7);  // Color blanco agrisado
    glBegin(GL_QUADS);
    // Cara frontal compartida con el cuerpo
    glVertex3f(-0.2, 0.5, -0.1);
    glVertex3f(0.2, 0.5, -0.1);
    glVertex3f(0.2, 0.8, -0.1);
    glVertex3f(-0.2, 0.8, -0.1);

    // Resto de las caras de la cabeza
    glVertex3f(-0.2, 0.8, 0.1);
    glVertex3f(0.2, 0.8, 0.1);
    glVertex3f(0.2, 1.1, 0.1);
    glVertex3f(-0.2, 1.1, 0.1);

    glVertex3f(-0.2, 0.8, -0.1);
    glVertex3f(-0.2, 0.8, 0.1);
    glVertex3f(-0.2, 1.1, 0.1);
    glVertex3f(-0.2, 1.1, -0.1);

    glVertex3f(0.2, 0.8, -0.1);
    glVertex3f(0.2, 0.8, 0.1);
    glVertex3f(0.2, 1.1, 0.1);
    glVertex3f(0.2, 1.1, -0.1);

    glVertex3f(-0.2, 1.1, -0.1);
    glVertex3f(0.2, 1.1, -0.1);
    glVertex3f(0.2, 1.1, 0.1);
    glVertex3f(-0.2, 1.1, 0.1);

    glVertex3f(-0.2, 0.8, -0.1);
    glVertex3f(0.2, 0.8, -0.1);
    glVertex3f(0.2, 0.8, 0.1);
    glVertex3f(-0.2, 0.8, 0.1);
    glEnd();

    // Brazo izquierdo conectado al cuerpo
    glBegin(GL_QUADS);
    glColor3f(0.5, 0.5, 0.5);  // Color gris para el brazo
    glVertex3f(-0.4, 0.0, -0.1);
    glVertex3f(-0.2, 0.0, -0.1);
    glVertex3f(-0.2, 0.5, -0.1);
    glVertex3f(-0.4, 0.5, -0.1);

    glVertex3f(-0.4, 0.0, 0.1);
    glVertex3f(-0.2, 0.0, 0.1);
    glVertex3f(-0.2, 0.5, 0.1);
    glVertex3f(-0.4, 0.5, 0.1);

    glVertex3f(-0.4, 0.0, -0.1);
    glVertex3f(-0.4, 0.0, 0.1);
    glVertex3f(-0.4, 0.5, 0.1);
    glVertex3f(-0.4, 0.5, -0.1);
    glEnd();

    // Brazo derecho conectado al cuerpo
    glBegin(GL_QUADS);
    glColor3f(0.5, 0.5, 0.5);  // Color gris para el brazo
    glVertex3f(0.2, 0.0, -0.1);
    glVertex3f(0.4, 0.0, -0.1);
    glVertex3f(0.4, 0.5, -0.1);
    glVertex3f(0.2, 0.5, -0.1);

    glVertex3f(0.2, 0.0, 0.1);
    glVertex3f(0.4, 0.0, 0.1);
    glVertex3f(0.4, 0.5, 0.1);
    glVertex3f(0.2, 0.5, 0.1);

    glVertex3f(0.2, 0.0, -0.1);
    glVertex3f(0.2, 0.0, 0.1);
    glVertex3f(0.2, 0.5, 0.1);
    glVertex3f(0.2, 0.5, -0.1);
    glEnd();

    // Pierna izquierda conectada al cuerpo
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);  // Color azul para la pierna
    glVertex3f(-0.2, -0.7, -0.0);
    glVertex3f(-0.05, -0.7, -0.05);
    glVertex3f(-0.05, -0.2, -0.05);
    glVertex3f(-0.2, -0.2, -0.05);

    glVertex3f(-0.2, -0.7, 0.05);
    glVertex3f(-0.05, -0.7, 0.05);
    glVertex3f(-0.05, -0.2, 0.05);
    glVertex3f(-0.2, -0.2, 0.05);

    glVertex3f(-0.2, -0.7, -0.05);
    glVertex3f(-0.2, -0.7, 0.05);
    glVertex3f(-0.2, -0.2, 0.05);
    glVertex3f(-0.2, -0.2, -0.05);
    glEnd();

    // Pierna derecha conectada al cuerpo
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);  // Color azul para la pierna
    glVertex3f(0.05, -0.7, -0.05);
    glVertex3f(0.2, -0.7, -0.05);
    glVertex3f(0.2, -0.2, -0.05);
    glVertex3f(0.05, -0.2, -0.05);

    glVertex3f(0.05, -0.7, 0.05);
    glVertex3f(0.2, -0.7, 0.05);
    glVertex3f(0.2, -0.2, 0.05);
    glVertex3f(0.05, -0.2, 0.05);

    glVertex3f(0.05, -0.7, -0.05);
    glVertex3f(0.05, -0.7, 0.05);
    glVertex3f(0.05, -0.2, 0.05);
    glVertex3f(0.05, -0.2, -0.05);
    glEnd();
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glClearColor(1.0, 1.0, 1.0, 1.0); // Fondo blanco
    glLoadIdentity();
    glRotatef(15,1,0,0);
    glRotatef(rotate_x,0.0,1.0,0.0);
    cube();
    glutSwapBuffers();
    glFlush();
}

void mouse(int button, int state,int x, int y){
    if(state!=GLUT_DOWN)return;
    if(button==GLUT_LEFT_BUTTON){
        if(!empezar){empezar=1;glutIdleFunc(giro);}
        velocidad += velocidad<=360 ? 1:0;
    }

    else if(button==GLUT_RIGHT_BUTTON){
        velocidad -= velocidad-1>=0 ? 1:0;
    }
    glutPostRedisplay();
}


int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(600, 600);
    glutInitWindowPosition(250,250);
    glutCreateWindow("Cubo");
    glEnable(GL_DEPTH_TEST);
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutMouseFunc(mouse);
    glutMainLoop();
    glClearColor(1.0, 1.0, 1.0, 1.0); // Fondo blanco

    return 0;
}
