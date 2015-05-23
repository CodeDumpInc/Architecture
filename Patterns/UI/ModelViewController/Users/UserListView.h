#pragma once

#include <QWidget>

#include "UserModel.h"

namespace Users {

namespace Ui {
class UserListView;
}

class UserListView
    : public QWidget
{
    Q_OBJECT

public:
    explicit UserListView(QWidget *parent = 0);
    ~UserListView();

    void setList(const QList<UserModel *> &users);

signals:
    void clickedDetails(QString);

private:
    Ui::UserListView *ui;
};

}
