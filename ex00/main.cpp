#include "Zombie.hpp"

int main()
{
    std::string name;

    for(int i = 0 ; i < 3 ; i++) {
        std::cout << "Choose a name for a new Zombie : ";
        std::cin >> name;
        randomChump(name);
    }
    return (0);
}