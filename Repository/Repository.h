//
// Created by Raul on 5/21/2022.
//

#ifndef SDTOYSOCIALNETWORK_REPOSITORY_H
#define SDTOYSOCIALNETWORK_REPOSITORY_H

#include "../Domain/Set.h"
#include "../Domain/List.h"
#include "../Headers/User.h"

template <class T>
class Repository {
private:
    List<T> elements;
public:
    Repository();



};


#endif //SDTOYSOCIALNETWORK_REPOSITORY_H
