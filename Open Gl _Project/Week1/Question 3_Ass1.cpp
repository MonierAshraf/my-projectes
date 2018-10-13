// ConsoleApplication3_test.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <GL/glut.h>
void RenderScene(void) {
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);	//Clear 


														/* Question 1*/
														/*glBegin(GL_QUADS);
														glColor3f(1.0, 0.0, 0.0);
														glVertex2d(200, 100);
														glVertex2d(200, -100);
														glVertex2d(500, -100);
														glVertex2d(500, 100);



														glEnd();*/

														//	Other Sloution //											
	glColor3f(1.0, 0.0, 0.0);
	glRectf(-100.0f, 100.0f, 200.0f, -100.0f);

	/*------------------------------------------------------------------------------------------*/
	/* Question 2*/



	glColor3f(1.0, 0.0, 1.0);
	glRectf(300.0f, 200.0f, 600.0f, 600.0f);

	glFlush(); // Flush drawing commands
}

#define drawW 700
#define drawH 700
void ChangeSize(int wiedth, int hieght) {
	glViewport(0, 0, wiedth, hieght);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	float ratio = (float)wiedth / hieght;
	if (wiedth>hieght) {
		glOrtho(-drawW * ratio, drawW*ratio, -drawH, drawH, -1, 1);
	}
	else {
		glOrtho(-drawW, drawW, -drawH / ratio, drawH / ratio, -1, 1);

	}


	glClearColor(1, 1, 1, 1); //back ground white  to clear with this color

}



int main(int argc, char* argv[]) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA); //Single or Double //Color
	glutInitWindowSize(800, 600); //Size Window 
	glutCreateWindow("Sampile");//name Of window

	glutDisplayFunc(RenderScene);//name of Function before name and use it to drow

	glutReshapeFunc(ChangeSize);//Change Size


	glutMainLoop();//Infit loob to Strart Program and put it last line code 

	return 0;
}
