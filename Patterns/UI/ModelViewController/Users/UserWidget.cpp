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

    this->connect(ui->toolButton, SIGNAL(clicked()), SLOT(onDetailsClicked()));
}

UserWidget::~UserWidget()
{
    delete ui;
}

void UserWidget::onDetailsClicked()
{
    emit this->clickedDetails(ui->name->text());
}
