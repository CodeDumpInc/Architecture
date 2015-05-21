#include "UserModel.h"

using namespace Users;

UserModel::UserModel(const QString &name, const QString &mail)
    : m_name(name)
    , m_mail(mail)
{

}
const QString &UserModel::name() const
{
    return m_name;
}

const QString &UserModel::mail() const
{
    return m_mail;
}
