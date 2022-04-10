#include <iostream>
#include "Contact.hpp"
// constructors
Contact::Contact(std::string name, std::string phoneNumber, std::string email)
    : name(name),phoneNumber(phoneNumber),email(email){}

// getters
std::string Contact::getName() const
{
    return this->name;
}
std::string Contact::getPhoneNumber() const
{
    return this->phoneNumber;
}
std::string Contact::getEmail() const
{
    return this->email;
}

// setters
void Contact::setName(std::string name)
{
    this->name = name;
}
void Contact::setPhoneNumber(std::string phoneNumber)
{
    this->phoneNumber = phoneNumber;
}

void Contact::setEmail(std::string email)
{
    this->email = email;
}

void Contact::print() const
{
    std::cout << name << " - " << phoneNumber << " - " << email << std::endl;
}
