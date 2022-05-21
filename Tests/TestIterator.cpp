//
// Created by Raul on 5/20/2022.
//

#include "../Headers/TestIterator.h"
#include "../Domain/Iterator.h"
#include "../Headers/User.h"
#include <cassert>

void testConstructorIterator(){

    List<User> list;

    Iterator<User> iterator(list);

}

void testEndIterator(){

    List<User> testList;

    User testUser(1, "Mihai", "Cluj", 20);

    testList.pushBack(testUser);

    Iterator<User> iterator(testList);

    assert(iterator.end() == true);

}

void testGetCurrentIterator(){

    List<User> testList;

    User testUser(1, "Mihai", "Cluj", 20);
    User testUser2(2, "Nicu", "Brasov", 22);

    testList.pushBack(testUser);
    testList.pushBack(testUser2);

    Iterator<User> iterator(testList);

    assert(iterator.current() == testUser);
}

void testNextIterator(){

    List<User> testList;

    User testUser(1, "Mihai", "Cluj", 20);
    User testUser2(2, "Nicu", "Brasov", 22);

    testList.pushBack(testUser);
    testList.pushBack(testUser2);

    Iterator<User> iterator(testList);
    iterator.next();

    assert(iterator.current() == testUser2);

}


void testAllIterator(){

    testConstructorIterator();
    testEndIterator();
    testGetCurrentIterator();
    testNextIterator();

}