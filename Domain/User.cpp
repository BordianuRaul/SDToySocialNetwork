//
// Created by Raul on 5/19/2022.
//

#include "../Headers/User.h"

#include <utility>

User::User() {

    this->id = 0;
    this->name = "";
    this->city = "";
    this->age = 0;

}

User::User(int id, std::string name, std::string city, int age) {

    this->id = id;
    this->name = std::move(name);
    this->city = std::move(city);
    this->age = age;

}

User::User(const User &user) {

    this->id = user.id;
    this->name = user.name;
    this->city = user.city;
    this->age = user.age;
}

User::~User() {

    this->name.clear();
    this->city.clear();

}

int User::getID() const {
    return this->id;
}

std::string User::getName() const{
    return this->name;
}

std::string User::getCity() const{
    return this->city;
}

int User::getAge() const {
    return this->age;
}

void User::setName(const std::string& paramName) {

    this->name = paramName;

}

void User::setCity(const std::string& paramCity) {

    this->city = paramCity;

}

void User::setAge(int paramAge) {

    this->age = paramAge;

}


User& User::operator=(const User &rhs) {

    if(this != &rhs)
    {
        this->id = rhs.id;
        this->name = rhs.name;
        this->city = rhs.city;
        this->age = rhs.age;
    }

    return *this;

}

bool operator<(const User &lhs, const User &rhs) {

    if (lhs.id < rhs.id)
        return true;

    return rhs.id < lhs.id;
}

bool operator>(const User &lhs, const User &rhs) {
    return rhs < lhs;
}

bool operator<=(const User &lhs, const User &rhs) {
    return !(rhs < lhs);
}

bool operator>=(const User &lhs, const User &rhs) {
    return !(lhs < rhs);
}

bool User::operator==(const User &rhs) const {
    return id == rhs.id;
}

bool User::operator!=(const User &rhs) const {
    return !(rhs == *this);
}
