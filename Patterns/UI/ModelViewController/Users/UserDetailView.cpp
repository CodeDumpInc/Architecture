#include "UserDetailView.h"
#include "ui_UserDetailView.h"

#include "UserModel.h"

using namespace Users;

UserDetailView::UserDetailView(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::UserDetailView)
{
    ui->setupUi(this);

    this->connect(ui->toolButton, SIGNAL(clicked()), SIGNAL(clickedBack()));
}

UserDetailView::~UserDetailView()
{
    delete ui;
}

void UserDetailView::setUser(const UserModel &user)
{
    ui->name->setText(user.name());
    ui->email->setText(user.mail());
}
