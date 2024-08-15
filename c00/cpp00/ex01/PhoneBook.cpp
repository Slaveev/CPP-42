#include "PhoneBook.hpp"
#include <cstdlib>

PhoneBook::PhoneBook(void)
{
    this->index = 0;
    this->full = false;
    std::cout << "\033[1;36mWelcome to the 80s and their unbelievable technology! "
              << "Write a program that behaves like a crappy awesome phonebook software.\033[0m"
              << std::endl;
}

PhoneBook::~PhoneBook(void)
{
    std::cout << "\033[1;31mGoodbye, cruel world!\033[0m" << std::endl;
}

void PhoneBook::addContact(void)
{
    std::string input;

    if (this->full)
    {
        std::cout << "\033[1;33mPhonebook is full. If you want to add more contacts, the first one will be deleted.\033[0m" << std::endl;
        std::cout << "\033[1;33mDo you want to add a contact? (yes/no): \033[0m";
        std::getline(std::cin, input);
        if (input == "no")
        {
            std::cout << "\033[1;33mReturning to main menu.\033[0m" << std::endl;
            return;
        }
        else if (input == "yes")
        {
            std::cout << "\033[1;33mDeleting the first contact.\033[0m" << std::endl;
            for (int i = 1; i < MAX_CONTACTS; i++)
            {
                this->contacts[i - 1] = this->contacts[i];
            }
            this->index = 0;
            std::cout << "\033[1;33mContact deleted.\033[0m" << std::endl;
            std::cout << "\033[1;33mContacts now are: \033[0m" << std::endl;
            for (int i = 0; i < MAX_CONTACTS; i++)
            {
                this->contacts[i].getContact(i);
            }
        }
        else
        {
            std::cout << "\033[1;33mInvalid input. Please type 'yes' or 'no'.\033[0m" << std::endl;
            return;
        }
    }

    std::cout << "\033[1;32mAdding a new contact.\033[0m" << std::endl;
    if (this->contacts[this->index].setContact())
    {
        this->index = (this->index + 1) % MAX_CONTACTS;
        if (this->index == 0)
            this->full = true;
        std::cout << "\033[1;32mContact added.\033[0m" << std::endl;
    }
}

std::string PhoneBook::truncateString(const std::string &str, size_t width) const
{
    if (str.length() > width)
        return str.substr(0, width - 1) + ".";
    return str;
}

void PhoneBook::displayContactInfo(int index) const
{
    std::cout << "\033[1;34mFirst Name: \033[0m" << this->contacts[index].getFirstName() << std::endl;
    std::cout << "\033[1;34mLast Name: \033[0m" << this->contacts[index].getLastName() << std::endl;
    std::cout << "\033[1;34mNickname: \033[0m" << this->contacts[index].getNickname() << std::endl;
    std::cout << "\033[1;34mPhone Number: \033[0m" << this->contacts[index].getNumber() << std::endl;
    std::cout << "\033[1;34mDarkest Secret: \033[0m" << this->contacts[index].getSecret() << std::endl;
}

void PhoneBook::searchContact(void) const
{
    int index;
    std::string input;

    if (this->index == 0 && !this->full)
    {
        std::cout << "\033[1;33mNo contacts to search for.\033[0m" << std::endl;
        return;
    }
    else
    {
        std::cout << "\033[1;34m|---------------------------------------------|\033[0m" << std::endl;
        std::cout << "\033[1;34m|     Index|First Name| Last Name|  Nickname|\033[0m" << std::endl;
        std::cout << "\033[1;34m|---------------------------------------------|\033[0m" << std::endl;

        int limit;
        if (this->full)
        {
            limit = MAX_CONTACTS;
        }
        else
        {
            limit = this->index;
        }

        for (int i = 0; i < limit; i++)
        {
            std::cout << "\033[1;34m|"
                      << std::setw(10) << i + 1 << "|"
                      << std::setw(10) << truncateString(this->contacts[i].getFirstName(), 10) << "|"
                      << std::setw(10) << truncateString(this->contacts[i].getLastName(), 10) << "|"
                      << std::setw(10) << truncateString(this->contacts[i].getNickname(), 10) << "|\033[0m" << std::endl;
        }
        std::cout << "\033[1;34m|---------------------------------------------|\033[0m" << std::endl;

        std::cout << "\033[1;34mEnter the index of the contact you want to search for: (0 for exit)\033[0m" << std::endl;
        while (std::getline(std::cin, input))
        {
            if (std::cin.eof())
            {
                std::cout << "\033[1;31mEOF detected. Exiting.\033[0m" << std::endl;
                std::exit(0);
            }
            index = std::atoi(input.c_str());
            if (index == 0)
            {
                std::cout << "\033[1;33mReturning to main menu.\033[0m" << std::endl;
                return;
            }
            else if (index > 0)
            {
                if (this->full && index <= MAX_CONTACTS)
                {
                    displayContactInfo(index - 1);
                    return;
                }
                else if (!this->full && index <= this->index)
                {
                    displayContactInfo(index - 1);
                    return;
                }
                else
                {
                    std::cout << "\033[1;33mInvalid index. Please enter a valid index.\033[0m" << std::endl;
                }
            }
            else
            {
                std::cout << "\033[1;33mInvalid index. Please enter a valid index.\033[0m" << std::endl;
            }
        }
    }
}

void PhoneBook::instructions(void) const
{
    std::cout << "\033[K\033[1;32mEnter your command \033[1;34m[ADD, SEARCH, EXIT]:\033[0m" << std::endl;
}