#include "Zombie.hpp"

Zombie::Zombie(void) : name("Zombie")
{
    std::cout << "Zombie created." << std::endl;
}

Zombie::Zombie(std::string z_name)
{
    this->name = z_name;
    std::cout << "Zombie " << this->name << " created." << std::endl;
}

Zombie::~Zombie(void)
{
    std::cout << "Zombie destroyed." << std::endl;
}

void Zombie::announce(void)
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}