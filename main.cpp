#include "Headers/TestAll.h"
#include "Headers/UserInterface.h"

int main() {

    testAll();

    UserService userService;
    userService.createUser(1, "Mihai", "Cluj", 20);
    userService.createUser(2, "Radu", "Sibiu", 22);
    userService.createUser(3, "Sebi", "Iasi", 19);
    userService.createUser(4, "Tedi", "Cluj", 21);
    userService.createUser(5, "Cristian", "Campulung", 24);

    FriendshipService friendshipService;
    friendshipService.createFriendship(1, 2);
    friendshipService.createFriendship(1, 3);
    friendshipService.createFriendship(1, 4);
    friendshipService.createFriendship(1, 5);
    friendshipService.createFriendship(3, 4);

    MessageService messageService;
    messageService.createMessage(1, 2, "Salut!");
    messageService.createMessage(2, 1, "Ceau!");
    messageService.createMessage(1, 3, "La multi ani!");
    messageService.createMessage(3, 1, "Multumesc frumos!");
    messageService.createMessage(1, 4, "Buna ziua!");
    messageService.createMessage(4, 1, "Buna ziua!");

    EventService eventService;
    eventService.createEvent(1, "Party", "12/05/2022");
    eventService.createEvent(2, "Maraton", "22/09/2022");
    eventService.createEvent(3, "Spectacol de teatru", "25/07/2022");


    UserInterface NetWork(userService, friendshipService, messageService, eventService);
    NetWork.runConsole();

//get list of participants for events
}
