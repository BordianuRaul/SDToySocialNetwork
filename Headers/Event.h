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
    int eventId;
    std::string eventDescription;
    std::string date;
    Set<User> attendees;
    Set<User> interested;
    Set<User> maybe;
public:
    public:
    Event();

    Event(int, std::string, std::string);

    ~Event();

    int getId() const;

    std::string getEventDescription();

    std::string getEventDate();

    Set<User> getAttendees();

    Set<User> getInterested();

    Set<User> getMaybe();

    void addAttendee(const User&);

    void addInterested(const User&);

    void addMaybe(const User&);

    Event& operator=(const Event&);

    bool operator<(const Event &rhs) const;

    bool operator>(const Event &rhs) const;

    bool operator<=(const Event &rhs) const;

    bool operator>=(const Event &rhs) const;

    bool operator==(const Event &rhs) const;

    bool operator!=(const Event &rhs) const;
};


#endif //SDTOYSOCIALNETWORK_EVENT_H
