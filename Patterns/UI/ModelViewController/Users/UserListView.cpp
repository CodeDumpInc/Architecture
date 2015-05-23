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

        UserWidget *widget = new UserWidget(user->name(), user->mail());

        this->connect(widget, SIGNAL(clickedDetails(QString)), SIGNAL(clickedDetails(QString)));

        this->layout()->addWidget(widget);
    }
}
