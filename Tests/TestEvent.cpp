//
// Created by Raul on 5/19/2022.
//

#include <cassert>
#include "../Headers/TestEvent.h"
#include "../Headers/Event.h"

void testConstructorEvent(){

    Event event(1,"Party", "12/10/2022");

}

void testAddAttendeeEvent(){

    Event event(1,"Party", "12/10/2022");

    User attendee(1, "Mihai", "Cluj", 20);

    event.addAttendee(attendee);

    assert(event.getAttendees().size() == 1);

}

void testAddInterestedEvent(){
    Event event(1,"Party", "12/10/2022");

    User interested(1, "Mihai", "Cluj", 20);

    event.addInterested(interested);

    assert(event.getInterested().size() == 1);
}

void testAddMaybe(){

    Event event(1,"Party", "12/10/2022");

    User maybe(1, "Mihai", "Cluj", 20);

    event.addMaybe(maybe);

    assert(event.getMaybe().size() == 1);

}

void testAllEvent(){

    testConstructorEvent();
    testAddAttendeeEvent();
    testAddInterestedEvent();
    testAddMaybe();

}