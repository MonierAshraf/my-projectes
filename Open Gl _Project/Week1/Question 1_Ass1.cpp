#include "stdafx.h"

#include <GL/glut.h>
void RenderScene(void) {
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);	//Clear 

	glBegin(GL_LINES);
	glColor3f(0.0, 0.0, 1.0);//Line Blue
	glVertex2d(0, 0);
	glVertex2d(400, 400);

	glColor3f(0.0, 0.0, 0.0);//Line Black
	glVertex2d(100, 400);
	glVertex2d(400, 100);



	glEnd();



	glFlush(); // Flush drawing commands
}

#define drawW 500
#define drawH 500

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

	//set the default buffer color
	glClearColor(255, 255, 0, 1);

}



int main(int argc, char* argv[]) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA); //Single or Double //Color
	glutInitWindowSize(500, 500); //Size Window 
	glutCreateWindow("Sampile");//name Of window

	glutDisplayFunc(RenderScene);//name of Function before name and use it to drow

	glutReshapeFunc(ChangeSize); //glutReshapeFunc(ChangeSize);//Change Size


	glutMainLoop();//Infit loob to Strart Program and put it last line code 

	return 0;
}
