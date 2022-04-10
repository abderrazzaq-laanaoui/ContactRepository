#pragma once
#include "Contact.hpp"
#include "Node.hpp"

class ContactNotFoundException :public std::runtime_error
{
private:
    /* data */
public:
    ContactNotFoundException(const std::string& name): std::runtime_error("Contact with name" + name +" not found."){};
};

class ContactList
{
private:
    Node *head;
    int size;
private:
int compare(std::string name1, std::string name2);
public:
    ContactList();
    // add a contact to the list
    void addContact(std::string name, std::string phoneNumber, std::string email="");
    // remove a contact from the list
    void removeContact(std::string name);
    // get the contact with the given name
    Contact* getContact(std::string name);
    // edit the contact with the given name
    void editContact(std::string oldName,std::string newName, std::string newPhoneNumber, std::string newEmail);
    // print the list
    void print();
    // remove all contacts from the list
    void clear();
    // get the size of the list
    int getSize();
    ~ContactList();
};

