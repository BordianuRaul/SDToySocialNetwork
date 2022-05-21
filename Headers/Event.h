//
// Created by Raul on 5/19/2022.
//

#ifndef SDTOYSOCIALNETWORK_EVENT_H
#define SDTOYSOCIALNETWORK_EVENT_H

#include <string>
#include "../Domain/Set.h"
#include "../Headers/User.h"

class Event {

private:
    std::string eventDescription;
    std::string date;
    Set<User> attendees;
    Set<User> interested;
    Set<User> maybe;

public:
    Event(std::string, std::string);

    ~Event();

    Set<User> getAttendees();

    Set<User> getInterested();

    Set<User> getMaybe();

    void addAttendee(const User&);

    void addInterested(const User&);

    void addMaybe(const User&);

};


#endif //SDTOYSOCIALNETWORK_EVENT_H
