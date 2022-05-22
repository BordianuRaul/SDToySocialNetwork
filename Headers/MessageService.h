//
// Created by Raul on 5/22/2022.
//

#ifndef SDTOYSOCIALNETWORK_MESSAGESERVICE_H
#define SDTOYSOCIALNETWORK_MESSAGESERVICE_H

#include "../Repository/Repository.h"
#include "../Headers/Message.h"

class MessageService {
private:
    Repository<Message> messages;
public:
    MessageService();

    ~MessageService();

    void createMessage(int, int , const std::string&);

    void deleteMessage(int, int, const std::string&);

    int getNumberOfMessages();
};


#endif //SDTOYSOCIALNETWORK_MESSAGESERVICE_H
