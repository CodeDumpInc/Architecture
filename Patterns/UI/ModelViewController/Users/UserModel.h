#pragma once

#include <QString>

namespace Users {

class UserModel
{
public:
    UserModel(const QString &name, const QString &mail);

    const QString &name() const;
    const QString &mail() const;

    void setName(const QString &name);
    void setMail(const QString &mail);

private:
    QString m_name;
    QString m_mail;
};

}
