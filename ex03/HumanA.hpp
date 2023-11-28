#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanA {

    public :

        HumanA(std::string name, Weapon const & weapon);
        ~HumanA( void );
        void attack(void);

        
    private :

        Weapon const & _weaponRef;
        std::string _name;

};

#endif