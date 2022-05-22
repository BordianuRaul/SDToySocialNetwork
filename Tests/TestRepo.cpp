//
// Created by Raul on 5/21/2022.
//

#include "../Headers/TestRepo.h"
#include "../Headers/User.h"
#include "../Repository/Repository.h"
#include <cassert>

void testConstructorRepo(){

    Repository<User> repo;

}

void testAddRepo(){

    Repository<User> repo;

    User testUser(1, "Mihai", "Cluj", 20);

    repo.addElem(testUser);

    assert(repo.getSize() == 1);
}

void testDeleteRepo(){

    Repository<User> repo;

    User testUser(1, "Mihai", "Cluj", 20);
    User testUser2(2, "Radu", "Sibiu", 19);

    repo.addElem(testUser);
    repo.addElem(testUser2);

    repo.deleteRepo(testUser2);

    assert(repo.getSize() == 1);


}

void testReadRepo(){

    Repository<User> repo;

    User testUser(1, "Mihai", "Cluj", 20);
    User testUser2(2, "Radu", "Sibiu", 19);

    repo.addElem(testUser);
    repo.addElem(testUser2);

    assert(repo.read().getElem(0) == testUser);

}

void testAllRepo(){

    testConstructorRepo();
    testAddRepo();
    testDeleteRepo();
    testReadRepo();

}