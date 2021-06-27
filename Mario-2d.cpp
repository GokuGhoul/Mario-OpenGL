#include <stdio.h>
#include <GL/glut.h>

void init()
{
	glClearColor(0, 0, 0, 0);
	glMatrixMode(GL_PROJECTION);
}
void Mario()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glLineWidth(2);
	glColor3f(0.4f, 0.6f, 0.0f);
	glBegin(GL_POLYGON); //arms
	glVertex2f(-0.1, 2);
	glVertex2f(2.7, 2);
	glVertex2f(1.3, 3.8);
	glEnd();
	glBegin(GL_POLYGON); //hair
	glVertex2f(0.1, 3);
	glVertex2f(0.5, 3);
	glVertex2f(0.5, 3.9);
	glVertex2f(0.1, 3.9);
	glEnd();
	glBegin(GL_POLYGON); //hair
	glVertex2f(0.2, 3.9);
	glVertex2f(1.1, 3.9);
	glVertex2f(1.1, 4.5);
	glVertex2f(0.2, 4.5);
	glEnd();
	glColor3f(0.9f, 0.8f, 0.1f);
	glBegin(GL_POLYGON); //handsleft
	glVertex2f(0, 1);
	glVertex2f(0.8, 1);
	glVertex2f(0.8, 2);
	glVertex2f(-0.1, 2);
	glEnd();
	glBegin(GL_POLYGON); //handsright
	glVertex2f(1.7, 1);
	glVertex2f(2.7, 1);
	glVertex2f(2.7, 2);
	glVertex2f(1.8, 2);
	glEnd();
	glBegin(GL_POLYGON); //head
	glVertex2f(0.5, 2.8);
	glVertex2f(2.3, 2.8);
	glVertex2f(2.3, 3.3);
	glVertex2f(0.5, 3.3);
	glEnd();
	glBegin(GL_POLYGON); //nose
	glVertex2f(0.5, 3.1);
	glVertex2f(2.6, 3.1);
	glVertex2f(2.6, 4);
	glVertex2f(0.5, 4);
	glEnd();
	glBegin(GL_POLYGON); //nose extension
	glVertex2f(0.3, 3.3);
	glVertex2f(2.8, 3.3);
	glVertex2f(2.8, 3.6);
	glVertex2f(0.3, 3.6);
	glEnd();
	glBegin(GL_POLYGON); //ear extension
	glVertex2f(0.3, 3.3);
	glVertex2f(0.5, 3.3);
	glVertex2f(0.5, 3.9);
	glVertex2f(0.3, 3.9);
	glEnd();
	glBegin(GL_POLYGON); //top
	glVertex2f(0.7, 3.9);
	glVertex2f(2.2, 3.9);
	glVertex2f(2.2, 4.5);
	glVertex2f(0.7, 4.5);
	glEnd();
	glColor3f(0.4f, 0.6f, 0.0f);
	glBegin(GL_POLYGON); //legs
	glVertex2f(-0.1, 0.0);
	glVertex2f(0.8, 0.0);
	glVertex2f(0.8, 0.4);
	glVertex2f(-0.1, 0.4);
	glEnd();
	glBegin(GL_POLYGON); //legs
	glVertex2f(1.9, 0.0);
	glVertex2f(2.8, 0.0);
	glVertex2f(2.8, 0.4);
	glVertex2f(1.9, 0.4);
	glEnd();
	glBegin(GL_POLYGON); //eyes
	glVertex2f(1.6, 4.5);
	glVertex2f(1.9, 4.5);
	glVertex2f(1.9, 3.9);
	glVertex2f(1.6, 3.9);
	glEnd();
	glBegin(GL_POLYGON); //mouth
	glVertex2f(1.6, 3.1);
	glVertex2f(2.6, 3.1);
	glVertex2f(2.6, 3.4);
	glVertex2f(1.6, 3.4);
	glEnd();
	glBegin(GL_POLYGON); //mouth
	glVertex2f(1.9, 3.4);
	glVertex2f(2.2, 3.4);
	glVertex2f(2.2, 3.8);
	glVertex2f(1.9, 3.8);
	glEnd();
	glColor3f(0.5f, 0.0f, 0.0f);
	glBegin(GL_POLYGON); //upperlegs
	glVertex2f(0.2, 0.4);
	glVertex2f(1.0, 0.4);
	glVertex2f(1.0, 0.8);
	glVertex2f(0.2, 0.8);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2f(1.6, 0.4);
	glVertex2f(2.4, 0.4);
	glVertex2f(2.4, 0.8);
	glVertex2f(1.6, 0.8);
	glEnd();
	glColor3f(0.5f, 0.0f, 0.0f);
	glBegin(GL_POLYGON); //stomach
	glVertex2f(0.5, 0.6);
	glVertex2f(2.1, 0.6);
	glVertex2f(2.1, 1.5);
	glVertex2f(0.5, 1.5);
	glEnd();
	glBegin(GL_POLYGON); //chest
	glVertex2f(0.7, 1.5);
	glVertex2f(1.9, 1.5);
	glVertex2f(1.9, 1.8);
	glVertex2f(0.7, 1.8);
	glEnd();
	glBegin(GL_POLYGON); //l-ribchest
	glVertex2f(0.7, 1.5);
	glVertex2f(1.1, 1.5);
	glVertex2f(1.1, 2.8);
	glVertex2f(0.7, 2.8);
	glEnd();
	glBegin(GL_POLYGON); //r-ribonchest
	glVertex2f(1.5, 1.5);
	glVertex2f(1.9, 1.5);
	glVertex2f(1.9, 2.5);
	glVertex2f(1.5, 2.5);
	glEnd();
	glBegin(GL_POLYGON); //midchest
	glVertex2f(1, 1.5);
	glVertex2f(1.5, 1.5);
	glVertex2f(1.5, 2.0);
	glVertex2f(1, 2.0);
	glEnd();
	glBegin(GL_POLYGON); //hat
	glVertex2f(0.3, 4.5);
	glVertex2f(2.6, 4.5);
	glVertex2f(2.6, 4.8);
	glVertex2f(0.3, 4.8);
	glEnd();
	glBegin(GL_POLYGON);//hat
	glVertex2f(0.5, 4.8);
	glVertex2f(2, 4.8);
	glVertex2f(2, 5);
	glVertex2f(0.5, 5);
	glEnd();
	glColor3f(0.9f, 0.8f, 0.1f);
	glBegin(GL_POLYGON); //buttonl
	glVertex2f(0.8, 1.5);
	glVertex2f(1.1, 1.5);
	glVertex2f(1.1, 1.2);
	glVertex2f(0.8, 1.2);
	glEnd();
	glBegin(GL_POLYGON); //buttonr
	glVertex2f(1.5, 1.5);
	glVertex2f(1.8, 1.5);
	glVertex2f(1.8, 1.2);
	glVertex2f(1.5, 1.2);
	glEnd();
}
void Display()
{
	glLoadIdentity();
	glTranslatef(-0.3f, -0.5f, 0.0f);
	glScalef(0.2, 0.2, 0);
	Mario();
	glFlush();
}
void main(int argc, char *argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(800, 600);
	glutInitWindowPosition(5, 5);
	glutCreateWindow("Mario");
	init();
	glutDisplayFunc(Display);
	glutMainLoop();
}