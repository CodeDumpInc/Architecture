#include <QApplication>

#include "MainWindow.h"
#include "MainController.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainController controller;


    MainWindow w(controller);
    w.show();

    return a.exec();
}
