//
// Created by Raul on 5/22/2022.
//

#include "../Headers/TestFriendshipService.h"
#include "../Headers/FriendshipService.h"
#include <cassert>

void testConstructorFriendshipService(){

    FriendshipService friendshipService;
}

void testCreateFriendshipService(){

    FriendshipService friendshipService;

    friendshipService.createFriendship(1, 2);

    assert(friendshipService.getNumberOfFriendships() == 2);

}

void testDeleteFriendshipService(){

    FriendshipService friendshipService;

    friendshipService.createFriendship(1, 2);
    friendshipService.createFriendship(1, 3);

    assert(friendshipService.getNumberOfFriendships() == 4);

    friendshipService.deleteFriendship(1, 3);

    assert(friendshipService.getNumberOfFriendships() == 2);

}

void testAllFriendshipService(){

    testConstructorFriendshipService();
    testCreateFriendshipService();
    testDeleteFriendshipService();

}