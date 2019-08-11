#-------------------------------------------------
#
# Project created by QtCreator 2014-02-26T16:51:17
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Vfp
TEMPLATE = app

QMAKE_CXXFLAGS = -std=c++11

SOURCES += main.cpp\
        View/mainview.cpp \
    View/setuptab.cpp \
    startup.cpp \
    utils.cpp \
    Model/settings.cpp \
    Model/provider.cpp \
    Model/instsocket.cpp \
    Model/instrument.cpp \
    ViewMgr/setupviewmanager.cpp \
    View/controltab.cpp \
    ViewMgr/controltabviewmanager.cpp \
    View/aboutbox.cpp


HEADERS  += View/mainview.h \
    View/setuptab.h \
    startup.h \
    utils.h \
    Model/settings.h \
    Model/provider.h \
    Model/instsocket.h \
    Model/instrument.h \
    ViewMgr/setupviewmanager.h \
    View/controltab.h \
    ViewMgr/controltabviewmanager.h \
    View/aboutbox.h

FORMS    += View/mainview.ui \
    View/setuptab.ui \
    View/controltab.ui \
    View/aboutbox.ui

RESOURCES += \
    VfpResources.qrc
