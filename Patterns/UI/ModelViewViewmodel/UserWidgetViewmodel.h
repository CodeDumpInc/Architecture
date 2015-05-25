#ifndef USERVIEWMODEL_H
#define USERVIEWMODEL_H

#include "User.h"

#include <QObject>

class UserWidgetViewmodel
    : public QObject
{
    Q_OBJECT

public:
    UserWidgetViewmodel(User &user)
        : m_user(user)
        , m_firstName( user.firstName() )
        , m_lastName( user.lastName() )
        , m_email( user.email() )
        , m_isEmailValid(this->validateEmail(m_email))
        , m_isFirstNameValid(this->validateFirstName(m_firstName))
        , m_isLastNameValid(this->validateLastName(m_lastName))
    {
    }

    bool isEmailValid() const;
    bool isFirstNameValid() const;
    bool isLastNameValid() const;

    void setIsEmailValid(bool isEmailValid);
    void setIsFirstNameValid(bool isFirstNameValid);
    void setIsLastNameValid(bool isLastNameValid);

    const QString &email() const;
    const QString &firstName() const;
    const QString &lastName() const;

signals:
    void isFirstNameValidChanged(bool valid);
    void isLastNameValidChanged(bool valid);
    void isEmailValidChanged(bool valid);

public slots:

    void onEmailChanged(const QString &email) {
        if( m_email == email ) {
            return;
        }

        m_email = email;

        const bool valid = this->validateEmail(email);

        if(valid) {
            m_user.setEmail(email);
        }

        this->setIsEmailValid(valid);
    }

    void onFirstNameChanged(const QString &firstName) {
        if( m_firstName == firstName ) {
            return;
        }

        m_firstName = firstName;

        const bool valid = this->validateFirstName(firstName);

        if(valid) {
            m_user.setFirstName(firstName);
        }

        this->setIsFirstNameValid(valid);
    }

    void onLastNameChanged(const QString &lastName) {
        if( m_lastName == lastName ) {
            return;
        }

        m_lastName = lastName;

        const bool valid = this->validateLastName(lastName);

        if(valid) {
            m_user.setLastName(lastName);
        }

        this->setIsLastNameValid(valid);
    }

private:
    bool validateFirstName(const QString &name) const {
        //validation is *not* complete ;)
        return !(name.isEmpty());
    }

    bool validateLastName(const QString &name) const {
        //validation is *not* complete ;)
        return !(name.isEmpty());
    }

    bool validateEmail(const QString &mail) const {
        //validation is *not* complete ;)
        return (mail.contains("@") && mail.length() > 4);
    }


private:
    User &m_user;

    //separation between user and its properties allows more control over when properties are pesisted
    QString m_firstName;
    QString m_lastName;
    QString m_email;

    bool m_isEmailValid;
    bool m_isFirstNameValid;
    bool m_isLastNameValid;
};

#endif // USERVIEWMODEL_H
