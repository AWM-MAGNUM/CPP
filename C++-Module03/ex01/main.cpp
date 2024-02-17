#include "ScavTrap.hpp"

int main() 
{
    ScavTrap ScavTrapA;
    ScavTrap ScavTrapB;
    ScavTrap ScavTrapD;
    std::cout << "\n";

    ScavTrap ScavTrapx("ELITE CREW");
    ScavTrap ScavTrapy("GIGN");
    std::cout << "\n";

    ScavTrap ScavTrapc = ScavTrapy;
    std::cout << "\n";

    ScavTrapD = ScavTrapy;
    std::cout << "\n";

    std::cout << "\033[31m" << "🔔ROUND 1️⃣ 🔔" << "\033[0m" <<std::endl;
    ScavTrapx.attack("GIGN");
    ScavTrapy.takeDamage(ScavTrapx.getAttackDamage());
    std::cout << "\n";

    std::cout << "\033[31m" << "🔔ROUND 2️⃣ 🔔" << "\033[0m" <<std::endl;
    ScavTrapy.attack("ELITE CREW");
    ScavTrapx.takeDamage(ScavTrapy.getAttackDamage());
    std::cout << "\n";

    std::cout << "\033[31m" << "🆘 🔋 🆘:" << "\033[0m" << std::endl;
    ScavTrapx.beRepaired(5);
    ScavTrapy.beRepaired(5);
    std::cout << "\n";
}