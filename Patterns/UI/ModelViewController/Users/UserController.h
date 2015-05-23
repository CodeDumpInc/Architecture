#pragma once

#include <QScopedPointer>
#include "UserRepository.h"

namespace Users {

class UserController
        : public QObject
{
    Q_OBJECT
public:
    UserController();

    QWidget *view(const QString &path);

private:
    QWidget *listView();
    QWidget *userDetails(const QString &name);

signals:
    void viewChangeRequested(const QString &path);

private slots:
    void onClickedBack();
    void onClickedDetails(const QString &userName);

private:
    QScopedPointer<UserRepository> m_repository;
};

}
