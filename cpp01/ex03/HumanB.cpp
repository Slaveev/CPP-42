#include "HumanB.hpp"

HumanB::HumanB(std::string name) : hum_name(name), hum_weapon(NULL)
{
}

HumanB::~HumanB()
{
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->hum_weapon = &weapon;
}

void HumanB::attack()
{
    std::cout << this->hum_name << " attacks with " << (*hum_weapon).getType() << std::endl;
}