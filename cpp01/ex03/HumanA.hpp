#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
private:
    std::string hum_name;
    Weapon &hum_weapon;

public:
    HumanA(const std::string name, Weapon &weapon);
    ~HumanA();
    void attack();
};

#endif