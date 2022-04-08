#include <iostream>
#include "ContactRepository.hpp"
#include "ContactList.hpp"

ContactRepository::ContactRepository()
{
    size = 0;
    for (size_t i = 0; i < 26; i++)
    {
        contactList[i] = ContactList();
    }
    
}

ContactRepository::~ContactRepository()
{
    for (int i = 0; i < 26; i++)
    {
        contactList[i].clear();
    }
}

void ContactRepository::addContact(std::string name, std::string phoneNumber, std::string email)
{
    contactList[ tolower(name[0]) - 'a'].addContact(name, phoneNumber, email);
    size++;
}


void ContactRepository::removeContact(std::string name)
{
    contactList[tolower(name[0]) - 'a'].removeContact(name);
    size--;
}

void ContactRepository::editContact(std::string oldName, std::string newName, std::string newPhoneNumber, std::string newEmail)
{
    if(tolower(oldName[0]) == tolower(newName[0]))
    {
        contactList[tolower(oldName[0]) - 'a'].editContact(oldName, newName, newPhoneNumber, newEmail);
    }
    else
    {
        contactList[tolower(oldName[0]) - 'a'].removeContact(oldName);
        contactList[tolower(newName[0]) - 'a'].addContact(newName, newPhoneNumber, newEmail);
    }
}

Contact* ContactRepository::getContact(std::string name)
{
    return contactList[tolower(name[0]) - 'a'].getContact(name);
}

void ContactRepository::print()
{
    
    for (int i = 0; i < 26; i++)
    {
        std::cout << (char)toupper(i + 'a')<< " List : " << std::endl;
        contactList[i].print();
    }
}

void ContactRepository::clear()
{
    for (int i = 0; i < 26; i++)
    {
        contactList[i].clear();
    }
    size = 0;
}


int ContactRepository::getSize()
{
    return size;
}

