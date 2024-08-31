#include "Zombie.hpp"

int main(void)
{
    Zombie zombie1;
    Zombie zombie2("Rando");
    Zombie *heapZombie;

    zombie1.announce();
    zombie2.announce();
    std::cout << std::endl;
    heapZombie = newZombie("HeapZombie");
    heapZombie->announce();
    randomChump("StackZombie");

    delete heapZombie;
}