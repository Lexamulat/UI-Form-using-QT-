#-------------------------------------------------
#
# Project created by QtCreator 2018-03-24T21:29:26
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = untitled
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

GONFIG +=\
        console

SOURCES += \
        main.cpp \
        widget.cpp \
    estate.cpp \
    states.cpp \
    calculationfacade.cpp \
    apartmentcalc.cpp \
    luxuriousapartmentcalc.cpp \
    townhousecalc.cpp \
    cottagecalc.cpp \
    calcfactory.cpp \
    abstract.cpp

HEADERS += \
        widget.h \
    estate.h \
    states.h \
    calculationfacade.h \
    apartmentcalc.h \
    luxuriousapartmentcalc.h \
    townhousecalc.h \
    cottagecalc.h \
    calcfactory.h \
    abstract.h

FORMS += \
        widget.ui
