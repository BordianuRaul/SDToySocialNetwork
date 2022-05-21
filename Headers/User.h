//
// Created by Raul on 5/19/2022.
//

#ifndef SDTOYSOCIALNETWORK_USER_H
#define SDTOYSOCIALNETWORK_USER_H

#include <string>

class User {
private:
    int id;
    std::string name;
    std::string city;
    int age;

public:

    User();
    User(int, std::string, std::string, int);
    User(const User&);

    ~User();

    int getID() const;
    std::string getName();
    std::string getCity();
    int getAge() const;

    void setName(const std::string&);
    void setCity(const std::string&);
    void setAge(int);

    User& operator=(const User&);

    friend bool operator<(const User &lhs, const User &rhs);

    friend bool operator>(const User &lhs, const User &rhs);

    friend bool operator<=(const User &lhs, const User &rhs);

    friend bool operator>=(const User &lhs, const User &rhs);

    bool operator==(const User &rhs) const;

    bool operator!=(const User &rhs) const;

};


#endif //SDTOYSOCIALNETWORK_USER_H
