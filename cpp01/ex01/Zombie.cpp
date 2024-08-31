#include "Zombie.hpp"

Zombie::Zombie(void) : name("Zombie")
{
}

Zombie::Zombie(std::string z_name)
{
    this->name = z_name;
}

Zombie::~Zombie(void)
{
}

void Zombie::announce(void)
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}