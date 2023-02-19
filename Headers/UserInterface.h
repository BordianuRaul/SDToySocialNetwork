//
// Created by Raul on 5/22/2022.
//

#ifndef SDTOYSOCIALNETWORK_USERINTERFACE_H
#define SDTOYSOCIALNETWORK_USERINTERFACE_H

#include "../Headers/UserService.h"
#include "../Headers/FriendshipService.h"
#include "../Headers/MessageService.h"
#include "../Headers/EventService.h"

class UserInterface {
private:
    UserService userService;
    FriendshipService friendshipService;
    MessageService messageService;
    EventService eventService;
public:
    UserInterface();

    UserInterface(const UserService&, const FriendshipService&, const MessageService&, const EventService&);

    ~UserInterface();

    static void showFirstConsole();

    static void showUserConsole();

    static void showListsOfParticipants();

    int firstConsole();

    void runConsole();

    int userConsole(const User&);

};


#endif //SDTOYSOCIALNETWORK_USERINTERFACE_H
