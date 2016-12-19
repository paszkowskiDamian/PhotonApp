#-------------------------------------------------
#
# Project created by QtCreator 2016-12-19T17:46:17
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = PhotonGUI
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    ../PhotonApp/PhotonApp/bitmap.cpp \
    ../PhotonApp/PhotonApp/bmpHeaders.cpp \
    ../PhotonApp/PhotonApp/image.cpp \
    ../PhotonApp/PhotonApp/pixel.cpp \
    ../PhotonApp/PhotonApp/pixelMatrix.cpp

HEADERS  += mainwindow.h \
    ../PhotonApp/PhotonApp/bitmap.h \
    ../PhotonApp/PhotonApp/bmpHeaders.h \
    ../PhotonApp/PhotonApp/image.h \
    ../PhotonApp/PhotonApp/pixel.h \
    ../PhotonApp/PhotonApp/pixelMatrix.h

FORMS    += mainwindow.ui
