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

List<std::string> MessageService::getConversation(int firstUserID, int secondUserID) {

    List<Message> allMessages = this->messages.read();
    List<std::string> conversation;

    for(int i = 0; i < allMessages.size(); i++)
    {
        if((allMessages.getElem(i).getSenderID() == firstUserID &&
           allMessages.getElem(i).getReceiverID() == secondUserID) ||
           allMessages.getElem(i).getSenderID() == secondUserID &&
           allMessages.getElem(i).getReceiverID() == firstUserID)

            conversation.pushBack(allMessages.getElem(i).getMessage());


    }

    return conversation;

}

MessageService& MessageService::operator=(const MessageService &rhs) {
    if(this != &rhs)
        this->messages = rhs.messages;

    return *this;
}