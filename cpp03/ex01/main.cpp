#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    std::cout << "\033[34mConstructing\033[0m" << std::endl;
    ScavTrap c;
    ScavTrap d("RoboCop");

    std::cout << "\033[34mTesting\033[0m" << std::endl;
    c.attack("CloneTrap");
    c.beRepaired(3);
    c.takeDamage(2);
    c.beRepaired(10);
    c.guardGate();
    c.guardGate();
    d.attack("RoboCop-clone");
    d.takeDamage(101);
    d.takeDamage(15);
    d.attack("RoboCop-clone");
    std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
    return (0);
}