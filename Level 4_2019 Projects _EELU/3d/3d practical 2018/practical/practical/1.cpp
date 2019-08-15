#include <gl/glut.h>
void RenderScene(void){
	
	glClear(GL_COLOR_BUFFER_BIT);
	
	glColor3f(1.0f, 0.0f, 0.0f);
	
	//code for 1 in english
	/*glBegin(GL_LINES);
	glVertex2d(10,20);
	glVertex2d(10,-20);
	glVertex2d(0,-20);
	glVertex2d(20,-20);
	glVertex2d(0,15);
	glVertex2d(10,20);
	glEnd();*/

	//code for 2 in english
	/*glBegin(GL_LINE_STRIP);
	glVertex2d(-10,20);
	glVertex2d(10,20);
	glVertex2d(10,0);
	glVertex2d(-10,0);
	glVertex2d(-10,-20);
	glVertex2d(10,-20);
	glEnd();*/


	//code for 3 in english
	/*glBegin(GL_LINES);
	glVertex2d(-10,20);
	glVertex2d(10,20);
	glVertex2d(10,20);
	glVertex2d(10,0);
	glVertex2d(10,0);
	glVertex2d(-10,0);
	glVertex2d(10,0);
	glVertex2d(10,-20);
	glVertex2d(10,-20);
	glVertex2d(-10,-20);
	glEnd();*/


	//code for 4 in english
	/*glBegin(GL_LINES);
	glVertex2d(-10,20);
	glVertex2d(-10,0);
	glVertex2d(-10,0);
	glVertex2d(10,0);
	glVertex2d(10,20);
	glVertex2d(10,-20);
	glEnd();*/


	//code for 5 in english
	/*glBegin(GL_LINE_STRIP);
	glVertex2d(10,20);
	glVertex2d(-10,20);
	glVertex2d(-10,0);
	glVertex2d(10,0);
	glVertex2d(10,-20);
	glVertex2d(-10,-20);
	glEnd();*/


	//code for 6 in english
	/*glBegin(GL_LINE_STRIP);
	glVertex2d(-10,0);
	glVertex2d(10,0);
	glVertex2d(10,-20);
	glVertex2d(-10,-20);
	glVertex2d(-10,20);
	glVertex2d(10,20);
	glEnd();*/


	//code for 7 in english
	/*glBegin(GL_LINE_STRIP);
	glVertex2d(-10,20);
	glVertex2d(10,20);
	glVertex2d(-10,-20);
	glEnd();*/


	//code for 8 in english
	/*glBegin(GL_LINES);
	glVertex2d(-10,0);
	glVertex2d(10,0);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glVertex2d(-10,20);
	glVertex2d(10,20);
	glVertex2d(10,-20);
	glVertex2d(-10,-20);
	glEnd();*/
	


	//code for 9 in english
	/*glBegin(GL_LINE_STRIP);
	glVertex2d(10,0);
	glVertex2d(-10,0);
	glVertex2d(-10,20);
	glVertex2d(10,20);
	glVertex2d(10,-20);
	glVertex2d(-10,-20);
	glEnd();*/


	glFlush();
}

void ChangeSize(GLsizei w, GLsizei h) {
	GLfloat aspectRatio;
	
	if(h == 0) h = 1;
	
	glViewport(0, 0, w, h);
	
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	
	aspectRatio = (GLfloat)w / (GLfloat)h;
	if (w <= h)
		glOrtho (-100.0, 100.0, -100 / aspectRatio, 100.0 / aspectRatio,1.0, -1.0);
	else
		glOrtho (-100.0 * aspectRatio, 100.0 * aspectRatio,-100.0, 100.0, 1.0, -1.0);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
}
int main(int argc, char* argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutCreateWindow("GLRect");
	glutDisplayFunc(RenderScene);
	glutReshapeFunc(ChangeSize);
	glClearColor(0.0f, 0.0f, 1.0f, 1.0f);
	glutMainLoop();
	return 0;
}
