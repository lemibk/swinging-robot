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
	glColor3f(0.7, 0.7, 0.7);
	glTranslatef(5, 0, -10);
	glScalef(0.5, 5, 1);
	glRotatef(90, 1, 0, 0);
	glRotatef(90, 10, 0, 0);
	GLUquadric* top = gluNewQuadric();
	gluCylinder(top, 1, 1, 3, 32, 32);
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