#pragma once

#include <QString>

namespace Users {

class UserModel
{
public:
    UserModel(const QString &name, const QString &mail);

    const QString &name() const;
    const QString &mail() const;

private:
    QString m_name;
    QString m_mail;
};

}
