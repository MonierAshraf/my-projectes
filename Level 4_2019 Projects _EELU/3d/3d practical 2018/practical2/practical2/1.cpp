#include <gl/glut.h>
#include <Math.h>
void RenderScene(void){
	
	glClear(GL_COLOR_BUFFER_BIT);
	
	glColor3f(1.0f, 0.0f, 0.0f);
	
	//code for 1 in Arabic
	/*glBegin(GL_LINES);
	glVertex2d(10,20);
	glVertex2d(10,-20);
	glEnd();*/

	//code for 2 in Arabic
	/*glBegin(GL_LINE_STRIP);
	glVertex2d(10,20);
	glVertex2d(-10,20);
	glVertex2d(10,-20);
	glEnd();*/


	//code for 3 in Arabic
	/*glBegin(GL_LINES);
	glVertex2d(10,20);
	glVertex2d(10,0);
	glVertex2d(0,20);
	glVertex2d(0,0);
	glVertex2d(-10,20);
	glVertex2d(-10,-20);
	glVertex2d(10,0);
	glVertex2d(-10,0);
	glEnd();*/


	//code for 4 in Arabic
	/*glBegin(GL_LINES);
	glVertex2d(10,20);
	glVertex2d(-10,20);
	glVertex2d(10,0);
	glVertex2d(-10,0);
	glVertex2d(10,-20);
	glVertex2d(-10,-20);
	glVertex2d(-10,20);
	glVertex2d(-10,-20);
	glEnd();*/

#define GPL_PI 3.1415
	//code for 5 in Arabic
	/*glBegin(GL_LINE_LOOP);
	for(float i=0;i<(2*GPL_PI);i+=0.01)
	{
	glVertex2d(10*cos(i),10*sin(i));
	}
	glEnd();
	*/

	//code for 6 in Arabic
	/*glBegin(GL_LINE_STRIP);
	glVertex2d(-10,20);
	glVertex2d(10,20);
	glVertex2d(10,-20);
	glEnd();*/


	//code for 7 in Arabic
	/*glBegin(GL_LINE_STRIP);
	glVertex2d(10,20);
	glVertex2d(0,-20);
	glVertex2d(10,-20);
	glEnd();*/


	//code for 8 in Arabic
	/*glBegin(GL_LINE_STRIP);
	glVertex2d(10,-20);
	glVertex2d(0,20);
	glVertex2d(-10,-20);
	glEnd();*/
	


	//code for 9 in Arabic
	glBegin(GL_LINE_LOOP);
	for(float i=0;i<(2*GPL_PI);i+=0.01)
	{
	glVertex2d(10*cos(i),10*sin(i));
	}
	glEnd();
	glBegin(GL_LINES);
	glVertex2d(10,0);
	glVertex2d(10,-20);
	glEnd();

	
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
