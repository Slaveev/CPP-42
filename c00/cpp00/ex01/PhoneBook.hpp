#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <string>
#include "Contact.hpp"

class PhoneBook
{
public:
    PhoneBook(void);
    ~PhoneBook(void);
    void addContact(void);
    void searchContact(void) const;
    void instructions(void) const;
    std::string truncateString(const std::string &str, size_t width) const;
    void displayContactInfo(int index) const;

private:
    static const int MAX_CONTACTS = 8;
    Contact contacts[MAX_CONTACTS];
    bool full;
    int index;
};

#endif