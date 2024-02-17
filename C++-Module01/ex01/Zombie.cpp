#include "Zombie.hpp"

Zombie::Zombie(){

}

void Zombie::setName(const std::string & zombieName) 
{
    name = zombieName;
}

void Zombie::announce() 
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie() 
{
    if (!name.empty())
        std::cout << name << ": is destroyed" << std::endl;
}
