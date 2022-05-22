//
// Created by Raul on 5/19/2022.
//

#ifndef SDTOYSOCIALNETWORK_MESSAGE_H
#define SDTOYSOCIALNETWORK_MESSAGE_H

#include <string>

class Message {

private:
    int senderID;
    int receiverID;
    std::string message;
public:

    Message();

    Message(int, int, std::string);

    ~Message();

    Message& operator=(const Message&);

    bool operator==(const Message &rhs) const;

    bool operator<(const Message &rhs) const;

    bool operator>(const Message &rhs) const;

    bool operator<=(const Message &rhs) const;

    bool operator>=(const Message &rhs) const;

    bool operator!=(const Message &rhs) const;

    int getSenderID() const;

    int getReceiverID() const;

    std::string getMessage();

};


#endif //SDTOYSOCIALNETWORK_MESSAGE_H
