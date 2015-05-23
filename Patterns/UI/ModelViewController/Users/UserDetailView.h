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

    void setUser(const Users::UserModel &user);
signals:
    void clickedBack();
private:
    Ui::UserDetailView *ui;
};

}
