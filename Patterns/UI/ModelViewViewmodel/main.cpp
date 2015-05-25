#include <QApplication>

#include "UserWidgetViewmodel.h"
#include "UserWidget.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    User user;
    UserWidgetViewmodel viewModel(user);
    UserWidget widget(viewModel);

    widget.show();

    return a.exec();
}
