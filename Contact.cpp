#include <iostream>
#include "Contact.hpp"
// constructors
Contact::Contact(std::string name, std::string phoneNumber, std::string email)
{
    this->name = name;
    this->phoneNumber = phoneNumber;
    this->email = email;
}
Contact::Contact(std::string name, std::string phoneNumber)
{
    this->name = name;
    this->phoneNumber = phoneNumber;
    this->email = "";
}

// getters
std::string Contact::getName()
{
    return this->name;
}
std::string Contact::getPhoneNumber()
{
    return this->phoneNumber;
}
std::string Contact::getEmail()
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

void Contact::print()
{
    std::cout << name << " - " << phoneNumber << " - " << email << std::endl;
}
// destructor
Contact::~Contact()
{
}
