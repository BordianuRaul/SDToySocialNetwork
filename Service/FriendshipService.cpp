//
// Created by Raul on 5/22/2022.
//

#include "../Headers/FriendshipService.h"

FriendshipService::FriendshipService() = default;

FriendshipService::~FriendshipService() = default;

void FriendshipService::createFriendship(int firstUser, int secodUser) {

    Friendship firstUserFriendship(firstUser, secodUser);
    Friendship secondUserFriendship(secodUser, firstUser);

    this->friendships.addElem(firstUserFriendship);
    this->friendships.addElem(secondUserFriendship);

}

void FriendshipService::deleteFriendship(int firstUser, int secodUser) {

    Friendship firstUserFriendship(firstUser, secodUser);
    Friendship secondUserFriendship(secodUser, firstUser);

    this->friendships.deleteRepo(firstUserFriendship);
    this->friendships.deleteRepo(secondUserFriendship);

}

int FriendshipService::getNumberOfFriendships() {

    return this->friendships.getSize();

}