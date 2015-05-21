#include "UserController.h"
#include "UserListView.h"

using namespace Users;

UserController::UserController()
    : m_repository(new UserRepository)
{
}

QWidget *UserController::listView()
{
    Users::UserListView *view = new Users::UserListView();
    view->setList(m_repository->allUsers());

    return view;
}
