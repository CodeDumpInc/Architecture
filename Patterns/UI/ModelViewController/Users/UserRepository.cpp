#include "UserRepository.h"

#include "UserModel.h"

using namespace Users;

UserRepository::UserRepository()
{
    for(int i=1; i <= 10; ++i) {
        m_s << new UserModel(QString("User%0").arg(i), QString("user%0@mail.com").arg(i));
    }
}

UserRepository::~UserRepository()
{
    ::qDeleteAll(m_s);
}


QList<UserModel*> UserRepository::allUsers()
{
    return m_s;
}

UserModel *UserRepository::user(const QString &name)
{
    foreach(UserModel *user, m_s) {
        if(user && user->name() == name) {
            return user;
        }
    }

    return 0;
}
