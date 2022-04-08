#pragma once 
class Contact
{
private:
    std::string name;
    std::string phoneNumber;
    std::string email;
public:
    // constructors
    Contact(std::string name, std::string phoneNumber, std::string email);
    Contact(std::string name, std::string phoneNumber);
    // getters
    std::string getName();
    std::string getPhoneNumber();
    std::string getEmail();

    //setters
    void setName(std::string name);
    void setPhoneNumber(std::string phoneNumber);
    void setEmail(std::string email);

    void print();
    //destructor
    ~Contact();
};
