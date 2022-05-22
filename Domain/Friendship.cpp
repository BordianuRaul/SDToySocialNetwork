//
// Created by Raul on 5/19/2022.
//

#include "../Headers/Friendship.h"

Friendship::Friendship() {
    this->idFirstUser = 0;
    this->idSecondUser = 0;
}

Friendship::Friendship(int paramIdFirstUser, int paramIdSecondUser) {

    this->idFirstUser = paramIdFirstUser;
    this->idSecondUser = paramIdSecondUser;

}

Friendship::~Friendship() = default;

Friendship& Friendship::operator=(const Friendship &rhs) {

    if(this != &rhs) {
        this->idFirstUser = rhs.idFirstUser;
        this->idSecondUser = rhs.idSecondUser;
    }
    return *this;

}

bool Friendship::operator==(const Friendship &rhs) const {
    return idFirstUser == rhs.idFirstUser &&
           idSecondUser == rhs.idSecondUser;
}

bool Friendship::operator!=(const Friendship &rhs) const {
    return !(rhs == *this);
}

bool Friendship::operator<(const Friendship &rhs) const {
    return idFirstUser < rhs.idFirstUser;
}

bool Friendship::operator>(const Friendship &rhs) const {
    return rhs < *this;
}

bool Friendship::operator<=(const Friendship &rhs) const {
    return !(rhs < *this);
}

bool Friendship::operator>=(const Friendship &rhs) const {
    return !(*this < rhs);
}

int Friendship::getIdFirstUser() const {
    return this->idFirstUser;
}

int Friendship::getIdSecondUser() const {
    return this->idSecondUser;
}