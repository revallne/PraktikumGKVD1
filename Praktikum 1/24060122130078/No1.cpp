/*
 * FreeGLUT Shapes Demo
 *
 * Written by Nigel Stewart November 2003
 *
 * This program is test harness for the sphere, cone
 * and torus shapes in FreeGLUT.
 *
 * Spinning wireframe and smooth shaded shapes are
 * displayed until the ESC or q key is pressed.  The
 * number of geometry stacks and slices can be adjusted
 * using the + and - keys.
 */

#include <GLUT/glut.h>
#include <stdlib.h>


void Tugas1(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_LINE_STRIP);
    glLineWidth(2.0f);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.9, 0.7);
    glVertex2f(-0.8, 0.9);
    glVertex2f(-0.7, 0.7);
    glVertex2f(-0.6, 0.9);
    glEnd();
    glFlush();
    
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.5, 0.9);
    glVertex2f(-0.3, 0.9);
    glVertex2f(-0.5, 0.7);
    glVertex2f(-0.3, 0.7);
    glEnd();
    glFlush();
    
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(-0.2, 0.9);
    glColor3f(0.249, 0.19, 0.147);
    glVertex2f(0.0, 0.9);
    glColor3f(0.178, 0.34, 0.33);
    glVertex2f(-0.2, 0.7);
    glColor3f(0.205, 0.92, 0.92);
    glVertex2f(0.0, 0.7);
    glColor3f(0.124, 0.252, 0.2);
    glEnd();
    glFlush();
    
    glBegin(GL_TRIANGLE_STRIP);
    glVertex2f(-0.9, 0.6);
    glColor3f(0.124, 0.22, 0.33);
    glVertex2f(-0.7, 0.6);
    glColor3f(0.32, 0.34, 0.281);
    glVertex2f(-0.9, 0.5);
    glColor3f(0.178, 0.34, 0.123);
    glVertex2f(-0.8, 0.5);
    glColor3f(0.195, 0.92, 0.92);
    glVertex2f(-0.9, 0.4);
    glColor3f(0.124, 0.252, 0.64);
    glVertex2f(-0.7, 0.4);
    glEnd();
    glFlush();
    
    glBegin(GL_QUADS);
    glVertex2f(-0.5, 0.6);
    glColor3f(0.249, 0.19, 0.147);
    glVertex2f(-0.3, 0.6);
    glColor3f(0.178, 0.34, 0.33);
    glVertex2f(-0.5, 0.4);
    glColor3f(0.205, 0.92, 0.92);
    glVertex2f(-0.3, 0.4);
    glColor3f(0.124, 0.252, 0.2);
    glEnd();
    glFlush();
    
    glBegin(GL_QUAD_STRIP);
    glVertex2f(-0.2, 0.6);
    glColor3f(0.124, 0.22, 0.33);
    glVertex2f(0.0, 0.6);
    glColor3f(0.32, 0.34, 0.281);
    glVertex2f(-0.2, 0.5);
    glColor3f(0.178, 0.34, 0.123);
    glVertex2f(-0.1, 0.5);
    glColor3f(0.195, 0.92, 0.92);
    glVertex2f(-0.2, 0.4);
    glColor3f(0.124, 0.252, 0.64);
    glVertex2f(0.0, 0.4);
    glEnd();
    glFlush();
}


int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Tugas 1 (1)");
    glutDisplayFunc(Tugas1);
    glClearColor(1.0f, 0.5f, 0.5f, 1.0f);
    glutMainLoop();
    return 0;
}

