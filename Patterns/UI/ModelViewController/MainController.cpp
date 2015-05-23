#include "MainController.h"

#include "Users/UserController.h"

MainController::MainController(QObject *parent)
    : QObject(parent)
{
    this->connect(&m_userController, SIGNAL(viewChangeRequested(QString)), SIGNAL(viewChangeRequested(QString)));
}

QWidget *MainController::view(const QString &path)
{
    if(path.startsWith("users")) {
        return m_userController.view(QString(path)
                                         .replace("users", "")
                                     );
    }

    return 0;
}

