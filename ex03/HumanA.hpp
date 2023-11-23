#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanA {

    public :

        HumanA( Weapon* weapon );
        ~HumanA( void );

    private :

        Weapon _weapon;
        std::string _type;
        void attack(void);

        HumanA( void );
};

#endif