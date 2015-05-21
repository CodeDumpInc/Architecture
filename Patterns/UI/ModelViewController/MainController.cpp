#include "MainController.h"

#include "Users/UserController.h"

QWidget *MainController::view(const QString &path)
{
    if(path == "users") {
        return m_userController.listView();
    }

    return 0;
}

