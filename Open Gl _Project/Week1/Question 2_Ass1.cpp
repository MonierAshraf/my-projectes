// ConsoleApplication3_test.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <GL/glut.h>
void RenderScene(void) {
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);	//Clear 

	glBegin(GL_TRIANGLES); //Number 1
	glColor3f(1.0, 0.0, 1.0);
	glVertex2d(120, 120);
	glVertex2d(150, 10);
	glVertex2d(100, 90);



	glEnd();


	glBegin(GL_TRIANGLES);//number 2
	glColor3f(0.0, 1.0, 1.0);
	glVertex2d(0, 0);
	glVertex2d(400, 300);
	glVertex2d(300, 0);



	glEnd();
	glFlush(); // Flush drawing commands
}

#define drawW 600
#define drawH 600

void ChangeSize(int width, int height)
{
	//set the coordinates and size of the viewing area on the window
	glViewport(0, 0, width, height);

	// Start modifying the projection matrix.
	glMatrixMode(GL_PROJECTION);

	// Reset the matrix
	glLoadIdentity();

	// set the displayed area
	float ratio = (float)width / height; //aspect ratio
	if (width > height)
	{
		glOrtho(-drawW * ratio, drawW * ratio, -drawH, drawH, -1, 1);
	}
	else
	{
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
