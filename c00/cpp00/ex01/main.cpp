#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <cstdlib>

int main(void)
{
    PhoneBook phoneBook;
    std::string input;

    phoneBook.instructions();
    while (std::getline(std::cin, input))
    {
        if (std::cin.eof())
        {
            std::cout << "\033[1;31mExiting.\033[0m" << std::endl;
            exit(0);
        }
        else if (input.compare("ADD") == 0)
        {
            phoneBook.addContact();
        }
        else if (input.compare("SEARCH") == 0)
        {
            phoneBook.searchContact();
        }
        else if (input.compare("EXIT") == 0)
        {
            std::cout << "\033[1;31mExiting.\033[0m" << std::endl;
            exit(0);
        }
        else
        {
            std::cout << "\033[1;33mInvalid command. Please type ADD, SEARCH, or EXIT.\033[0m" << std::endl;
        }
        input.clear();
        phoneBook.instructions();
    }
}