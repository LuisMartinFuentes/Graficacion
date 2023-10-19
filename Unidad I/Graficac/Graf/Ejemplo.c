#include <GL/glut.h>
#include <math.h>
#include <stdio.h>

void reshape(int width, int height)
{
glViewport(0, 0, width, height);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(-100, 100, -100, 100, -100, 100);
glMatrixMode(GL_MODELVIEW);
}

void displayLin_Horizontales()
{ int i;
glClear(GL_COLOR_BUFFER_BIT);
glColor3f(1.0,1.0,1.0);
glLoadIdentity();
glBegin(GL_LINES);

for(i=-100;i<=100;i+=3)
{
glVertex3f(-100,i, 0.0);
glVertex3f(100,i, 0.0);
}
glEnd();
glFlush();
}

void linea_directo(int x1, int y1, int x2, int y2)
{ int i;
float m; int y;
int xi,yi,xf,yf;

if (x1>x2) {xi=x2; yi=y2; xf=x1; yf=y1;}
else {xi=x1; yi=y1; xf=x2; yf=y2;};
m=(float)(yf-yi)/(xf-xi);
glBegin(GL_POINTS);
for(i=xi;i<=xf;i++)
{
glVertex3f(i,yi+round(m*(i-xi)),0);
}
glEnd();
}

void linea_add(int xi, int yi, int xf, int yf)
{ float m, m1, t1; int x, y, t;
m=(float)(yf-yi)/(xf-xi);
glBegin(GL_POINTS);
if(((abs(m)<1)&&(xi>xf)) || ((abs(m)>1)&&(yi>yf))){ t=xi; xi=xf; xf=t; t=yi; yi=yf; yf=t; }
glVertex3f(xi,yi,0);
if (abs(m)<1)
{ t1=yi;
for(x=xi+1;x<xf;x++)
{ t1+=m;
glVertex3f(x,round(t1),0);
};
}

else
{ m1=1/m; t1=xi;
for(y=yi+1;y<yf;y++)
{ t1+=m1;
glVertex3f(round(t1),y,0);
};
};
glVertex3f(xf,yf,0);
glEnd();
}

void linea_bress(int x1, int y1, int x2, int y2)
{ int dx,dy,x,y,x_end,y_end,p,const1,const2, in;
dx=abs(x1-x2);
dy=abs(y1-y2);
glBegin(GL_POINTS);

if (dy>dx)
{ p=2*dx-dy;
const1=2*dx;
const2=2*(dx-dy);
if (y1>y2)
{ x=x2; y=y2; y_end=y1;
if(x2<x1) in=1; else in=-1;
}

else
{ x=x1; y=y1; y_end=y2;
if(x2<x1) in=-1; else in=1;
};
glVertex3f(x,y,0);

while(y<y_end)
{ y++;
if(p<0) {p+=const1;} else { x+=in; p+=const2;};
glVertex3f(x,y,0);
};
}
else
{ p=2*dy-dx;
const1=2*dy;
const2=2*(dy-dx);
if (x1>x2)
{ x=x2; y=y2; x_end=x1;
if(y2<y1) in=1; else in=-1;
}
else
{ x=x1; y=y1; x_end=x2;
if(y2<y1) in=-1; else in=1;
};
glVertex3f(x,y,0);
while(x<x_end)
{ x++;
if(p<0) {p+=const1;} else { y+=in; p+=const2;};
glVertex3f(x,y,0);
};
}
glEnd();
}
void display()
{ GLfloat angulo;
glClear(GL_COLOR_BUFFER_BIT);
glColor3f(1.0,1.0,1.0);
glLoadIdentity();
linea_directo(-75,-75,-75,75); // Linea vertical
linea_directo(-75,-75,-25,75); // Linea menor de 45
linea_directo(-75,-75,75,75); // Linea a 45 grados
linea_directo(-75,-75,75,-25); // Linea mayor de 45
linea_directo(-75,-75,75,-75); // Linea horizontal
linea_add(-70,-75,-70,75); // Linea vertical
linea_add(-70,-75,-20,75); // Linea menor de 45

linea_add(-70,-75,80,75); // Linea a 45 grados
linea_add(-70,-75,80,-25); // Linea mayor de 45
linea_add(-75,-80,75,-80); // Linea horizontal
linea_bress(-65,-75,-65,75); // Linea vertical
linea_bress(-65,-75,-15,75); // Linea menor de 45
linea_bress(-65,-75,85,75); // Linea a 45 grados
linea_bress(-65,-75,85,-25); // Linea mayor de 45
linea_bress(-75,-85,75,-85); // Linea horizontal
glFlush();
};
void init()
{
glClearColor(0,0,0,0);
}
int mainn(int argc, char **argv)
{
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
glutInitWindowPosition(100, 100);
glutInitWindowSize(500, 500);
glutCreateWindow("Hola OpenGL-Puntos");
init();
glutDisplayFunc(display);
glutReshapeFunc(reshape);
glutMainLoop();
return 0;
}
