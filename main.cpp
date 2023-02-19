#include "Headers/TestAll.h"
#include "Headers/UserInterface.h"

int main() {

    testAll();

    UserService userService;
    userService.createUser(1, "Mihai", "Cluj", 20);
    userService.createUser(2, "Radu", "Sibiu", 22);
    userService.createUser(3, "Sebi", "Iasi", 19);
    userService.createUser(4, "Tedi", "Cluj", 21);
    userService.createUser(5, "Raisa", "Botosani", 15);
    userService.createUser(6, "Cristian", "Campulung", 24);
    userService.createUser(7, "Raul", "Cluj", 20);
    userService.createUser(8, "Lucian", "Suceava", 21);
    userService.createUser(9, "Andrei", "Galati", 19);
    userService.createUser(10, "Betty", "Iasi", 24);
    userService.createUser(11, "Teo", "Iasi", 23);
    userService.createUser(12, "Robert", "Bucuresti", 24);
    userService.createUser(13, "Ecaterina", "Edinet", 21);
    userService.createUser(14, "Bogdan", "NewYork", 22);
    userService.createUser(15, "Larisa", "Botosani", 21);

    FriendshipService friendshipService;
    friendshipService.createFriendship(1, 2);
    friendshipService.createFriendship(2, 3);
    friendshipService.createFriendship(1, 3);
    friendshipService.createFriendship(1, 4);
    friendshipService.createFriendship(1, 5);
    friendshipService.createFriendship(3, 4);
    friendshipService.createFriendship(5, 7);
    friendshipService.createFriendship(6, 7);
    friendshipService.createFriendship(6, 12);
    friendshipService.createFriendship(8, 9);
    friendshipService.createFriendship(8, 10);
    friendshipService.createFriendship(9, 10);
    friendshipService.createFriendship(11, 12);
    friendshipService.createFriendship(11, 13);
    friendshipService.createFriendship(12, 13);
    friendshipService.createFriendship(14, 15);
    friendshipService.createFriendship(14, 7);
    friendshipService.createFriendship(15, 5);

    MessageService messageService;
    messageService.createMessage(1, 2, "Salut!");
    messageService.createMessage(2, 1, "Ceau!");
    messageService.createMessage(1, 3, "La multi ani!");
    messageService.createMessage(3, 1, "Multumesc frumos!");
    messageService.createMessage(1, 4, "Buna ziua!");
    messageService.createMessage(4, 1, "Buna ziua!");
    messageService.createMessage(1, 5, "Buna!");
    messageService.createMessage(5, 1, "Larevedere!");
    messageService.createMessage(2, 3, "O zi frumoasa!");
    messageService.createMessage(3, 2, "Multumes, la fel!");
    messageService.createMessage(3, 4, "Iti mai merge masina?");
    messageService.createMessage(4, 3, "As vrea eu.");
    messageService.createMessage(5, 7, "Cand vii acasa?");
    messageService.createMessage(7, 5, "Mai incolo.");
    messageService.createMessage(7, 5, "Vorbim alta data.");
    messageService.createMessage(5, 7, "Ce sa-ti povestesc.");
    messageService.createMessage(6, 7, "Iti dau 100 de lei cand ne vedem.");
    messageService.createMessage(6, 7, "Sa traiesti.");
    messageService.createMessage(6, 12, "Te astept la sala.");
    messageService.createMessage(12, 6, "Vin imediat.");
    messageService.createMessage(8, 9, "Ai facut proiectul la SDA?.");
    messageService.createMessage(9, 8, "=)))))).");
    messageService.createMessage(8, 10, "La multi ani!");
    messageService.createMessage(10, 8, "Multumesc frumos!");
    messageService.createMessage(9, 10, "Salut!");
    messageService.createMessage(10, 9, "Buna!");
    messageService.createMessage(11, 12, "Veniti la o seara de boardgames?");
    messageService.createMessage(12, 11, "Cum sa nu!");
    messageService.createMessage(11, 13, "Mergi acasa in weekend?");
    messageService.createMessage(13, 11, "Da, vii si tu?");
    messageService.createMessage(12, 13, "Maine lucrezi?");
    messageService.createMessage(13, 12, "Nu, am liber toata saptamana.");
    messageService.createMessage(14, 15, "La multi ani!.");
    messageService.createMessage(15, 14, "Multumesc frumos!.");
    messageService.createMessage(14, 7, "Vii la sedinta?.");
    messageService.createMessage(7, 14, "Bineinteles.");
    messageService.createMessage(15, 5, "La ce ora te pornesti spre scoala?.");
    messageService.createMessage(5, 15, "12:40.");



    EventService eventService;
    eventService.createEvent(1, "Party", "12/05/2022");
    eventService.createEvent(2, "Maraton", "22/09/2022");
    eventService.createEvent(3, "Spectacol de teatru", "25/07/2022");


    User Raul(7, "Raul", "Cluj", 20);
    User Bogdan(14, "Bogdan", "NewYork", 22);
    User Tedi(4, "Tedi", "Cluj", 21);

    eventService.addAttendee(1,Raul);
    eventService.addAttendee(1,Bogdan);
    eventService.addAttendee(1,Tedi);

    eventService.addInterested(2,Raul);
    eventService.addInterested(2,Tedi);

    eventService.addMaybe(3, Bogdan);


    UserInterface NetWork(userService, friendshipService, messageService, eventService);
    NetWork.runConsole();

}
