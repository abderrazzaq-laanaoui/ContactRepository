#pragma once
#include "ContactList.hpp"


class ContactRepository
{
private:
    ContactList contactList[26];
    int size;
public:
    ContactRepository();
    int getSize();
    void addContact(std::string name, std::string phoneNumber, std::string email="");
    Contact* getContact(std::string name);
    void editContact(std::string oldName,std::string newName, std::string newPhoneNumber, std::string newEmail);
    void removeContact(std::string name);
    void print();
    void clear();

    ~ContactRepository();
};

