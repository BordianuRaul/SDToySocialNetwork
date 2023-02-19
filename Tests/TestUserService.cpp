//
// Created by Raul on 5/22/2022.
//

#include "../Headers/TestUserService.h"
#include "../Headers/UserService.h"
#include <cassert>

void testConstructorUserService(){

    UserService testService;

}

void testCreateUserService(){

    UserService testService;

    testService.createUser(1, "Mihai", "Cluj", 20);

    User testUser(1, "Mihai", "Cluj", 20);

    assert(testService.readUser(1) == testUser);

}

void testUpdateUserService(){

    UserService testService;

    testService.createUser(1, "Mihai", "Cluj", 20);

    User testUser(1, "Mihai", "Cluj", 22);

    testService.updateUser(1, "Mihai", "Cluj", 22);

    assert(testService.readUser(1) == testUser);

}

void testDeleteUserService(){

    UserService testService;

    testService.createUser(1, "Mihai", "Cluj", 20);
    testService.createUser(2, "Radu", "Brasov", 19);

    assert(testService.getNumberOfUsers() == 2);

    testService.deleteUser(2);

    assert(testService.getNumberOfUsers() == 1);
}

void testGetUserByIdUserService(){

    UserService testService;

    testService.createUser(1, "Mihai", "Cluj", 20);
    testService.createUser(2, "Radu", "Brasov", 19);

    User testUser(1, "Mihai", "Cluj", 20);

    assert(testService.getUserByID(1) == testUser);

}

void testAllUserService(){

    testConstructorUserService();
    testCreateUserService();
    testUpdateUserService();
    testDeleteUserService();
    testGetUserByIdUserService();

}