#include "ClapTrap.hpp"

int main(void)
{
    std::cout << "\33[34mStarting ClapTrap Test\033[0m" << std::endl;
    ClapTrap foo;
    ClapTrap bar("Bar");

    std::cout << "\33[34mRound One\033[0m" << std::endl;
    foo.attack("Bar");
    bar.takeDamage(0);
    bar.beRepaired(3);

    std::cout << "\33[34mRound Two\033[0m" << std::endl;
    bar.attack("name");
    foo.takeDamage(0);
    foo.beRepaired(1);
    std::cout << "\33[34mEnd of ClapTrap Test\033[0m" << std::endl;
}