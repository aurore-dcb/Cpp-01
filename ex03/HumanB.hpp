#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanB {

    public :

        HumanB( void );
        ~HumanB( void );

    private :

        Weapon* _weapon;
        std::string _type;
        void attack(void);
};

#endif