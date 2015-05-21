#include "UserWidget.h"
#include "ui_UserWidget.h"

using namespace Users;

UserWidget::UserWidget(const QString &name, const QString &mail, QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::UserWidget)
{
    ui->setupUi(this);

    ui->name->setText(name);
    ui->email->setText(mail);
}

UserWidget::~UserWidget()
{
    delete ui;
}
