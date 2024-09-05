// #include "ClapTrap.hpp"
#include "FlagTrap.hpp"
#include "ScavTrap.hpp"
// #include "ClapTrap.hpp"

int main(void)
{
    std::cout << "\033[34mConstructing\033[0m" << std::endl;
    FlagTrap a1;
    FlagTrap a2("RoboCop");

    std::cout << "\033[34mTesting\033[0m" << std::endl;
    a1.attack("CloneTrap");
    a1.highFivesGuys();
    a2.attack("RoboCop-clone");
    a2.highFivesGuys();
    a2.attack("RoboCop-clone");
    std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
    return (0);
}