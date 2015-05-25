#pragma once

#include <QWidget>

namespace Users {

class UserModel;

namespace Ui {
class UserDetailView;
}

class UserDetailView
    : public QWidget
{
    Q_OBJECT

public:
    explicit UserDetailView(QWidget *parent = 0);
    ~UserDetailView();

    void setUser(UserModel &user);
signals:
    void clickedBack();
private slots:
    void onNameChanged(const QString &name);
    void onMailChanged(const QString &mail);
private:
    Ui::UserDetailView *ui;
    Users::UserModel *m_user;
};

}
