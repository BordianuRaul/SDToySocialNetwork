//
// Created by Raul on 5/19/2022.
//

#include <cassert>

#include "../Headers/TestUser.h"
#include "../Headers/User.h"

void testUserConstructorWithoutParametersUser()
{
    User user;
}

void testConstructorWithParametersUser(){

    User user(1, "Mihai", "Cluj", 20);

}

void testGetIDUser(){

    User user(1, "Mihai", "Cluj", 20);

    assert(user.getID() == 1);


}

void testGetNameUser(){

    User user(1, "Mihai", "Cluj", 20);

    assert(user.getName() == "Mihai");

}

void testGetCityUser(){

    User user(1, "Mihai", "Cluj", 20);

    assert(user.getCity() == "Cluj");

}

void testGetAgeUser(){

    User user(1, "Mihai", "Cluj", 20);

    assert(user.getAge() == 20);

}

void testCopyConstructorUser(){

    User user1(1, "Mihai", "Cluj", 20);
    User user2 = user1;

    assert(user2.getID() == 1);
    assert(user2.getName() == "Mihai");
    assert(user2.getCity() == "Cluj");
    assert(user2.getAge() == 20);

}

void testSetNameUser(){

    User user(1, "Mihai", "Cluj", 20);

    user.setName("Radu");

    assert(user.getName() == "Radu");


}

void testSetCity(){

    User user(1, "Mihai", "Cluj", 20);

    user.setCity("Brasov");

    assert(user.getCity() == "Brasov");
}

void testSetAge(){

    User user(1, "Mihai", "Cluj", 20);

    user.setAge(21);

    assert(user.getAge() == 21);

}


void testAssigmentOperatorUser(){

    User user1(1, "Mihai", "Cluj", 20);
    User user2(2, "Radu", "Cluj", 22);

    user2 = user1;

    assert(user2.getID() == 1);
    assert(user2.getName() == "Mihai");
    assert(user2.getCity() == "Cluj");
    assert(user2.getAge() == 20);

}

void testAllUser()
{
    testUserConstructorWithoutParametersUser();
    testConstructorWithParametersUser();
    testCopyConstructorUser();
    testGetIDUser();
    testGetNameUser();
    testGetCityUser();
    testGetAgeUser();
    testSetNameUser();
    testSetCity();
    testSetAge();
    testAssigmentOperatorUser();
}