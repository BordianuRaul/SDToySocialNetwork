//
// Created by Raul on 5/16/2022.
//

#include "../Headers/TestSet.h"
#include "../Domain/Set.h"
#include <cassert>

void testConstructorWithoutParametersSet(){

    Set<int> set;
}

void testIfExistSet()
{
    Set<int> set;

    set.insert(5);
    set.insert(-12);
    set.insert(20);

    assert(set.ifExist(20) == true);
    assert(set.ifExist(30) == false);
}

void testInsertSet(){

    Set<int> set;

    set.insert(5);
    set.insert(-12);
    set.insert(20);

    assert(set.size() == 3);

}

void testRemoveElemSet(){

    Set<int> set;

    set.insert(5);
    set.insert(-12);
    set.insert(20);

    set.remove(-12);
    assert(set.size() == 2);

}

void testGetElemSet(){

    Set<int> set;

    set.insert(5);
    set.insert(-12);
    set.insert(20);

    assert(set.getElem(1) == 5);

}


void testAllSet(){

    testConstructorWithoutParametersSet();
    testIfExistSet();
    testInsertSet();
   testRemoveElemSet();
    testGetElemSet();
}