#include "HumanB.hpp"

HumanB::HumanB( std::string name ) : _name(name) {

    std::cout << "HumanB: " << _name << std::endl;
    return ;
}

HumanB::~HumanB( void ) {

    delete _weapon;
    std::cout << "Destructor HumanB called" << std::endl;
    return ;
}

void HumanB::attack(void) const{

    std::cout << _name << " attacks with their " << _weapon->getType();
    std::cout << std::endl;
}

void HumanB::setWeapon(Weapon weapon) {

    // delete _weapon;

    _weapon = new Weapon(weapon);
}
