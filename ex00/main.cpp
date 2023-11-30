#include "Zombie.hpp"

int main()
{
    std::string name;

    std::cout << "Choose a name for a Zombie : ";
    std::cin >> name;
    Zombie *zombie = newZombie(name);
    zombie->announce();
    delete zombie;

    std::cout << "Choose a name for a new Zombie : ";
    std::cin >> name;
    randomChump(name);
    return (0);
}