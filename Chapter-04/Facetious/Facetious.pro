TEMPLATE = app
TARGET = Facetious
INCLUDEPATH += .

QT += core gui multimedia
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

unix: !mac {
    INCLUDEPATH += /home/kdr2/programs/opencv/include/opencv4
    LIBS += -L/home/kdr2/programs/opencv/lib -lopencv_core -lopencv_imgproc -lopencv_imgcodecs -lopencv_video -lopencv_videoio -lopencv_objdetect -lopencv_face
}

unix: mac {
    INCLUDEPATH += /path/to/opencv/include/opencv4
    LIBS += -L/path/to/opencv/lib -lopencv_world
}

win32 {
    INCLUDEPATH += D:\work\opensource\dev\src\opencv\opencv-4.0.1\build\include
    LIBS += -lD:\work\opensource\dev\src\opencv\opencv-4.0.1\build\x64\vc15\lib\opencv_world401d
}


# Input
HEADERS += mainwindow.h capture_thread.h utilities.h
SOURCES += main.cpp mainwindow.cpp capture_thread.cpp utilities.cpp

# DEFINES += OPENCV_DATA_DIR=\\\"/usr/share/opencv/\\\"
DEFINES += OPENCV_DATA_DIR=\\\"/home/kdr2/programs/opencv/share/opencv4/\\\"

RESOURCES = images.qrc
