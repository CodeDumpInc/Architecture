#pragma once

#include <QObject>

namespace Users {

class UserModel;

class UserRepository
    : public QObject
{
public:
    UserRepository();
    ~UserRepository();

    QList<UserModel*> allUsers();

private:
    QList<UserModel*> m_s;
};

}
