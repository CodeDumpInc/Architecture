#ifndef USER_H
#define USER_H

#include <QString>

class User
{
public:
    QString email() const;
    QString firstName() const;
    QString lastName() const;

    void setEmail(const QString &email);
    void setFirstName(const QString &firstName);
    void setLastName(const QString &lastName);

private:
    QString m_firstName;
    QString m_lastName;

    QString m_email;
};

#endif // USER_H
