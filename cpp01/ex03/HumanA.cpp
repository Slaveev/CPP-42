#include "HumanA.hpp"

HumanA::HumanA(const std::string name, Weapon &weapon) : hum_name(name), hum_weapon(weapon)
{
}

HumanA::~HumanA()
{
}

void HumanA::attack()
{
    std::cout << this->hum_name << " attacks with " << this->hum_weapon.getType() << std::endl;
}