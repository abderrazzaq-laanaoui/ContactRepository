#include <iostream>
#include "ContactList.hpp"
#include "Node.hpp"
#include "Contact.hpp"
#include <iostream>

// constructor
ContactList::ContactList()
{
    head = nullptr;
    size = 0;
}
// add a contact to the list
void ContactList::addContact(std::string name, std::string phoneNumber, std::string email)
{
    Contact *newContact = new Contact(name, phoneNumber, email);
    Node* newNode = new Node(newContact);
    if (head == nullptr)
    {
        head = newNode;
    }
    else
    {
        if (compare(newContact->getName(),head->getContact()->getName()) < 0)
        {
            newNode->setNext(head);
            head->setPrev(newNode);
            head = newNode;
        }
        else
        {
            Node *current = head;
            while (current->getNext() != nullptr && compare(newContact->getName(),current->getNext()->getContact()->getName()) > 0)
            {
                current = current->getNext();
            }
            newNode->setNext(current->getNext());
            newNode->setPrev(current);
            current->setNext(newNode);
        }
    }
    size++;
}

void ContactList::editContact(std::string oldName, std::string newName, std::string newPhoneNumber, std::string newEmail)
{
    Node *current = head;
    while (current != nullptr)
    {
        if (current->getContact()->getName().compare(oldName)== 0)
        {
            current->getContact()->setName(newName);
            current->getContact()->setPhoneNumber(newPhoneNumber);
            current->getContact()->setEmail(newEmail);
            break;
        }
        current = current->getNext();
    }
}

Contact* ContactList::getContact(std::string name)
{
    Node *current = head;
    while (current != nullptr)
    {
        if (current->getContact()->getName().compare(name) == 0)
        {
            return current->getContact();
        }
        current = current->getNext();
    }
    return nullptr;
}
void ContactList::removeContact(std::string name){
    Node *current = head;
    while (current != nullptr)
    {
        if (compare(current->getContact()->getName(),name)==0)
        {
            if (current == head)
            {
                head = current->getNext();
                if(head != nullptr) head->setPrev(nullptr);
            }else if(current->getNext() == nullptr){
                current->getPrev()->setNext(nullptr);
            }
            else{
                current->getPrev()->setNext(current->getNext());
                current->getNext()->setPrev(current->getPrev());
            }
            delete current;
            size--;
            break;
        }
        current = current->getNext();
    }
}

void ContactList::print()
{
    int i = 0;
    Node *current = head;
    while (current != nullptr)
    {
        current->getContact()->print();
        current = current->getNext();
    }
}

void ContactList::clear(){
    this->~ContactList();
}

ContactList::~ContactList()
{
    Node *current = head;
    while (current != nullptr)
    {
        head = current->getNext();
        delete current;
        current = head;
    }
}

int ContactList::getSize(){
    return size;
}

int ContactList::compare(std::string name1, std::string name2)
{
    int i = 0;
    while (i < name1.length() && i <  name2.length())
    {
        if (tolower(name1[i]) > tolower(name2[i]))
        {
            return 1;
        }
        else if (tolower(name1[i]) < tolower(name2[i]))
        {
            return -1;
        }
        i++;
    }
    if (name1.length() > name2.length())
    {
        return 1;
    }
    else if (name1.length() < name2.length())
    {
        return -1;
    }
    return 0;
}