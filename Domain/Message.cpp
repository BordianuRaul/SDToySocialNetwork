//
// Created by Raul on 5/19/2022.
//

#include "../Headers/Message.h"

#include <utility>

Message::Message(int senderID, int receiverID, std::string message) {

    this->senderID = senderID;
    this->receiverID = receiverID;
    this->message = std::move(message);

}

Message::~Message() {
    this->message.clear();
}