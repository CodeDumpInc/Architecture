#ifndef USERWIDGET_H
#define USERWIDGET_H

#include <QWidget>

class UserWidgetViewmodel;

namespace Ui {
class UserWidget;
}

class UserWidget
    : public QWidget
{
    Q_OBJECT

public:
    explicit UserWidget(UserWidgetViewmodel &viewModel, QWidget *parent = 0);
    ~UserWidget();

private slots:
    void onEmailValidityChanged(bool valid);
    void onFirstNameValidityChanged(bool valid);
    void onLastNameValidityChanged(bool valid);

private:
    Ui::UserWidget *ui;
    UserWidgetViewmodel &m_viewModel;
};

#endif // USERWIDGET_H
