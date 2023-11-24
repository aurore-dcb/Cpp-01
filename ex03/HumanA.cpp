#include "HumanA.hpp"

// HumanA::HumanA( void ) { // constructeur par defaut

//     std::cout << "Constructor HumanA called" << std::endl;
//     return ;
// }

HumanA::HumanA(std::string name, Weapon const & weapon) : _weaponRef(weapon), _name(name) {

    std::cout << "HumanA: " << _name << std::endl;
    std::cout << "-> His weapon: " << _weaponRef.getType() << std::endl;
    return ;
}

HumanA::~HumanA( void ) {

    std::cout << "Destructor HumanA called: " << _name << std::endl;
    return ;
}

void HumanA::attack(void){

    std::cout << _name << " attacks with their " << _weaponRef.getType();
    std::cout << std::endl;
}