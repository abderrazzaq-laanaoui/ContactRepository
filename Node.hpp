#pragma once
#include "Contact.hpp"
class Node
{
    private:
        Contact *ptrC;
        Node *next;
        Node *prev;
    public:
        Node(Contact *contact);
        Contact* getContact();
        Node* getNext();
        Node* getPrev();
        void setContact(Contact *contact);
        void setNext(Node *next);
        void setPrev(Node *prev);
        ~Node();
};
