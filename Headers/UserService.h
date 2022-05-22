//
// Created by Raul on 5/22/2022.
//

#ifndef SDTOYSOCIALNETWORK_USERSERVICE_H
#define SDTOYSOCIALNETWORK_USERSERVICE_H

#include "../Repository/Repository.h"
#include "../Headers/User.h"

class UserService {
private:
    Repository<User> users;
public:
    UserService();

    ~UserService();

    void createUser(int, const std::string&, const std::string&, int);

    User readUser(int);

    void updateUser(int, const std::string&, const std::string&, int);

    void deleteUser(int);

    int getNumberOfUsers();

};


#endif //SDTOYSOCIALNETWORK_USERSERVICE_H
