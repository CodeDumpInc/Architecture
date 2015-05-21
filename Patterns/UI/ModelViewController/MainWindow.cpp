#include "MainWindow.h"

#include "MainController.h"

MainWindow::MainWindow(MainController &controller, QWidget *parent)
    : QMainWindow(parent)
    , m_controller(controller)
{
    this->setCentralWidget(m_controller.view("users"));
}
