#include "Weapon.hpp"

Weapon::Weapon( void ) {

    std::cout << "Constructeur default Weapon called" << std::endl;
    return ;
}

Weapon::Weapon(std::string type) : _type(type){

    std::cout << GREEN << "Weapon '" << _type << "' is created" << std::endl;
    return ;
}

Weapon::~Weapon( void ) {

    std::cout << RED << "Weapon '" << _type << "' is destroyed" << std::endl;
    return ;
}

std::string const & Weapon::getType(void) const {

    return this->_type;
}

void Weapon::setType(std::string type) {

    this->_type = type;
    std::cout << GREEN << "Wepon '" << type << "' is set" << std::endl; 
}