#include "UserWidgetViewmodel.h"


bool UserWidgetViewmodel::isEmailValid() const
{
    return m_isEmailValid;
}

bool UserWidgetViewmodel::isFirstNameValid() const
{
    return m_isFirstNameValid;
}

bool UserWidgetViewmodel::isLastNameValid() const
{
    return m_isLastNameValid;
}

void UserWidgetViewmodel::setIsEmailValid(bool isEmailValid)
{
    if(m_isEmailValid == isEmailValid) {
        return;
    }

    m_isEmailValid = isEmailValid;
    emit isEmailValidChanged(isEmailValid);
}

void UserWidgetViewmodel::setIsFirstNameValid(bool isFirstNameValid)
{
    if(m_isFirstNameValid == isFirstNameValid) {
        return;
    }

    m_isFirstNameValid = isFirstNameValid;
    emit isFirstNameValidChanged(isFirstNameValid);
}

void UserWidgetViewmodel::setIsLastNameValid(bool isLastNameValid)
{
    if(m_isLastNameValid == isLastNameValid) {
        return;
    }

    m_isLastNameValid = isLastNameValid;
    emit isLastNameValidChanged(isLastNameValid);
}

const QString &UserWidgetViewmodel::email() const
{
    return m_email;
}

const QString &UserWidgetViewmodel::firstName() const
{
    return m_firstName;
}

const QString &UserWidgetViewmodel::lastName() const
{
    return m_lastName;
}


