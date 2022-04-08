// a main function to test the functions in contact repository
#include <iostream>
#include "ContactRepository.hpp"
int main(){
    ContactRepository contactRepository ;
    contactRepository.addContact("John","187282", "jahon@gmain.com");
    contactRepository.addContact("Sami","28987630972", "Sami@gmain.com");
    contactRepository.addContact("Saad","766789273", "Saad@gmain.com");
    contactRepository.addContact("Soufian","8767892", "Soufian@gmain.com");
    contactRepository.addContact("Jamila","1234567890", "Jamila@gmain.com");
    contactRepository.addContact("Adam", "5678925288");
    // show the size of the repo 
    std::cout <<"Nbr des contacts: " << contactRepository.getSize() << std::endl;
    // contactRepository.print();
    // get the contact with the name "John"
    std::cout << "-----------------------------------------" << std::endl;
    Contact* contact = contactRepository.getContact("John");
    std::cout << contact->getName() << std::endl;
    // show the name of the contact
    // show the phone number of the contact
    std::cout << contact->getPhoneNumber() << std::endl;
    // show the email of the contact
    std::cout << contact->getEmail() << std::endl;
    std::cout << "-----------------------------------------" << std::endl;
    // edit the contact with the name "John"
    contactRepository.editContact("John", "Candy", "987292283", "Candy@email.com");
    contactRepository.print();
    // get the contact with the name "candy"
    contact = contactRepository.getContact("jack");
    // show the name of the contact
    if(contact == nullptr){
        std::cout << "contact not found" << std::endl;
    }
    else{
        std::cout << "Contact: " << contact->getName() << " - " << contact->getPhoneNumber() << " - " << contact->getEmail()  << std::endl;
    }
    // remove the contact with the name "jack"
    contactRepository.removeContact("jack");
    // show the size of the repo
    std::cout << contactRepository.getSize() << std::endl;
    // remove all the contacts
    contactRepository.clear();
    // show the size of the repo
    std::cout << contactRepository.getSize() << std::endl;
return 0;

}