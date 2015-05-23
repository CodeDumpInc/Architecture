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
    UserModel *user(const QString &name);

private:
    QList<UserModel*> m_s;
};

}
