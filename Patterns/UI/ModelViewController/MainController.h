#pragma once

#include <Users/UserController.h>

class MainController
    : public QObject
{
    Q_OBJECT
public:
    MainController(QObject *parent = 0);
    QWidget* view(const QString &path);

signals:
    void viewChangeRequested(const QString &path);

private:
    Users::UserController m_userController;
};
