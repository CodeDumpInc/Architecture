#pragma once

#include <Users/UserController.h>

class MainController
{

public:
    QWidget* view(const QString &path);

private:
    Users::UserController m_userController;
};
