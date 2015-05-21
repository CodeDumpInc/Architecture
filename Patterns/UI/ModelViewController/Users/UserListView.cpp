#include "UserListView.h"
#include "ui_UserListView.h"

#include "UserWidget.h"

using namespace Users;

UserListView::UserListView(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::UserListView)
{
    ui->setupUi(this);
}

UserListView::~UserListView()
{
    delete ui;
}

void UserListView::setList(const QList<UserModel*> &users)
{
    foreach( const UserModel *user, users) {
        this->layout()->addWidget(new UserWidget(user->name(), user->mail()));
    }
}
