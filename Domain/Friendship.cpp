//
// Created by Raul on 5/19/2022.
//

#include "../Headers/Friendship.h"

Friendship::Friendship(int paramIdFirstUser, int paramIdSecondUser) {

    this->idFirstUser = paramIdFirstUser;
    this->idSecondUser = paramIdSecondUser;

}

Friendship::~Friendship() = default;