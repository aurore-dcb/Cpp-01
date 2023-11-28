#ifndef WEAPON_HPP
# define WEAPON_HPP

#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define ORANGE  "\033[38;5;208m"

#include <iostream>

class Weapon {

    public :

        Weapon(std::string type);
        ~Weapon( void );

        std::string const & getType(void) const;
        void setType(std::string type);      

        Weapon( void ); 
        
    private :

        std::string _type;
};

#endif