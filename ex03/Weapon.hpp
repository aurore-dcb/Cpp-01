#ifndef WEAPON_HPP
# define WEAPON_HPP

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define WHITE   "\033[37m"
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