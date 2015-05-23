#pragma once

#include <QMainWindow>

class MainController;

class MainWindow
    : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(MainController &controller, QWidget *parent = 0);

private slots:
    void changeView(const QString& path);

private:
    MainController &m_controller;
};
