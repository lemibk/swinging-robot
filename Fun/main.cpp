#include<GL/glut.h>
#include<math.h>
void init() {
	glClearColor(1, 1, 1, 1);
	glMatrixMode(GL_PROJECTION);
	glOrtho(-20, 20, -20, 20, -20, 20);
	glEnable(GL_DEPTH);

}
void display() {
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	//the grass
	glPushMatrix();
	glTranslatef(0,-10,0);
	glScalef(20, 10, 10);
	glColor3f(0,1,0);
	glutSolidCube(3);
	glPopMatrix();
	//the left pole
	glPushMatrix();
glColor3f(0.7, 0.7, 0.7);
	glTranslatef(-10, 0, -10);
	glScalef(0.5, 5, 1);
	glRotatef(90, 1, 0, 0);
	GLUquadric* quad = gluNewQuadric();
	gluCylinder(quad, 1, 1, 3, 32, 32);
	glPopMatrix();
	//the right pole
	glPushMatrix();
	glColor3f(0.7, 0.7, 0.7);
	glTranslatef(10, 0, -10);
	glScalef(0.5, 5, 1);
	glRotatef(90, 1, 0, 0);
	GLUquadric* tri = gluNewQuadric();
	gluCylinder(tri, 1, 1, 3, 32, 32);
	glPopMatrix();
	//the top pole

	glPushMatrix();
	glRotatef(90, 10, 0, 0);
	glColor3f(0.7, 0.7, 0.7);
	glTranslatef(5, 0, -10);
	glScalef(0.5, 5, 1);
	glRotatef(90, 1, 0, 0);

	GLUquadric* top = gluNewQuadric();
	gluCylinder(top, 1, 1, 3, 32, 32);
	glPopMatrix();

	glPushMatrix();
	//glRotatef(50, 0, 1, 0);
	glScalef(1, 0.5, 1);
	glTranslatef(0, -15, 0);
	glPushMatrix();
	glTranslatef(0, 8, 0);
	glScalef(4, 2, 1);

	glColor3f(1, 0, 0);
	glBegin(GL_QUADS);
	glVertex3f(-1, -1, -1);
	glVertex3f(1, -1, -1);
	glVertex3f(1, -1, 1);
	glVertex3f(-1, -1, 1);

	glColor3f(0, 1, 1);
	glVertex3f(-1, 1, -1);
	glVertex3f(1, 1, -1);
	glVertex3f(1, 1, 1);
	glVertex3f(-1, 1, 1);


	glColor3f(1, 0, 1);
	glVertex3f(-1, -1, -1);
	glVertex3f(-1, 1, -1);
	glVertex3f(-1, 1, 1);
	glVertex3f(-1, -1, 1);

	glColor3f(0, 1, 0);
	glVertex3f(1, -1, -1);
	glVertex3f(1, 1, -1);
	glVertex3f(1, 1, 1);
	glVertex3f(1, -1, 1);

	glColor3f(0.7, 0.7, 0.7);
	glVertex3f(-1, -1, 1);
	glVertex3f(-1, 1, 1);
	glVertex3f(1, 1, 1);
	glVertex3f(1, -1, 1);

	glColor3f(0, 0, 0);
	glVertex3f(-1, -1, -1);
	glVertex3f(-1, 1, -1);
	glVertex3f(1, 1, -1);
	glVertex3f(1, -1, -1);
	glEnd();
	glPopMatrix();
	//the eyes

	glPushMatrix();

	glTranslatef(-2, 8, 0);
	glColor3f(1, 1, 1);
	glScalef(1, 0.5, 1);
	glutSolidSphere(2, 32, 32);
	glPopMatrix();
	glPushMatrix();

	glTranslatef(2, 8, 0);
	glColor3f(1, 1, 1);
	glScalef(1, 0.5, 1);
	glutSolidSphere(2, 32, 32);
	glPopMatrix();

	//the neck
	glPushMatrix();


	glTranslatef(0, 6, 0);
	glScalef(1, 2, 1);

	glColor3f(1, 0, 0);
	glBegin(GL_QUADS);
	glVertex3f(-1, -1, -1);
	glVertex3f(1, -1, -1);
	glVertex3f(1, -1, 1);
	glVertex3f(-1, -1, 1);

	glColor3f(0, 1, 1);
	glVertex3f(-1, 1, -1);
	glVertex3f(1, 1, -1);
	glVertex3f(1, 1, 1);
	glVertex3f(-1, 1, 1);


	glColor3f(1, 0, 1);
	glVertex3f(-1, -1, -1);
	glVertex3f(-1, 1, -1);
	glVertex3f(-1, 1, 1);
	glVertex3f(-1, -1, 1);

	glColor3f(0, 1, 0);
	glVertex3f(1, -1, -1);
	glVertex3f(1, 1, -1);
	glVertex3f(1, 1, 1);
	glVertex3f(1, -1, 1);

	glColor3f(0.7, 0.7, 0.7);
	glVertex3f(-1, -1, 1);
	glVertex3f(-1, 1, 1);
	glVertex3f(1, 1, 1);
	glVertex3f(1, -1, 1);

	glColor3f(0, 0, 0);
	glVertex3f(-1, -1, -1);
	glVertex3f(-1, 1, -1);
	glVertex3f(1, 1, -1);
	glVertex3f(1, -1, -1);
	glEnd();
	glPopMatrix();
	//the stomack
	glPushMatrix();
	glTranslatef(0, 2, 0);
	glScalef(4, 2, 1);

	glColor3f(1, 0, 0);
	glBegin(GL_QUADS);
	glVertex3f(-1, -1, -1);
	glVertex3f(1, -1, -1);
	glVertex3f(1, -1, 1);
	glVertex3f(-1, -1, 1);

	glColor3f(0, 1, 1);
	glVertex3f(-1, 1, -1);
	glVertex3f(1, 1, -1);
	glVertex3f(1, 1, 1);
	glVertex3f(-1, 1, 1);


	glColor3f(1, 0, 1);
	glVertex3f(-1, -1, -1);
	glVertex3f(-1, 1, -1);
	glVertex3f(-1, 1, 1);
	glVertex3f(-1, -1, 1);

	glColor3f(0, 1, 0);
	glVertex3f(1, -1, -1);
	glVertex3f(1, 1, -1);
	glVertex3f(1, 1, 1);
	glVertex3f(1, -1, 1);

	glColor3f(0, 0, 1);
	glVertex3f(-1, -1, 1);
	glVertex3f(-1, 1, 1);
	glVertex3f(1, 1, 1);
	glVertex3f(1, -1, 1);

	glColor3f(0, 0, 0);
	glVertex3f(-1, -1, -1);
	glVertex3f(-1, 1, -1);
	glVertex3f(1, 1, -1);
	glVertex3f(1, -1, -1);
	glEnd();
	glPopMatrix();
	//the left leg
	glPushMatrix();
	glTranslatef(-2, -2, 0);
	glScalef(1, 2, 1);

	glColor3f(1, 0, 0);
	glBegin(GL_QUADS);
	glVertex3f(-1, -1, -1);
	glVertex3f(1, -1, -1);
	glVertex3f(1, -1, 1);
	glVertex3f(-1, -1, 1);

	glColor3f(0, 1, 1);
	glVertex3f(-1, 1, -1);
	glVertex3f(1, 1, -1);
	glVertex3f(1, 1, 1);
	glVertex3f(-1, 1, 1);


	glColor3f(1, 0, 1);
	glVertex3f(-1, -1, -1);
	glVertex3f(-1, 1, -1);
	glVertex3f(-1, 1, 1);
	glVertex3f(-1, -1, 1);

	glColor3f(0, 1, 0);
	glVertex3f(1, -1, -1);
	glVertex3f(1, 1, -1);
	glVertex3f(1, 1, 1);
	glVertex3f(1, -1, 1);

	glColor3f(0, 0, 1);
	glVertex3f(-1, -1, 1);
	glVertex3f(-1, 1, 1);
	glVertex3f(1, 1, 1);
	glVertex3f(1, -1, 1);

	glColor3f(0, 0, 0);
	glVertex3f(-1, -1, -1);
	glVertex3f(-1, 1, -1);
	glVertex3f(1, 1, -1);
	glVertex3f(1, -1, -1);
	glEnd();
	glPopMatrix();
	//the right leg
	glPushMatrix();
	glTranslatef(2, -2, 0);
	glScalef(1, 2, 1);

	glColor3f(1, 0, 0);
	glBegin(GL_QUADS);
	glVertex3f(-1, -1, -1);
	glVertex3f(1, -1, -1);
	glVertex3f(1, -1, 1);
	glVertex3f(-1, -1, 1);

	glColor3f(0, 1, 1);
	glVertex3f(-1, 1, -1);
	glVertex3f(1, 1, -1);
	glVertex3f(1, 1, 1);
	glVertex3f(-1, 1, 1);


	glColor3f(1, 0, 1);
	glVertex3f(-1, -1, -1);
	glVertex3f(-1, 1, -1);
	glVertex3f(-1, 1, 1);
	glVertex3f(-1, -1, 1);

	glColor3f(0, 1, 0);
	glVertex3f(1, -1, -1);
	glVertex3f(1, 1, -1);
	glVertex3f(1, 1, 1);
	glVertex3f(1, -1, 1);

	glColor3f(0, 0, 1);
	glVertex3f(-1, -1, 1);
	glVertex3f(-1, 1, 1);
	glVertex3f(1, 1, 1);
	glVertex3f(1, -1, 1);

	glColor3f(0, 0, 0);
	glVertex3f(-1, -1, -1);
	glVertex3f(-1, 1, -1);
	glVertex3f(1, 1, -1);
	glVertex3f(1, -1, -1);
	glEnd();
	glPopMatrix();
	//the shoes
	glPushMatrix();
	glTranslatef(2, -5, 0);
	glScalef(1.3, 1, 1);

	glColor3f(1, 0, 0);
	glBegin(GL_QUADS);
	glVertex3f(-1, -1, -1);
	glVertex3f(1, -1, -1);
	glVertex3f(1, -1, 1);
	glVertex3f(-1, -1, 1);

	glColor3f(0, 1, 1);
	glVertex3f(-1, 1, -1);
	glVertex3f(1, 1, -1);
	glVertex3f(1, 1, 1);
	glVertex3f(-1, 1, 1);


	glColor3f(1, 0, 1);
	glVertex3f(-1, -1, -1);
	glVertex3f(-1, 1, -1);
	glVertex3f(-1, 1, 1);
	glVertex3f(-1, -1, 1);

	glColor3f(0, 1, 0);
	glVertex3f(1, -1, -1);
	glVertex3f(1, 1, -1);
	glVertex3f(1, 1, 1);
	glVertex3f(1, -1, 1);

	glColor3f(1, 1, 1);
	glVertex3f(-1, -1, 1);
	glVertex3f(-1, 1, 1);
	glVertex3f(1, 1, 1);
	glVertex3f(1, -1, 1);

	glColor3f(0, 0, 1);
	glVertex3f(-1, -1, -1);
	glVertex3f(-1, 1, -1);
	glVertex3f(1, 1, -1);
	glVertex3f(1, -1, -1);
	glEnd();
	glPopMatrix();
	//left shoe
	glPushMatrix();
	glTranslatef(-2, -5, 0);
	glScalef(1.3, 1, 1);

	glColor3f(1, 0, 0);
	glBegin(GL_QUADS);
	glVertex3f(-1, -1, -1);
	glVertex3f(1, -1, -1);
	glVertex3f(1, -1, 1);
	glVertex3f(-1, -1, 1);

	glColor3f(0, 1, 1);
	glVertex3f(-1, 1, -1);
	glVertex3f(1, 1, -1);
	glVertex3f(1, 1, 1);
	glVertex3f(-1, 1, 1);


	glColor3f(1, 0, 1);
	glVertex3f(-1, -1, -1);
	glVertex3f(-1, 1, -1);
	glVertex3f(-1, 1, 1);
	glVertex3f(-1, -1, 1);

	glColor3f(0, 1, 0);
	glVertex3f(1, -1, -1);
	glVertex3f(1, 1, -1);
	glVertex3f(1, 1, 1);
	glVertex3f(1, -1, 1);

	glColor3f(1, 1, 1);
	glVertex3f(-1, -1, 1);
	glVertex3f(-1, 1, 1);
	glVertex3f(1, 1, 1);
	glVertex3f(1, -1, 1);

	glColor3f(0, 0, 1);
	glVertex3f(-1, -1, -1);
	glVertex3f(-1, 1, -1);
	glVertex3f(1, 1, -1);
	glVertex3f(1, -1, -1);
	glEnd();
	glPopMatrix();
	//the hands
	glPushMatrix();
	glTranslatef(-5, 2, 0);
	glRotatef(300, 0, 0, 1);
	glScalef(1, 2, 1);

	glColor3f(1, 0, 0);
	glBegin(GL_QUADS);
	glVertex3f(-1, -1, -1);
	glVertex3f(1, -1, -1);
	glVertex3f(1, -1, 1);
	glVertex3f(-1, -1, 1);

	glColor3f(0, 1, 1);
	glVertex3f(-1, 1, -1);
	glVertex3f(1, 1, -1);
	glVertex3f(1, 1, 1);
	glVertex3f(-1, 1, 1);


	glColor3f(1, 0, 1);
	glVertex3f(-1, -1, -1);
	glVertex3f(-1, 1, -1);
	glVertex3f(-1, 1, 1);
	glVertex3f(-1, -1, 1);

	glColor3f(0, 1, 0);
	glVertex3f(1, -1, -1);
	glVertex3f(1, 1, -1);
	glVertex3f(1, 1, 1);
	glVertex3f(1, -1, 1);

	glColor3f(0.7, 0.7, 0.7);
	glVertex3f(-1, -1, 1);
	glVertex3f(-1, 1, 1);
	glVertex3f(1, 1, 1);
	glVertex3f(1, -1, 1);

	glColor3f(0, 0, 1);
	glVertex3f(-1, -1, -1);
	glVertex3f(-1, 1, -1);
	glVertex3f(1, 1, -1);
	glVertex3f(1, -1, -1);
	glEnd();
	glPopMatrix();
	//the right hand
	glPushMatrix();
	glTranslatef(5, 2, 0);
	glRotatef(50, 0, 0, 1);
	glScalef(1, 2, 1);

	glColor3f(1, 0, 0);
	glBegin(GL_QUADS);
	glVertex3f(-1, -1, -1);
	glVertex3f(1, -1, -1);
	glVertex3f(1, -1, 1);
	glVertex3f(-1, -1, 1);

	glColor3f(0, 1, 1);
	glVertex3f(-1, 1, -1);
	glVertex3f(1, 1, -1);
	glVertex3f(1, 1, 1);
	glVertex3f(-1, 1, 1);


	glColor3f(1, 0, 1);
	glVertex3f(-1, -1, -1);
	glVertex3f(-1, 1, -1);
	glVertex3f(-1, 1, 1);
	glVertex3f(-1, -1, 1);

	glColor3f(0, 1, 0);
	glVertex3f(1, -1, -1);
	glVertex3f(1, 1, -1);
	glVertex3f(1, 1, 1);
	glVertex3f(1, -1, 1);

	glColor3f(0.7, 0.7, 0.7);
	glVertex3f(-1, -1, 1);
	glVertex3f(-1, 1, 1);
	glVertex3f(1, 1, 1);
	glVertex3f(1, -1, 1);

	glColor3f(0, 0, 1);
	glVertex3f(-1, -1, -1);
	glVertex3f(-1, 1, -1);
	glVertex3f(1, 1, -1);
	glVertex3f(1, -1, -1);
	glEnd();
	glPopMatrix();
	//the mouth
	glPushMatrix();
	glColor3f(1, 0, 1);
	glTranslatef(0, 7, 0);
	glScalef(1, 0.5, 1);
	glutSolidCube(2);
	glPopMatrix();
	glPopMatrix();
	glPushMatrix();
	glColor3f(0, 1, 1);
	glTranslatef(0, -2, 0);
	glScalef(5, 1, 80.0f);

	glPopMatrix();
	

	glFlush();

	

	
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowPosition(10, 10);
	glutInitWindowSize(600, 600);
	glutCreateWindow("cube");
	init();
	glutDisplayFunc(display);

	glutMainLoop();
}