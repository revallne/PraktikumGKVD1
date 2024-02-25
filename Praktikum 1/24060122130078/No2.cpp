#include <GLUT/glut.h>
#include <stdlib.h>


void Love(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.240f, 0.255f, 0.240f);
    glRectf(-0.1, 0.3, 0.1, 0.1);
    glRectf(0.1, 0.5, 0.3, 0.3);
    glRectf(0.3, 0.3, 0.5, 0.1);
    glRectf(0.3, 0.1, 0.5, -0.1);
    glRectf(0.1, -0.1, 0.3, -0.3);
    glRectf(-0.1, -0.3, 0.1, -0.5);
    glRectf(-0.3, -0.1, -0.1, -0.3);
    glRectf(-0.5, 0.1, -0.3, -0.1);
    glRectf(-0.5, 0.3, -0.3, 0.1);
    glRectf(-0.3, 0.5, -0.1, 0.3);
    glFlush();
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Tugas 1 (2)");
    glutDisplayFunc(Love);
    glClearColor(1.0f, 0.5f, 0.5f, 1.0f);
    glutMainLoop();
    return 0;
}
