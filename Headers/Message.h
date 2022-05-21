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

    Message(int, int, std::string);

    ~Message();

};


#endif //SDTOYSOCIALNETWORK_MESSAGE_H
