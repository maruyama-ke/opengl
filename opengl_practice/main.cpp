#include <GL/glut.h>
#include "stdio.h"

void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_POLYGON);
	glColor3d(1.0, 0.0, 0.0); /* �� */
	glVertex2d(-0.9, -0.9);
	glColor3d(0.0, 1.0, 0.0); /* �� */
	glVertex2d(0.9, -0.9);
	glColor3d(0.0, 0.0, 1.0); /* �� */
	glVertex2d(0.9, 0.9);
	glColor3d(1.0, 1.0, 0.0); /* �� */
	glVertex2d(-0.9, 0.9);
	glEnd();
	glFlush();
}

void resize(int w, int h)
{
	/* �E�B���h�E�S�̂��r���[�|�[�g�ɂ��� */
	glViewport(0, 0, w, h);

	/* �ϊ��s��̏����� */
	glLoadIdentity();

	/* �X�N���[����̕\���̈���r���[�|�[�g�̑傫���ɔ�Ⴓ���� */
	glOrtho(-w / 200.0, w / 200.0, -h / 200.0, h / 200.0, -1.0, 1.0);
}


void init(void)
{
	glClearColor(1.0, 1.0, 1.0, 1.0);
}

int main(int argc, char *argv[])
{
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(980, 640);
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGBA);
	glutCreateWindow(argv[0]);
	glutDisplayFunc(display);
	glutReshapeFunc(resize);
	init();
	glutMainLoop();
	return 0;
}
