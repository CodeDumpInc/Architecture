#include "UserDetailView.h"
#include "ui_UserDetailView.h"

using namespace Users;

UserDetailView::UserDetailView(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::UserDetailView)
{
    ui->setupUi(this);
}

UserDetailView::~UserDetailView()
{
    delete ui;
}
