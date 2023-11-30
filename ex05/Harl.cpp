#include "Harl.hpp"

Harl::Harl( void ) {

    fct_ptr[0]= &Harl::debug;
    fct_ptr[1]= &Harl::info;
    fct_ptr[2]= &Harl::warning;
    fct_ptr[3]= &Harl::error;
    return ;
}

Harl::~Harl( void ) {

    return ;
}

void Harl::debug( void ) const {

    std::cout << GREEN << "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger." << std::endl;
    std::cout << "I really do !" << std::endl;
    std::cout << std::endl;
    return ;
}

void Harl::info( void ) const {

    std::cout << YELLOW << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
    std::cout << "You didn’t put enough bacon in my burger !" << std::endl;
    std::cout << "If you did, I wouldn’t be asking for more !" << std::endl;
    std::cout << std::endl;
    return ;
}

void Harl::warning( void ) const {

    std::cout << ORANGE << "[ WARING ]" << std::endl; 
    std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
    std::cout << "I’ve been coming for years whereas you started working here since last month." << std::endl;
    std::cout << std::endl;
    return ;
}

void Harl::error( void ) const {

    std::cout << RED << "[ ERROR ]" << std::endl; 
    std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
    std::cout << std::endl;
    return ;
}

void Harl::complain( std::string level ) const {

    std::string tab[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i = 0;
    while (i < 4)
    {
        if (tab[i] == level)
        {
            (this->*fct_ptr[i])();
            return ;
        }
        i++;
    }
    std::cout << CYAN << "[An uninteresting thing was said]" << std::endl;
    std::cout << std::endl;
    return ;
}
