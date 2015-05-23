#include "UserController.h"
#include "UserDetailView.h"
#include "UserListView.h"

#include <QRegularExpression>

using namespace Users;

UserController::UserController()
    : m_repository(new UserRepository)
{
}

QWidget *UserController::view(const QString &path)
{
    if(path.isEmpty() || path == "/") {
        return this->listView();
    }

    return this->userDetails(QString(path).replace("/", ""));
}

QWidget *UserController::listView()
{
    Users::UserListView *view = new Users::UserListView();

    this->connect(view, SIGNAL(clickedDetails(QString)), SLOT(onClickedDetails(QString)));

    view->setList(m_repository->allUsers());

    return view;
}

QWidget *UserController::userDetails(const QString &name)
{
    Users::UserDetailView *view = new Users::UserDetailView();

    this->connect(view, SIGNAL(clickedBack()), SLOT(onClickedBack()));

    UserModel *localUser = m_repository->user(name);
    if(localUser) {
        view->setUser(*localUser);
    }

    return view;
}

void UserController::onClickedDetails(const QString &userName)
{
    emit this->viewChangeRequested(QString("users/%0").arg(userName));
}

void UserController::onClickedBack()
{
    emit this->viewChangeRequested(QString("users"));
}
