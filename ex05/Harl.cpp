#include "Harl.hpp"

Harl::Harl( void ) {

    fct_ptr[0]= &Harl::debug;
    fct_ptr[1]= &Harl::info;
    fct_ptr[2]= &Harl::warning;
    fct_ptr[3]= &Harl::error;
    std::cout << RESET_COLOR << "Constructor Harl called" << std::endl;
    return ;
}

Harl::~Harl( void ) {

    std::cout << RESET_COLOR << "Destructor Harl called" << std::endl;
    return ;
}

void Harl::debug( void ) {

    std::cout << GREEN << "DEBUG: "; 
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !" << std::endl;
    return ;
}

void Harl::info( void ) {

    std::cout << YELLOW << "INFO: ";
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
    return ;
}

void Harl::warning( void ) {

    std::cout << ORANGE << "WARING: "; 
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
    return ;
}

void Harl::error( void ) {

    std::cout << RED << "ERROR: "; 
    std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
    return ;
}

void Harl::complain( std::string level ) {

    std::string tab[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i = 0;
    while (i < 4)
    {
        if (tab[i] == level)
            (this->*fct_ptr[i])();
        i++;
    }
    return ;
}