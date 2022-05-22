//
// Created by Raul on 5/19/2022.
//

#include "../Headers/Message.h"

#include <utility>

Message::Message() {

    this->senderID = 0;
    this->receiverID = 0;
    this->message = "";

}

Message::Message(int senderID, int receiverID, std::string message) {

    this->senderID = senderID;
    this->receiverID = receiverID;
    this->message = std::move(message);

}

Message::~Message() {
    this->message.clear();
}

Message& Message::operator=(const Message &rhs) {

    if(this != &rhs){
        this->senderID = rhs.senderID;
        this->receiverID = rhs.receiverID;
        this->message = rhs.message;
    }
    return *this;

}

bool Message::operator==(const Message &rhs) const {
    return senderID == rhs.senderID &&
           receiverID == rhs.receiverID &&
           message == rhs.message;
}

bool Message::operator!=(const Message &rhs) const {
    return !(rhs == *this);
}

bool Message::operator<(const Message &rhs) const {
    return senderID < rhs.senderID;
}

bool Message::operator>(const Message &rhs) const {
    return rhs < *this;
}

bool Message::operator<=(const Message &rhs) const {
    return !(rhs < *this);
}

bool Message::operator>=(const Message &rhs) const {
    return !(*this < rhs);
}
