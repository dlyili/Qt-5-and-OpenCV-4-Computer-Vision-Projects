TEMPLATE = app
TARGET = GLFilter

QT += core gui widgets

INCLUDEPATH += .


# use your own path in the following config
unix: !mac {
    INCLUDEPATH += /home/kdr2/programs/opencv/include/opencv4
    LIBS += -L/home/kdr2/programs/opencv/lib -lopencv_core -lopencv_imgcodecs -lopencv_imgproc
}

unix: mac {
    INCLUDEPATH += /path/to/opencv/include/opencv4
    LIBS += -L/path/to/opencv/lib -lopencv_world
}

win32 {
    INCLUDEPATH += D:\work\opensource\dev\src\opencv\opencv-4.0.1\build\include
    LIBS += -lD:\work\opensource\dev\src\opencv\opencv-4.0.1\build\x64\vc15\lib\opencv_world401d
}


DEFINES += QT_DEPRECATED_WARNINGS

# Input
HEADERS += glpanel.h
SOURCES += main.cpp glpanel.cpp

RESOURCES = res.qrc
