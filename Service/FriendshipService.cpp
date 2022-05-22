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

List<int> FriendshipService::getUserFriendList(int userID) {

    List<Friendship> allFriendships = this->friendships.read();
    List<int> userFriendList;

    for(int i = 0; i < allFriendships.size(); i++)
        if(allFriendships.getElem(i).getIdFirstUser() == userID)
            userFriendList.pushBack(allFriendships.getElem(i).getIdSecondUser());

    return userFriendList;
}

FriendshipService& FriendshipService::operator=(const FriendshipService &rhs) {

    if(this != &rhs){
        this->friendships = rhs.friendships;
    }

    return *this;
}