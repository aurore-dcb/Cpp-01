#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

#define RED         "\033[31m"
#define ORANGE      "\033[38;5;208m"
#define YELLOW      "\033[93m"
#define GREEN       "\033[32m"
#define RESET_COLOR "\033[0m"

class Harl {

    public :

        Harl( void );
        ~Harl( void );
        void complain( std::string level );
        
    private :

        typedef void (Harl::*f)( void );
        f    fct_ptr[4];
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );
};

#endif