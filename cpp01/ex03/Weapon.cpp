#include "Weapon.hpp"

Weapon::Weapon()
{
    this->wep_type = "no weapon";
}

Weapon::Weapon(const std::string type)
{
    this->wep_type = type;
}

Weapon::~Weapon()
{
}

const std::string &Weapon::getType() const
{
    return (this->wep_type);
}

void Weapon::setType(const std::string type)
{
    this->wep_type = type;
}