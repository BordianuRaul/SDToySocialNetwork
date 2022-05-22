//
// Created by Raul on 5/19/2022.
//

#ifndef SDTOYSOCIALNETWORK_FRIENDSHIP_H
#define SDTOYSOCIALNETWORK_FRIENDSHIP_H


class Friendship {
private:
    int idFirstUser;
    int idSecondUser;
public:

    Friendship();

    Friendship(int, int);

    ~Friendship();

    Friendship& operator=(const Friendship&);

    bool operator==(const Friendship &rhs) const;

    bool operator!=(const Friendship &rhs) const;

    bool operator<(const Friendship &rhs) const;

    bool operator>(const Friendship &rhs) const;

    bool operator<=(const Friendship &rhs) const;

    bool operator>=(const Friendship &rhs) const;

    int getIdFirstUser() const;

    int getIdSecondUser() const;
};

#endif //SDTOYSOCIALNETWORK_FRIENDSHIP_H
