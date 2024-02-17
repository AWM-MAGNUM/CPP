#include "Zombie.hpp"

int main()
{
    int numZombie = 5;
    Zombie *heapHordeZombie ;

    heapHordeZombie = zombieHorde(numZombie,"kerberos");
    for(int i = 0; heapHordeZombie && i < numZombie; i++)
        heapHordeZombie->announce();
    delete[] heapHordeZombie;
}
