#-------------------------------------------------
#
# Project created by QtCreator 2015-08-24T09:20:33
#
#-------------------------------------------------

QT       += core

QT       -= gui

TARGET = ItemPimpl
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app

LIBS += -lpsapi


SOURCES += main.cpp \
    ItemImpl.cpp \
    Item.cpp \
    SimpleItem.cpp \
    RamTracker/RamTracker.cpp \
    RamTracker/Utils.cpp

HEADERS += \
    ItemImpl.h \
    Item.h \
    SimpleItem.h \
    RamTracker/RamTracker.h \
    RamTracker/Utils.h
