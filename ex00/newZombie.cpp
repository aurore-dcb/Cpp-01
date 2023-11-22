#include "Zombie.hpp"

Zombie* newZombie( std::string name ) {

    Zombie* newZombie;

    newZombie = new Zombie;
    newZombie->setName(name);
    return (newZombie);
}

void randomChump( std::string name ) {

    newZombie(name);
    this->announce();
}