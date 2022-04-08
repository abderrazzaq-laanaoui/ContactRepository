#include <iostream>
#include "Node.hpp"

Node::Node (Contact *contact)
{
    this->ptrC = contact;
    this->next = nullptr;
    this->prev = nullptr;
}

Contact* Node::getContact ()
{
    return this->ptrC;
}


Node* Node::getNext ()
{
    return this->next;
}

Node* Node::getPrev ()
{
    return this->prev;
}

void Node::setContact (Contact *contact)
{
    this->ptrC = contact;
}
void Node::setNext (Node *next)
{
    this->next = next;
}
void Node::setPrev (Node *prev)
{
    this->prev = prev;
}

Node::~Node ()
{
    delete this->ptrC;
}
