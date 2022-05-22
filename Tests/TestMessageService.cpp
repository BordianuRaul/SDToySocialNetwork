//
// Created by Raul on 5/22/2022.
//

#include "../Headers/TestMessageService.h"
#include "../Headers/MessageService.h"
#include <cassert>

void testConstructorMessageService(){

    MessageService messageService;

}

void testCreateMessageService(){

    MessageService messageService;

    messageService.createMessage(1, 2, "Buna ziua!");

    assert(messageService.getNumberOfMessages() == 1);

}

void testDeleteMessageService(){

    MessageService messageService;

    messageService.createMessage(1, 2, "Buna ziua!");

    messageService.createMessage(2, 1, "Salut, Mihai!");

    assert(messageService.getNumberOfMessages() == 2);

    messageService.deleteMessage(1, 2, "Buna ziua!");

    assert(messageService.getNumberOfMessages() == 1);
}

void testAllMessageService(){

    testConstructorMessageService();
    testCreateMessageService();
    testDeleteMessageService();
}