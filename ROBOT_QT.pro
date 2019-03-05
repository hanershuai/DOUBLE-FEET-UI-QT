#-------------------------------------------------
#
# Project created by QtCreator 2018-10-25T21:43:12
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ROBOT_QT
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        mainwindow.cpp \
    global.cpp \
    image.cpp \
    point.cpp \
    vector.cpp \
    basicwalk.cpp \
    OPKinematics.cpp \
    transform.cpp \
    head_actions.cpp \
    pid_debug.cpp \
    util.cpp \
    body_actions.cpp \
    my_pthread.cpp

HEADERS += \
        mainwindow.h \
    global.h \
    image.h \
    basicwalk.h \
    vector.h \
    point.h \
    OPKinematics.h \
    transform.h \
    head_actions.h \
    pid_debug.h \
    util.h \
    body_actions.h \
    my_pthread.h

FORMS += \
        mainwindow.ui
INCLUDEPATH += /usr/local/include/opencv\
/usr/local/include/opencv2\
/usr/local/include\
/usr/local/lib\
/lib/x86_64-linux-gnu\


LIBS +=/usr/local/lib/libopencv_core.so\
/usr/local/lib/libopencv_highgui.so\
/usr/local/lib/libopencv_ml.so\
/usr/local/lib/libopencv_photo.so\
/usr/local/lib/libopencv_gpu.so\
/usr/local/lib/libopencv_legacy.so\
/usr/local/lib/libopencv_nonfree.so\
/usr/local/lib/libopencv_ocl.so\
/usr/local/lib/libopencv_stitching.so\
/usr/local/lib/libopencv_superres.so\
/usr/local/lib/libopencv_video.so\
/usr/local/lib/libopencv_videostab.so\
/usr/local/lib/libopencv_imgproc.so\
/lib/x86_64-linux-gnu/libpthread-2.23.so\
