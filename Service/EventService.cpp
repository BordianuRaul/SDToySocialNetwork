//
// Created by Raul on 5/22/2022.
//

#include "../Headers/EventService.h"

EventService::EventService() = default;

EventService::~EventService() = default;

void EventService::createEvent(int paramEventId, const std::string& paramEventDescription, const std::string& paramDate) {

    Event createdEvent(paramEventId, paramEventDescription, paramDate);
    this->events.addElem(createdEvent);

}

void EventService::deleteEvent(int paramEventId, const std::string &paramEventDescription, const std::string &paramDate) {

    Event deleteEvent(paramEventId ,paramEventDescription, paramDate);
    this->events.deleteRepo(deleteEvent);
}

int EventService::getNumberOfEvents() {
    return this->events.getSize();
}

void EventService::addAttendee(int eventId, const User &paramUser) {

    List<Event> auxEvents = this->events.read();

    for(int i = 0; i < auxEvents.size(); i++)
        if(auxEvents.getElem(i).getId() == eventId)
        {
            Event newEvent = auxEvents.getElem(i);
            this->events.deleteRepo(auxEvents.getElem(i));
            newEvent.addAttendee(paramUser);
            this->events.addElem(newEvent);
            return;
        }

}

void EventService::addInterested(int eventId, const User &paramUser) {
    List<Event> auxEvents = this->events.read();

    for(int i = 0; i < auxEvents.size(); i++)
        if(auxEvents.getElem(i).getId() == eventId)
        {
            Event newEvent = auxEvents.getElem(i);
            this->events.deleteRepo(auxEvents.getElem(i));
            newEvent.addInterested(paramUser);
            this->events.addElem(newEvent);
            return;
        }
}

void EventService::addMaybe(int eventId, const User &paramUser) {
    List<Event> auxEvents = this->events.read();

    for(int i = 0; i < auxEvents.size(); i++)
        if(auxEvents.getElem(i).getId() == eventId)
        {
            Event newEvent = auxEvents.getElem(i);
            this->events.deleteRepo(auxEvents.getElem(i));
            newEvent.addMaybe(paramUser);
            this->events.addElem(newEvent);
            return;
        }
}

EventService& EventService::operator=(const EventService &rhs) {
    if(this != &rhs)
        this->events = rhs.events;
    return *this;
}

List<Event> EventService::getEvents() {
    return this->events.read();
}

List<User> EventService::getAttendees(int eventID) {
    List<User> attendees;
    List<Event> allEvents;
    allEvents = this->events.read();

    for(int i = 0; i < allEvents.size(); i++){
        if(allEvents.getElem(i).getId() == eventID)
        {
            attendees = allEvents.getElem(i).getAttendees().getOrderedElems();
            return attendees;
        }
    }

    return attendees;
}

List<User> EventService::getInterested(int eventID) {
    List<User> interested;
    List<Event> allEvents;
    allEvents = this->events.read();

    for(int i = 0; i < allEvents.size(); i++){
        if(allEvents.getElem(i).getId() == eventID)
        {
            interested = allEvents.getElem(i).getInterested().getOrderedElems();
            return interested;
        }
    }

    return interested;
}

List<User> EventService::getMaybe(int eventID) {
    List<User> maybe;
    List<Event> allEvents;
    allEvents = this->events.read();

    for(int i = 0; i < allEvents.size(); i++){
        if(allEvents.getElem(i).getId() == eventID)
        {
            maybe = allEvents.getElem(i).getMaybe().getOrderedElems();
            return maybe;
        }
    }

    return maybe;
}