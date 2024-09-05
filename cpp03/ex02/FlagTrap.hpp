#ifndef FLAGTRAP_HPP
#define FLAGTRAP_HPP

#include "ClapTrap.hpp"
// #include "ScavTrap.hpp"

class FlagTrap : public ClapTrap
{
private:
public:
    FlagTrap();
    FlagTrap(const std::string &name);
    FlagTrap(const FlagTrap &copy);
    FlagTrap &operator=(const FlagTrap &copy);
    ~FlagTrap();

    void highFivesGuys(void);
    void attack(const std::string &target);
};

#endif