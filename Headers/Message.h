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
    bool operator==(const Message &rhs) const;

    bool operator<(const Message &rhs) const;

    bool operator>(const Message &rhs) const;

    bool operator<=(const Message &rhs) const;

    bool operator>=(const Message &rhs) const;

    bool operator!=(const Message &rhs) const;

public:

    Message();

    Message(int, int, std::string);

    ~Message();

    Message& operator=(const Message&);

};


#endif //SDTOYSOCIALNETWORK_MESSAGE_H
