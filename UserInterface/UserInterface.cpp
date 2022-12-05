//
// Created by Raul on 5/22/2022.
//

#include "../Headers/UserInterface.h"
#include <iostream>

using namespace std;

UserInterface::UserInterface() = default;

UserInterface::UserInterface(const UserService& paramUserService, const FriendshipService& paramFriendshipService,
                             const MessageService& paramMessageService, const EventService& paramEventService) {

    this->userService = paramUserService;
    this->friendshipService = paramFriendshipService;
    this->messageService = paramMessageService;
    this->eventService = paramEventService;

}

UserInterface::~UserInterface() = default;

void UserInterface::showFirstConsole() {

    cout << "1.Register." << endl;
    cout << "2.Login." << endl;
    cout << "0.Exit." << endl;

}

void UserInterface::showUserConsole() {

    cout << "1.Send message." << endl;
    cout << "2.Delete message." << endl;
    cout << "3.Add friend." << endl;
    cout << "4.Delete friend." << endl;
    cout << "5.Create event." << endl;
    cout << "6.Delete event." << endl;
    cout << "7.Show events." << endl;
    cout << "8.Join event." << endl;
    cout << "9.Show friend list." << endl;
    cout << "10.Show conversation with friend." << endl;
    cout << "11.Update account." << endl;
    cout << "12.Delete account." << endl;
    cout << "13.View profile" << endl;
    cout << "14.Show event participants" << endl;
    cout << "0.Logout" << endl;

}

void UserInterface::showListsOfParticipants() {
    cout << "1.Persoanele care vor participa la eveniment." << endl;
    cout << "2.Persoanele care sunt interesate de eveniment." << endl;
    cout << "3.Persoanele care poate vor veni la eveniment." << endl;
}

int UserInterface::firstConsole() {

    while(true){
        this->showFirstConsole();

        int option;
        cout << "Introduceti Optiunea: ";
        cin >> option;
        cout << endl;

        switch(option){
            case 1:{
                int id;
                string name;
                string city;
                int age;

                cout <<"Introduceti un id(numar natural > 0):\n";
                cin >> id;

                cin.ignore(256, '\n');


                cout <<"Introduceti numele complet:" << endl;
                getline(cin, name);

                cout <<"Introduceti numele orasului in care locuiti:" << endl;
                getline(cin, city);

                cout <<"Introduceti varsta in ani impliniti:\n";
                cin >> age;
                cout << endl;

                this->userService.createUser(id, name, city, age);
                cout <<"Inregistrarea s-a efectuat cu succes! :)" << endl;

                User currentUser(id, name, city, age);
                this->userConsole(currentUser);

                break;
            }
            case 2:{

                int id;
                cout <<"Introduceti id-ul contului dumneavoastra: ";
                cin >> id;
                cout << endl;

                User currentUser;
                currentUser = this->userService.getUserByID(id);
                this->userConsole(currentUser);

                break;
            }
            case 0:{
                return 0;
            }
            default:{
                cout << "Optiune invalida!" << endl;
                break;
            }
        }
    }

}

