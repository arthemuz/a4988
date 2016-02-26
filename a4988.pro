QT += core
QT -= gui

CONFIG += c++11

TARGET = a4988
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    a4988.cpp

HEADERS += \
    a4988.h

INCLUDEPATH += /usr/local/include

LIBS    += -L/usr/local/lib -lwiringPi
