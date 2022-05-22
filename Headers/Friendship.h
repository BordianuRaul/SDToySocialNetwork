//
// Created by Raul on 5/19/2022.
//

#ifndef SDTOYSOCIALNETWORK_FRIENDSHIP_H
#define SDTOYSOCIALNETWORK_FRIENDSHIP_H


class Friendship {
private:
    int idFirstUser;
public:
    bool operator<(const Friendship &rhs) const;

    bool operator>(const Friendship &rhs) const;

    bool operator<=(const Friendship &rhs) const;

    bool operator>=(const Friendship &rhs) const;

private:
    int idSecondUser;
public:
    bool operator==(const Friendship &rhs) const;

    bool operator!=(const Friendship &rhs) const;

public:

    Friendship();

    Friendship(int, int);

    ~Friendship();

    Friendship& operator=(const Friendship&);
};

#endif //SDTOYSOCIALNETWORK_FRIENDSHIP_H