int UserInterface::userConsole(const User& currentUser) {

    while(true){

        this->showUserConsole();

        int option;
        cout << "Introduceti optiunea: ";
        cin >> option;
        cout << endl;

        switch (option) {
            case 1:{

                int receiverID;
                string message;

                cout << "Introduceti id-ul persoanei cu care aveti conversatia:\n";
                cin >> receiverID;
                cout << endl;

                cin.ignore(256, '\n');

                cout << "Introduceti mesajul:\n";
                getline(cin, message);
                cout << endl;

                this->messageService.createMessage(currentUser.getID(), receiverID, message);
                cout << "Mesajul a fost trimis cu succes." << endl;
                break;
            }

            case 2:{
                int receiverID;
                string message;

                cout << "Introduceti id-ul persoanei cu care aveti conversatia:\n";
                cin >> receiverID;
                cout << endl;

                cin.ignore(256, '\n');

                cout << "Introduceti mesajul pe care doriti sa il stergeti: ";
                getline(cin, message);
                cout << endl;

                this->messageService.deleteMessage(currentUser.getID(), receiverID, message);
                cout << "Mesajul s-a sters cu succes." << endl;
                break;
            }

            case 3:{

                int friendsId;
                cout << "Introduceti id-ul persoanei: ";
                cin >> friendsId;
                cout << endl;

                this->friendshipService.createFriendship(currentUser.getID(), friendsId);
                cout << "Prietenia s-a creat cu succes!" << endl;

                break;
            }

            case 4:{

                int friendsId;
                cout << "Introduceti id-ul persoanei: ";
                cin >> friendsId;
                cout << endl;

                this->friendshipService.deleteFriendship(currentUser.getID(), friendsId);
                cout << "Prietenia s-a sters cu succes!" << endl;

                break;
            }

            case 5:{

                int eventId;
                string description;
                string date;

                cout << "Introduceti ID-ul evenimentului:\n";
                cin >> eventId;
                cout << endl;

                cin.ignore(256, '\n');

                cout << "Introduceti descrierea evenimentului:\n" << endl;
                getline(cin, description);
                cout << endl;

                cout << "Introduceti data evenimentului:\n";
                getline(cin, date);
                cout << endl;

                this->eventService.createEvent(eventId, description, date);
                cout << "Evenimentul s-a adaugat cu succes." << endl;

                break;
            }

            case 6:{

                int eventId;
                string description;
                string date;

                cout << "Introduceti ID-ul evenimentului:\n";
                cin >> eventId;
                cout << endl;

                cin.ignore(256, '\n');

                cout << "Introduceti descrierea evenimentului:\n" << endl;
                getline(cin, description);
                cout << endl;

                cout << "Introduceti data evenimentului:\n";
                getline(cin, date);
                cout << endl;

                this->eventService.deleteEvent(eventId, description, date);
                cout << "Evenimentul s-a sters cu succes." << endl;

                break;
            }

            case 7:{

                List<Event> allEvents;

                allEvents = this->eventService.getEvents();

                for(int i = 0; i < allEvents.size(); i++)
                {
                    cout <<"ID: " << allEvents.getElem(i).getId() << endl;
                    cout <<"Descriere: \n" << allEvents.getElem(i).getEventDescription() << endl;
                    cout <<"Data eveniment: " << allEvents.getElem(i).getEventDate() << endl;
                    cout << endl;
                }
                break;
            }

            case 8:{

                int eventId;
                cout <<"Introduceti id-ul evenimentului: ";
                cin >> eventId;
                cout << endl;

                int eventOption;

                cout <<"Selectati intentia dumneavoastra fata de eveniment." << endl;

                cout <<"1.Voi participa la eveniment." << endl;
                cout <<"2.Ma intereseaza evenimentul." << endl;
                cout <<"3.Poate voi participa la eveniment." << endl;

                cout <<"Opiunea dumneavoastra: ";
                cin >> eventOption;
                cout << endl;

                switch(eventOption){
                    case 1:{
                        this->eventService.addAttendee(eventId, currentUser);
                        break;
                    }
                    case 2:{
                        this->eventService.addInterested(eventId, currentUser);
                        break;
                    }
                    case 3:{
                        this->eventService.addMaybe(eventId, currentUser);
                        break;
                    }
                    default: break;
                }

                cout << "Ati fost introdus pe lista aferenta optiunii alese, multumim!" << endl;

                break;
            }

            case 9:{

                List<int> friendList;
                friendList = this->friendshipService.getUserFriendList(currentUser.getID());

                User showUser;
                for(int i = 0; i < friendList.size(); i++)
                {
                    showUser = this->userService.getUserByID(friendList.getElem(i));
                    cout <<"Id-ul utilizatorului: " << showUser.getID() << endl;
                    cout <<"Numele utilizatorului: " << showUser.getName() << endl;
                    cout << endl;
                }

                break;
            }

            case 10:{

                int friendsID;
                cout << "Introduceti id-ul prietenului: ";
                cin >> friendsID;
                cout << endl;

                cout << "Conversatia: " << endl;

                List<string> conversation;
                conversation = this->messageService.getConversation(currentUser.getID(), friendsID);

                for(int i = 0; i < conversation.size(); i++){
                    cout << conversation.getElem(i) << endl;
                }

                break;
            }

            case 11:{

                cin.ignore(256, '\n');

                string newName;
                cout << "Introduceti numele:\n";
                getline(cin, newName);


                string newCity;
                cout << "Introduceti numele orasului in care locuiti:\n";
                getline(cin, newCity);
                cout << endl;

                int newAge;
                cout << "Introduceti varsta in ani impliniti:\n";
                cin >> newAge;
                cout << endl;

                this->userService.updateUser(currentUser.getID(), newName, newCity, newAge);
                cout << "Modificarile s-au efectuat cu succes!" << endl;
                cout << "Pentru a putea vedea modificarile efectuate, reconectati-va!" << endl;

                break;
            }

            case 12:{

                this->userService.deleteUser(currentUser.getID());
                cout << "Stergerea s-a efectuat cu succes!" << endl;
                return 0;
            }

            case 13:{

                cout << "Id-ul: " << currentUser.getID() << endl;
                cout << "Numele: " << currentUser.getName() << endl;
                cout << "Oras: " << currentUser.getCity() << endl;
                cout << "Varsta: " << currentUser.getAge() << endl;
                cout << endl;
                break;

            }

            case 14:{

                int eventID;
                cout << "Introduceti id-ul evenimentului: ";
                cin >> eventID;
                cout << endl;

                int eventOption;
                this->showListsOfParticipants();
                cout << "Introduceti optiunea: ";
                cin >> eventOption;
                cout << endl;

                switch (eventOption) {
                    case 1:{

                        List<User> users;
                        users = this->eventService.getAttendees(eventID);
                        for(int i = 0; i < users.size(); i++)
                        {
                            cout << "Id-ul: " << users.getElem(i).getID() << endl;
                            cout << "Numele: " << users.getElem(i).getName() << endl;
                            cout << "Oras: " << users.getElem(i).getCity() << endl;
                            cout << "Varsta: " << users.getElem(i).getAge() << endl;
                        }

                        break;
                    }

                    case 2:{
                        List<User> users;
                        users = this->eventService.getInterested(eventID);
                        for(int i = 0; i < users.size(); i++)
                        {
                            cout << "Id-ul: " << users.getElem(i).getID() << endl;
                            cout << "Numele: " << users.getElem(i).getName() << endl;
                            cout << "Oras: " << users.getElem(i).getCity() << endl;
                            cout << "Varsta: " << users.getElem(i).getAge() << endl;
                        }

                        break;
                    }

                    case 3:{
                        List<User> users;
                        users = this->eventService.getMaybe(eventID);
                        for(int i = 0; i < users.size(); i++)
                        {
                            cout << "Id-ul: " << users.getElem(i).getID() << endl;
                            cout << "Numele: " << users.getElem(i).getName() << endl;
                            cout << "Oras: " << users.getElem(i).getCity() << endl;
                            cout << "Varsta: " << users.getElem(i).getAge() << endl;
                        }

                    }
                    default: break;

                }

                break;

            }

            case 0:{
                return 0;
            }

            default:{
                cout << "Optiune invalida!" << endl;
                break;
            }
        }

    }

}

void UserInterface::runConsole() {
    this->firstConsole();
}