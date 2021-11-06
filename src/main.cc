#include <stdio.h>
#include <stdlib.h>

#include <GL/freeglut.h>
#include <GL/gl.h>

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);

    int screenHeight = glutGet(GLUT_SCREEN_HEIGHT);
    int screenWidth = glutGet(GLUT_SCREEN_WIDTH);

    glutInitWindowSize(screenWidth, screenHeight);
    glutInitWindowPosition(screenWidth / 2, screenHeight / 2);

    glutCreateWindow("Soaking Raspberries - Reaction-diffusion");
    glutMainLoop();
    return 0;
}