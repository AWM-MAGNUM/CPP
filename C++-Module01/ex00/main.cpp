#include "Zombie.hpp"

int main()
{   
    Zombie heapZombie = newZombie("heap");
    heapZombie.announce();
    // delete heapZombie;
    
    randomChump("stack");
}
