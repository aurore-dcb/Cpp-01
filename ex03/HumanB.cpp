#include "HumanB.hpp"

HumanB::HumanB( std::string name ) : _weapon(NULL), _name(name){

    std::cout << "HumanB " << _name << " created without weapon" << std::endl;
    return ;
}

HumanB::~HumanB( void ) {

    std::cout << RED << _name << " is destroyed" << std::endl;
    return ;
}

void HumanB::attack(void) const{

    if (_weapon == NULL)
        std::cout << ORANGE << _name << " attacks bare hands" << std::endl;
    else
        std::cout << ORANGE << _name << " attacks with their " << _weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon const & weapon) {

    _weapon = &weapon;
    std::cout << GREEN << "Wepon '" << _weapon->getType() << "' is set" << std::endl; 
}
