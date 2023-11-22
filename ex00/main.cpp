#include "Zombie.hpp"

int main()
{
    Zombie* zombie[3];

    zombie[0] = newZombie("Po");
    zombie[0]->announce();
    zombie[1] = newZombie("YEA");
    zombie[1]->announce();
    zombie[2] = newZombie("aur");
    zombie[2]->announce();
    delete zombie[0];
    delete zombie[1];
    delete zombie[2];
    return (0);
}