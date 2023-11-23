#include "Weapon.hpp"

Weapon::Weapon( void ) {

    std::cout << "Constructeur Weapon called" << std::endl;
    return ;
}

Weapon::~Weapon( void ) {

    std::cout << "Destructeur Weapon called" << std::endl;
    return ;
}

const std::string& Weapon::getType(void) const {

    const std::string& typeREF = this->_type;
    return (typeREF);
}

void Weapon::setType(std::string type) {

    this->_type = type;
}