//
// Created by Raul on 5/19/2022.
//

#include "../Headers/Event.h"

#include <utility>

Event::Event(){
    this->eventId = 0;
    this->eventDescription = "";
    this->date = "";
}

Event::Event(int paramEventId, std::string eventDescription, std::string date) {

    this->eventId = paramEventId;
    this->eventDescription = std::move(eventDescription);
    this->date = std::move(date);

}

Event::~Event() {
    this->eventDescription.clear();
    this->date.clear();
}

Set<User> Event::getAttendees() {
    return this->attendees;
}

Set<User> Event::getInterested() {
    return this->interested;
}

Set<User> Event::getMaybe() {
    return this->maybe;
}


void Event::addAttendee(const User& attendee) {
    this->attendees.insert(attendee);
}

void Event::addInterested(const User& userInterested) {
    this->interested.insert(userInterested);
}

void Event::addMaybe(const User& userMaybe) {
    this->maybe.insert(userMaybe);
}

Event& Event::operator=(const Event &rhs) {

    if(this != &rhs) {
        this->eventId = rhs.eventId;
        this->eventDescription = rhs.eventDescription;
        this->date = rhs.date;
        this->attendees = rhs.attendees;
        this->interested = rhs.interested;
        this->maybe = rhs.maybe;
    }

    return *this;
}

bool Event::operator<(const Event &rhs) const {
    return date < rhs.date;
}

bool Event::operator>(const Event &rhs) const {
    return rhs < *this;
}

bool Event::operator<=(const Event &rhs) const {
    return !(rhs < *this);
}

bool Event::operator>=(const Event &rhs) const {
    return !(*this < rhs);
}

bool Event::operator==(const Event &rhs) const {
    return eventId == rhs.eventId;
}

bool Event::operator!=(const Event &rhs) const {
    return !(rhs == *this);
}

int Event::getId() const {
    return this->eventId;
}