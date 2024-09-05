#include "FlagTrap.hpp"

FlagTrap::FlagTrap() : ClapTrap()
{
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 30;
    std::cout << "FlagTrap default constructor" << std::endl;
}

FlagTrap::FlagTrap(const std::string &name) : ClapTrap(name)
{
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 30;
    std::cout << "FlagTrap constructor for " << _name << "called" << std::endl;
}

FlagTrap::FlagTrap(const FlagTrap &copy) : ClapTrap(copy)
{
    std::cout << "FlagTrap copy constructor" << std::endl;
}

FlagTrap &FlagTrap::operator=(const FlagTrap &copy)
{
    ClapTrap::operator=(copy);
    std::cout << "FlagTrap assignation operator" << std::endl;
    return *this;
}

FlagTrap::~FlagTrap()
{
    std::cout << "FlagTrap destructor called for" << _name << std::endl;
}

void FlagTrap::highFivesGuys(void)
{
    std::cout << "FlagTrap " << _name << " requests a high five" << std::endl;
}

void FlagTrap::attack(const std::string &target)
{
    if (_energyPoints == 0)
    {
        std::cout << _name << " is out of energy points!" << std::endl;
        return;
    }
    std::cout << _name << " attacks " << target << ", dealing " << _attackDamage << " points of damage!" << std::endl;
}