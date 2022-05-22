//
// Created by Raul on 5/22/2022.
//

#include "../Headers/UserService.h"


UserService::UserService() = default;

UserService::~UserService() = default;

void UserService::createUser(int paramId, const std::string& paramName, const std::string& paramCity, int paramAge) {


    User addUser(paramId, paramName, paramCity, paramAge);
    this->users.addElem(addUser);

}

User UserService::readUser(int paramId) {

    List<User> userList = this->users.read();

    for(int i = 0; i < userList.size(); i++)
        if(userList.getElem(i).getID() == paramId)
            return userList.getElem(i);

    User emptyUser;
    return emptyUser;

}

void UserService::updateUser(int paramId, const std::string& paramName, const std::string& paramCity, int paramAge) {

    User updateUser(paramId, paramName, paramCity, paramAge);

    User oldUser = this->readUser(paramId);
    this->users.deleteRepo(oldUser);
    this->users.addElem(updateUser);

}

void UserService::deleteUser(int paramId) {

    User deleteUser = this->readUser(paramId);
    this->users.deleteRepo(deleteUser);

}

int UserService::getNumberOfUsers() {

    return this->users.getSize();
}

UserService& UserService::operator=(const UserService &rhs) {
    if(this != &rhs)
        this->users = rhs.users;
    return *this;
}

User UserService::getUserByID(int id) {

    User searchedUser;

    List<User> listOfUsers;
    listOfUsers = this->users.read();

    for(int i = 0; i < listOfUsers.size(); i++)
    {
        if(listOfUsers.getElem(i).getID() == id)
            return listOfUsers.getElem(i);
    }

}

List<User> UserService::getAllUsers() {
    return this->users.read();
}
