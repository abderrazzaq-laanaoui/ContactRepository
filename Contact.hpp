#pragma once 
class Contact
{
private:
    std::string name;
    std::string phoneNumber;
    std::string email;
public:
    // constructors
    Contact(std::string name, std::string phoneNumber, std::string email="");
    Contact(std::string name, std::string phoneNumber);
    // getters
    std::string getName() const;
    std::string getPhoneNumber() const;
    std::string getEmail() const;
    void print() const;
    bool operator>(const Contact&) const;

    //setters
    void setName(std::string name);
    void setPhoneNumber(std::string phoneNumber);
    void setEmail(std::string email);

    //destructor
    ~Contact(){};
};
