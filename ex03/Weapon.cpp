#include "Weapon.hpp"

Weapon::Weapon( void ) { // Constructeur par defaut

    std::cout << "Constructeur default Weapon called" << std::endl;
    return ;
}

Weapon::Weapon(std::string type) : _type(type){

    std::cout << "Weapon created: " << _type << std::endl;
    return ;
}

Weapon::~Weapon( void ) {

    std::cout << "Weapon destroyed: " << _type << std::endl;
    return ;
}

std::string const & Weapon::getType(void) const {

    return this->_type;
}

void Weapon::setType(std::string type) {

    this->_type = type;
}