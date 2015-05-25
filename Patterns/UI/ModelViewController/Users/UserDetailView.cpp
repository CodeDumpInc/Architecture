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

void UserDetailView::setUser(UserModel &user)
{
    m_user = &user;

    ui->nameEdit->setText(user.name());
    ui->mailEdit->setText(user.mail());

    this->connect(ui->nameEdit, SIGNAL(textChanged(QString)), SLOT(onNameChanged(QString)));
    this->connect(ui->mailEdit, SIGNAL(textChanged(QString)), SLOT(onMailChanged(QString)));
}

//normally, this would be signaled to the controller and the controller would change the model and update all views
void UserDetailView::onNameChanged(const QString &name) {
    if(m_user) {
        m_user->setName(name);
    }
}

void UserDetailView::onMailChanged(const QString &mail) {
    if(m_user) {
        m_user->setMail(mail);
    }
}

