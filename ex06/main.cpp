#include "Harl.hpp"

int whichLevel( std::string arg) {

    std::string tab[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i = 0;
    while (i < 4)
    {
        if (tab[i] == arg)
            return (i);
        i++;
    }
    return (-1);
}

int main(int argc, char **argv)
{
    Harl harl;
    
    if (argc != 2)
    {
        std::cout << "Wrong number of arguments" << std::endl;
        return (1);
    }
    switch (whichLevel(argv[1]))
    {
        case 0:
            harl.complain("DEBUG");
        case 1:
            harl.complain("INFO");
        case 2:
            harl.complain("WARNING");
        case 3:
            harl.complain("ERROR");
            break;
        default:
            std::cout << CYAN << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
    return (0);
}