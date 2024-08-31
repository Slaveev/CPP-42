#include "Zombie.hpp"

int main(void)
{
    int N = 5;
    Zombie *zombies = zombieHorde(N, "Zombie");

    for (int i = 0; i < N; i++)
    {
        std::cout << "Zombie number " << i << ": ";
        zombies[i].announce();
    }

    delete[] zombies;
    return (0);
}