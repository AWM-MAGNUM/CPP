#include "Zombie.hpp"

Zombie newZombie(std::string name)
{
    Zombie z;
    z.setName(name);
    return z;
}