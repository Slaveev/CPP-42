#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Named"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap default constructor" << std::endl;
}

ClapTrap::ClapTrap(const std::string &name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap name constructor" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
    *this = copy;
    std::cout << "ClapTrap copy constructor" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &copy)
{
    _name = copy._name;
    _hitPoints = copy._hitPoints;
    _energyPoints = copy._energyPoints;
    _attackDamage = copy._attackDamage;
    return (*this);
}

void ClapTrap::attack(const std::string &target)
{
    if (_energyPoints == 0)
    {
        std::cout << _name << " is out of energy points!" << std::endl;
        return;
    }
    std::cout << _name << " attacks " << target << ", dealing " << _attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (_hitPoints == 0)
    {
        std::cout << _name << " is dead!" << std::endl;
        return;
    }
    std::cout << _name << " takes " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << _name << " is repaired for " << amount << " points!" << std::endl;
}