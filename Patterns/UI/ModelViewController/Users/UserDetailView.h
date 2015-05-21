#pragma once

#include <QWidget>

namespace Users {

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

private:
    Ui::UserDetailView *ui;
};

}
