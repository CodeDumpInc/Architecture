#-------------------------------------------------
#
# Project created by QtCreator 2015-05-17T20:13:17
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ModelViewController
TEMPLATE = app


SOURCES += main.cpp\
    MainWindow.cpp \
    Users/UserController.cpp \
    Users/UserRepository.cpp \
    Users/UserModel.cpp \
    Users/UserDetailView.cpp \
    Users/UserListView.cpp \
    Users/UserWidget.cpp \
    MainController.cpp

HEADERS  += MainWindow.h \
    Users/UserController.h \
    Users/UserDetailView.h \
    Users/UserRepository.h \
    Users/UserModel.h \
    Users/UserListView.h \
    Users/UserWidget.h \
    MainController.h

FORMS += \
    Users/UserDetailView.ui \
    Users/UserListView.ui \
    Users/UserWidget.ui
