//
// Created by Raul on 5/22/2022.
//

#include "../Headers/TestEventService.h"
#include "../Headers/EventService.h"
#include <cassert>

void testConstructorEventService(){

    EventService eventService;

}

void testCreateEventService(){

    EventService eventService;

    eventService.createEvent(1,"Petrecere", "12/10/2022");

    assert(eventService.getNumberOfEvents() == 1);


}

void testDeleteEventService(){

    EventService eventService;

    eventService.createEvent(1,"Petrecere", "12/10/2022");
    eventService.createEvent(2,"Concert", "13/05/2022");

    assert(eventService.getNumberOfEvents() == 2);

    eventService.deleteEvent(2,"Concert", "13/05/2022");

    assert(eventService.getNumberOfEvents() == 1);
}

void testAllEventService(){
    testConstructorEventService();
    testCreateEventService();
    testDeleteEventService();
}