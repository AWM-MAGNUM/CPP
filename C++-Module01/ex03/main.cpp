#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
    {
        Weapon AR = Weapon("AKM");
        HumanA Captain("Captain", AR);
        Captain.attack();

        Weapon SHOTGUN = Weapon("S12K");
        HumanA Lieutenant("Lieutenant", SHOTGUN);
        Lieutenant.attack();
    
        Weapon  MachineGun = Weapon("DP-28");
        HumanA Commandant("Commandant", MachineGun);
        Commandant.attack();
        Lieutenant.attack();

        Weapon SMG = Weapon("UMP45");
        HumanB Colonel("Colonel");
        Colonel.attack();
        
        Colonel.setWeapon(SMG);
        Colonel.attack();
  
        HumanB King("King");
        King.attack();
        Weapon sniper = Weapon("AWM");
        King.setWeapon(sniper);
        King.attack();
    }
}

// int main()
// {
// {
// Weapon club = Weapon("crude spiked club");
// HumanA bob("Bob", club);
// bob.attack();
// club.setType("some other type of club");
// bob.attack();
// }
// {
// Weapon club = Weapon("crude spiked club");
// HumanB jim("Jim");
// jim.setWeapon(club);
// jim.attack();
// club.setType("some other type of club");
// jim.attack();
// }
// return 0;
// }