#include "User.h"

#include <QDebug>

QString User::email() const
{
    return m_email;
}

void User::setEmail(const QString &email)
{
    m_email = email;

    qDebug() << "Email set to" << email;
}

QString User::firstName() const
{
    return m_firstName;
}

void User::setFirstName(const QString &firstName)
{
    m_firstName = firstName;

    qDebug() << "First name set to" << firstName;
}
QString User::lastName() const
{
    return m_lastName;
}

void User::setLastName(const QString &lastName)
{
    m_lastName = lastName;

    qDebug() << "Last name set to" << lastName;
}

