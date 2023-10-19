#include <GL/gl.h>
#include <GL/glut.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.5f, 1.0f, 1.0f); // Azul claro

    glBegin(GL_LINE_STRIP);

    // Letra "L"
    glBegin(GL_LINE_STRIP);
    glVertex2f(-0.3,-0.3);
    glVertex2f(-0.4,-0.3);
    glVertex2f(-0.5,-0.3);
    glVertex2f(-0.6,-0.3);
    glVertex2f(-0.6,-0.2);
    glVertex2f(-0.6,-0.1);
    glVertex2f(-0.6,-0.0);
    glVertex2f(-0.6,0.1);
    glVertex2f(-0.6,0.2);
    glVertex2f(-0.6,0.3);
    glEnd();

    // Letra "U"
    glBegin(GL_LINE_STRIP);
    glVertex2f(0.1,0.3);
    glVertex2f(0.1,0.2);
    glVertex2f(0.1,0.1);
    glVertex2f(0.1,0.0);
    glVertex2f(0.1,-0.1);
    glVertex2f(0.1,-0.2);
    glVertex2f(0.1,-0.3);
    glVertex2f(0.0,-0.3);
    glVertex2f(-0.1,-0.3);
    glVertex2f(-0.2,-0.3);
    glVertex2f(-0.2,-0.2);
    glVertex2f(-0.2, 0.1);
    glVertex2f(-0.2,-0.0);
    glVertex2f(-0.2,0.1);
    glVertex2f(-0.2,0.2);
    glVertex2f(-0.2,0.3);
    glEnd();

    // Letra "I"
    glBegin(GL_LINE_STRIP);

    glVertex2f(0.4,0.3);
    glVertex2f(0.3,0.3);
    glVertex2f(0.2,0.3);
    glVertex2f(0.3,0.3);
    glVertex2f(0.3,0.2);
    glVertex2f(0.3,0.1);
    glVertex2f(0.3,0.0);
    glVertex2f(0.3,-0.1);
    glVertex2f(0.3,-0.2);
    glVertex2f(0.3,-0.3);
    glVertex2f(0.2,-0.3);
    glVertex2f(0.4,-0.3);
    glEnd();

    // Letra "S"
    glBegin(GL_LINE_STRIP);

    glVertex2f(0.8,0.3);
    glVertex2f(0.7,0.3);
    glVertex2f(0.6,0.3);
    glVertex2f(0.5,0.3);
    glVertex2f(0.5,0.2);
    glVertex2f(0.5,0.1);
    glVertex2f(0.5,0.0);
    glVertex2f(0.6,0.0);
    glVertex2f(0.7,0.0);
    glVertex2f(0.8,0.0);
    glVertex2f(0.8,-0.1);
    glVertex2f(0.8,-0.2);
    glVertex2f(0.8,-0.3);
    glVertex2f(0.7,-0.3);
    glVertex2f(0.6,-0.3);
    glVertex2f(0.5,-0.3);
    glEnd();


    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(1200, 680);
    glutCreateWindow("Nombre");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}

