#include "UserModel.h"

#include <QDebug>

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

void UserModel::setName(const QString &name)
{
    m_name = name;

    qDebug() << "Name changed to" << name;
}

void UserModel::setMail(const QString &mail)
{
    m_mail = mail;

    qDebug() << "Mail changed to" << mail;
}
