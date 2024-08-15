#include "Contact.hpp"

Contact::Contact(void)
{
}

Contact::~Contact(void)
{
}

std::string Contact::getFirstName(void) const
{
    return (this->firstName);
}

std::string Contact::getLastName(void) const
{
    return (this->lastName);
}

std::string Contact::getNickname(void) const
{
    return (this->nickname);
}

std::string Contact::getNumber(void) const
{
    return (this->number);
}

std::string Contact::getSecret(void) const
{
    return (this->darkSecret);
}

void Contact::setFirstName(std::string firstName)
{
    this->firstName = firstName;
}

void Contact::setLastName(std::string lastName)
{
    this->lastName = lastName;
}

void Contact::setNickname(std::string nickname)
{
    this->nickname = nickname;
}

void Contact::setNumber(std::string number)
{
    this->number = number;
}

void Contact::setSecret(std::string darkSecret)
{
    this->darkSecret = darkSecret;
}

bool Contact::setContact(void)
{
    std::string input;

    std::cout << "Enter the first name: ";
    std::getline(std::cin, input);
    if (input == "")
        return (false);
    this->setFirstName(input);

    std::cout << "Enter the last name: ";
    std::getline(std::cin, input);
    if (input == "")
        return (false);
    this->setLastName(input);

    std::cout << "Enter the nickname: ";
    std::getline(std::cin, input);
    if (input == "")
        return (false);
    this->setNickname(input);

    std::cout << "Enter the phone number: ";
    std::getline(std::cin, input);
    if (input == "")
        return (false);
    this->setNumber(input);

    std::cout << "Enter the dark secret: ";
    std::getline(std::cin, input);
    if (input == "")
        return (false);
    this->setSecret(input);

    return (true);
}

void Contact::getContact(int index) const
{
    std::cout << "|     " << index << "|";
    std::cout << std::setw(10) << this->getFirstName() << "|";
    std::cout << std::setw(10) << this->getLastName() << "|";
    std::cout << std::setw(10) << this->getNickname() << "|" << std::endl;
}