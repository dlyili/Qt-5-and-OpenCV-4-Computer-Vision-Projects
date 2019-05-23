// mode: c++
#ifndef GL_PANEL_H
#define GL_PANEL_H

#include <QOpenGLFunctions>
#include <QOpenGLFunctions_4_2_Core>
#include <QOpenGLWidget>

#include <QOpenGLBuffer>
#include <QOpenGLShaderProgram>
#include <QOpenGLVertexArrayObject>

#include <QString>
#include <QImage>

class GLPanel : public QOpenGLWidget, protected QOpenGLFunctions_4_2_Core
{
    Q_OBJECT

public:
    GLPanel(QWidget *parent = nullptr);
    ~GLPanel();

protected:
    void initializeGL() override;
    void paintGL() override;
    void resizeGL(int w, int h) override;

private:
    void saveOutputImage(QString path);

private:
    GLuint vbo;
    GLuint vao;
    GLuint texture;
    GLuint shaderProg;

    QImage img;
};

#endif
