#include "Zombie.hpp"

int main()
{
    int nb_zombie = -5;
    Zombie *horde = zombieHorde(nb_zombie, "paul");
    if (!horde)
        return (1);
    for(int i = 0 ; i < nb_zombie ; i++) {
        horde[i].announce();
    }
    delete[] horde;
    return (0);
}