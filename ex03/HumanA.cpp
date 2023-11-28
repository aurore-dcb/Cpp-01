#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon const & weapon) : _weaponRef(weapon), _name(name) {

    std::cout << "HumanA " << _name << " created with ";
    std::cout << _weaponRef.getType() << std::endl;
    return ;
}

HumanA::~HumanA( void ) {

    std::cout << RED << _name << " is destroyed" << std::endl;
    return ;
}

void HumanA::attack(void){

    std::cout << ORANGE << _name << " attacks with their " << _weaponRef.getType();
    std::cout << std::endl;
}