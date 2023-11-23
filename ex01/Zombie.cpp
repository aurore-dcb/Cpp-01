#include "Zombie.hpp"

Zombie::Zombie( void ) {

    std::cout << "Constructor Zombie called" << std::endl;
    return;
}

Zombie::~Zombie( void ) {

    std::cout << "Destructor Zombie named " << _name << " called" << std::endl;
    return;
}

void Zombie::setName(std::string name) {

    _name = name;
}

void Zombie::announce( void ) {

    std::cout << this->_name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
    return;
}