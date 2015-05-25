#-------------------------------------------------
#
# Project created by QtCreator 2015-05-25T14:09:56
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ModelViewViewmodel
TEMPLATE = app


SOURCES += main.cpp\
    User.cpp \
    UserWidgetViewmodel.cpp \
    UserWidget.cpp

HEADERS  += \
    User.h \
    UserWidgetViewmodel.h \
    UserWidget.h

FORMS    += MainWindow.ui \
    UserWidget.ui
