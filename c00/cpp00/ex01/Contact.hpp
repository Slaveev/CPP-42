#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Contact
{
private:
    std::string firstName;
    std::string lastName;
    std::string nickname;
    std::string number;
    std::string darkSecret;

public:
    Contact(void);
    ~Contact(void);
    std::string getFirstName(void) const;
    std::string getLastName(void) const;
    std::string getNickname(void) const;
    std::string getNumber(void) const;
    std::string getSecret(void) const;
    void setFirstName(std::string firstName);
    void setLastName(std::string lastName);
    void setNickname(std::string nickname);
    void setNumber(std::string number);
    void setSecret(std::string darkSecret);

    void getContact(int index) const;
    bool setContact(void);
};

#endif