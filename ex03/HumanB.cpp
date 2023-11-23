#include "HumanB.hpp"

HumanB::HumanB( void ) {

    std::cout << "Constructor HumanB called" << std::endl;
    return ;
}


HumanB::~HumanB( void ) {

    std::cout << "Destructor HumanB called" << std::endl;
    return ;
}

void HumanB::attack(void) {

    std::cout << _type << " attacks with their " << _weapon.getType();
    std::cout << std::endl;
}