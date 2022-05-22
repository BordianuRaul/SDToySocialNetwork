//
// Created by Raul on 5/22/2022.
//

#ifndef SDTOYSOCIALNETWORK_EVENTSERVICE_H
#define SDTOYSOCIALNETWORK_EVENTSERVICE_H

#include "../Repository/Repository.h"
#include "../Headers/Event.h"


class EventService {
private:
    Repository<Event> events;
public:

    EventService();

    ~EventService();

    void createEvent(int, const std::string&, const std::string&);

    void deleteEvent(int, const std::string&, const std::string&);

    int getNumberOfEvents();

    void addAttendee(int, const User&);

    void addInterested(int, const User&);

    void addMaybe(int, const User&);

    EventService& operator=(const EventService&);

    List<Event> getEvents();

};


#endif //SDTOYSOCIALNETWORK_EVENTSERVICE_H
