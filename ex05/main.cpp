#include "Harl.hpp"

int main()
{
    Harl harl;
    harl.complain("error");
    harl.complain("DEBUG");
    harl.complain("INFO");
    harl.complain("WARNING");
    harl.complain("ERROR");
    return (0);
}