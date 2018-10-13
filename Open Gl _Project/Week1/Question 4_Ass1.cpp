// ConsoleApplication3_test.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <GL/glut.h>
void RenderScene(void) {
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);	//Clear 


							
														
																												/*------------------------------------------------------------------------------------------*/

														/*
														glBegin(GL_LINES);
														glColor3f(1.0, 0.0, 0.0);
														glVertex2d(150, 300);

														glVertex2d(0, 0);
														glVertex2d(300, 0);
														glVertex2d(150, 300);
														glVertex2d(75, 150);
														glVertex2d(230, 150);


														glEnd();
														glBegin(GL_LINES);
														glColor3f(0.0, 0.0,1.0);
														glVertex2d(150, 300);
														glVertex2d(150, 0);

														glVertex2d(150, 170);
														glVertex2d(400, 170);
														glVertex2d(400, 0);
														glVertex2d(400, 300);


														glEnd();*/
	//Other Solution //






	glBegin(GL_QUADS);//1A
	glColor3f(1.0, 0.0, 0.0);
	glVertex2d(28, 0);
	glVertex2d(-40, 0);
	glVertex2d(130, 305);
	glVertex2d(172, 272);


	glEnd();

	glBegin(GL_POLYGON);//7H
	glColor3f(0.0, 0.0, 1.0);

	glVertex2d(190, 199);
	glVertex2d(190, 150);
	glVertex2d(351, 150);
	glVertex2d(351, 199);


	glEnd();

	glBegin(GL_POLYGON);//6H
	glColor3f(0.0, 0.0, 1.0);
	glVertex2d(350, 0);
	glVertex2d(408, 0);
	glVertex2d(408, 305);
	glVertex2d(350, 305);




	glEnd();
	glBegin(GL_QUADS);//2 A
	glColor3f(1.0, 0.0, 0.0);
	glVertex2d(310, 0);
	glVertex2d(375, 0);
	glVertex2d(190, 305);
	glVertex2d(142, 272);


	glEnd();

	glBegin(GL_QUADS);//3 A
	glColor3f(1.0, 0.0, 0.0);
	glVertex2d(76, 150);
	glVertex2d(46, 90);


	glVertex2d(285, 90);
	glVertex2d(254, 150);

	glEnd();

	glBegin(GL_QUADS);//4H
	glColor3f(0.0, 0.0, 1.0);
	glVertex2d(190, 305);
	glVertex2d(130, 305);


	glVertex2d(130, 149);
	glVertex2d(190, 149);

	glEnd();

	glBegin(GL_QUADS);//5H
	glColor3f(0.0, 0.0, 1.0);
	glVertex2d(190, 90);
	glVertex2d(130, 90);


	glVertex2d(130, 0);
	glVertex2d(190, 0);

	glEnd();




	

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
