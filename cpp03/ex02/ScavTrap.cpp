#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap(), _gate(false)
{
    std::cout << "ScavTrap default constructor" << std::endl;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name), _gate(false)
{
    std::cout << "ScavTrap name constructor" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy), _gate(copy._gate)
{
    std::cout << "ScavTrap copy constructor" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &copy)
{
    if (this != &copy)
    {
        ClapTrap::operator=(copy);
        _gate = copy._gate;
    }
    return *this;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
    if (_energyPoints == 0)
    {
        std::cout << _name << " is out of energy points!" << std::endl;
        return;
    }
    std::cout << _name << " attacks " << target << ", dealing " << _attackDamage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
    _gate = true;
    std::cout << "ScavTrap is now guarding the gate!" << std::endl;
}