#-------------------------------------------------
#
# Project created by QtCreator 2014-03-05T09:47:53
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SWPClock
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    clockpainter.cpp \
    clock.cpp

HEADERS  += mainwindow.h \
    clockpainter.h \
    clock.h \
    iobserver.h \
    icommand.h

FORMS    += mainwindow.ui