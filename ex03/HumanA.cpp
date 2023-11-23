#include "HumanA.hpp"

HumanA::HumanA( void ) { // constructeur par defaut

    std::cout << "Constructor HumanA called" << std::endl;
    return ;
}

HumanA::HumanA(Weapon* weapon) {

    std::cout << "HumanA took a weapon : ";
    std::cout << weapon->getType();
    std::cout << std::endl;
    return ;
}

HumanA::~HumanA( void ) {

    std::cout << "Destructor HumanA called" << std::endl;
    return ;
}

void HumanA::attack(void) {

    std::cout << _type << " attacks with their " << _weapon.getType();
    std::cout << std::endl;
}