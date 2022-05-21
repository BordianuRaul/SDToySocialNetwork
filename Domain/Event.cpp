//
// Created by Raul on 5/19/2022.
//

#include "../Headers/Event.h"

#include <utility>

Event::Event(std::string eventDescription, std::string date) {

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