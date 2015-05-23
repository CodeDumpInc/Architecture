#pragma once

#include <QWidget>

namespace Users {

namespace Ui {
class UserWidget;
}

class UserWidget
    : public QWidget
{
    Q_OBJECT

public:
    explicit UserWidget(const QString &name, const QString &mail, QWidget *parent = 0);
    ~UserWidget();

signals:
    void clickedDetails(QString);

private slots:
    void onDetailsClicked();

private:
    Ui::UserWidget *ui;
};

}
