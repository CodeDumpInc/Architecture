#include "MainWindow.h"

#include "MainController.h"

void MainWindow::changeView(const QString &path)
{
    this->setCentralWidget(m_controller.view(path));
}

MainWindow::MainWindow(MainController &controller, QWidget *parent)
    : QMainWindow(parent)
    , m_controller(controller)
{
    this->connect(&m_controller, SIGNAL(viewChangeRequested(QString)), SLOT(changeView(QString)));
    this->changeView("users");
}
