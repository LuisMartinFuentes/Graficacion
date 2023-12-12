
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>

// Variables para controlar la rotación continua.
float anguloX = 0.0;
float anguloY = 0.0;
float velocidadRotacion = 8.0; // Velocidad de rotación.

int lastMouseX = 0;
int lastMouseY = 0;
bool mouseDrag = false;


void cube(){
    // Cara frontal (roja)
    glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.5, -0.5, -0.5);
    glVertex3f(0.5, -0.5, -0.5);
    glVertex3f(0.5, 0.5, -0.5);
    glVertex3f(-0.5, 0.5, -0.5);
    glEnd();

    // Cara trasera (verde)
    glColor3f(0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.5, -0.5, 0.5);
    glVertex3f(0.5, -0.5, 0.5);
    glVertex3f(0.5, 0.5, 0.5);
    glVertex3f(-0.5, 0.5, 0.5);
    glEnd();

    // Cara derecha (azul)
    glColor3f(0.0, 0.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.5, -0.5, -0.5);
    glVertex3f(0.5, 0.5, -0.5);
    glVertex3f(0.5, 0.5, 0.5);
    glVertex3f(0.5, -0.5, 0.5);
    glEnd();

    // Cara izquierda (amarilla)
    glColor3f(1.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.5, -0.5, -0.5);
    glVertex3f(-0.5, 0.5, -0.5);
    glVertex3f(-0.5, 0.5, 0.5);
    glVertex3f(-0.5, -0.5, 0.5);
    glEnd();

    // Cara superior (magenta)
    glColor3f(1.0, 0.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.5, 0.5, -0.5);
    glVertex3f(0.5, 0.5, -0.5);
    glVertex3f(0.5, 0.5, 0.5);
    glVertex3f(-0.5, 0.5, 0.5);
    glEnd();

    // Cara inferior (cian)
    glColor3f(0.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-0.5, -0.5, -0.5);
    glVertex3f(0.5, -0.5, -0.5);
    glVertex3f(0.5, -0.5, 0.5);
    glVertex3f(-0.5, -0.5, 0.5);
    glEnd();


}

void display(){

    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();


    if (!mouseDrag) {
        anguloX += velocidadRotacion;
        anguloY += velocidadRotacion;

        if (anguloX > 360.0) {
            anguloX -= 360.0;
        }
        if (anguloY > 360.0) {
            anguloY -= 360.0;
        }
    }

    //glRotatef(anguloX, 1.0, 0.0, 0.0); // Rotación en el eje x.
    glRotatef(anguloY, 0.0, 1.0, 0.0); // Rotación en el eje y.

    cube();

    glutSwapBuffers(); // Intercambia el buffer de dibujo y el buffer de respaldo para mostrar la escena renderizada.
}

void mouse(int button, int state, int x, int y) {
    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN) {
        mouseDrag = true;
        lastMouseX = x;
        lastMouseY = y;
    } else if (button == GLUT_LEFT_BUTTON && state == GLUT_UP) {
        mouseDrag = false;
    }
}

void mouseMotion(int x, int y) {
    if (mouseDrag) {
        int deltaX = x - lastMouseX;
        int deltaY = y - lastMouseY;
        lastMouseX = x;
        lastMouseY = y;

        anguloX += deltaY;
        anguloY += deltaX;

        if (anguloX > 360.0) {
            anguloX -= 360.0;
        }
        if (anguloY > 360.0) {
            anguloY -= 360.0;
        }
    }
}

int main(int argc, char** argv){

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH); // Configura el modo de visualización.
    glutInitWindowSize(500, 500);
    glutCreateWindow("Cubo con Rotación Continua y Control de Mouse");

    // Activa el control de profundidad para 3D.
    glEnable(GL_DEPTH_TEST);
    glutDisplayFunc(display);

    // Registra las funciones para el control del mouse.
    glutMouseFunc(mouse);
    glutMotionFunc(mouseMotion);
    glutMainLoop();

  return 0;
}
