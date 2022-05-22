//
// Created by Raul on 5/22/2022.
//

#ifndef SDTOYSOCIALNETWORK_FRIENDSHIPSERVICE_H
#define SDTOYSOCIALNETWORK_FRIENDSHIPSERVICE_H

#include "../Headers/Friendship.h"
#include "../Repository/Repository.h"

class FriendshipService {
private:
    Repository<Friendship> friendships;
public:

    FriendshipService();

    ~FriendshipService();

    void createFriendship(int, int);

    void deleteFriendship(int, int);

    int getNumberOfFriendships();


};


#endif //SDTOYSOCIALNETWORK_FRIENDSHIPSERVICE_H
