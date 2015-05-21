#pragma once

#include <QMainWindow>

class MainController;

class MainWindow
    : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(MainController &controller, QWidget *parent = 0);

private:
    MainController &m_controller;
};
