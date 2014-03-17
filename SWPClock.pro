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
    clock.cpp \
    analogclockwindow.cpp \
    commandincrement.cpp \
    commandundo.cpp \
    commandredo.cpp \
    commandshow.cpp \
    digitalclockwidget.cpp \
    digitalclockwindow.cpp \
    commanddecrement.cpp \
    commandset.cpp \
    commandhelp.cpp \
    helpwindow.cpp

HEADERS  += mainwindow.h \
    clockpainter.h \
    clock.h \
    iobserver.h \
    icommand.h \
    analogclockwindow.h \
    commandincrement.h \
    commandundo.h \
    commandredo.h \
    commandshow.h \
    types.h \
    digitalclockwidget.h \
    digitalclockwindow.h \
    commanddecrement.h \
    commandset.h \
    commandhelp.h \
    helpwindow.h

FORMS    += mainwindow.ui \
    analogclockwindow.ui \
    digitalclockwindow.ui \
    helpwindow.ui

QMAKE_CXXFLAGS += -std=c++11
