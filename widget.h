#ifndef WIDGET_H
#define WIDGET_H
#pragma once

#include <QOpenGLWidget>
#include <QTimer>
#include <gl/GL.h>
#include <gl/GLU.h>
#include <QMouseEvent>

#pragma comment(lib,"opengl32.lib")
#pragma comment(lib,"GlU32.lib")

class Widget : public QOpenGLWidget
{
    Q_OBJECT
private slots:
    void pickCube();
    void pickPyramid();
    void pickPrisma();
    void pickParall();
private:
    float xRot, yRot, zRot;
    int figure = 0;
    QPoint mPos;
    QTimer tmr;
    void drawCube(float a);
    void mousePressEvent(QMouseEvent*) override;
    void mouseMoveEvent(QMouseEvent*) override;
    void initializeGL() override;
    void resizeGL(int w, int h) override;
    void paintGL() override;
    void drawPyramid();
    void drawPrisma();
    void drawParall();

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
};
#endif // WIDGET_H
