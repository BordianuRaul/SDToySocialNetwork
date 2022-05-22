//
// Created by Raul on 5/22/2022.
//

#include "../Headers/MessageService.h"

MessageService::MessageService() = default;

MessageService::~MessageService() = default;

void MessageService::createMessage(int senderId, int receiverId, const std::string& message) {

    Message createMessage(senderId, receiverId, message);

    this->messages.addElem(createMessage);

}

void MessageService::deleteMessage(int senderId, int receiverId, const std::string& message) {

    Message createMessage(senderId, receiverId, message);

    this->messages.deleteRepo(createMessage);

}

int MessageService::getNumberOfMessages() {
    return this->messages.getSize();
}