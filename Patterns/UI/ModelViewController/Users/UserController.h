#pragma once

#include <QScopedPointer>
#include "UserRepository.h"

namespace Users {

class UserController
{
public:
    UserController();

    QWidget *listView();

private:
    QScopedPointer<UserRepository> m_repository;
};

}
