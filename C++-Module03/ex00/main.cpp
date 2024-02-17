#include "ClapTrap.hpp"

int main() 
{
    ClapTrap ClapTrapA;
    ClapTrap ClapTrapB;
    ClapTrap ClapTrapD;
    std::cout << "\n";

    ClapTrap ClapTrapx("ELITE CREW");
    ClapTrap ClapTrapy("GIGN");
    std::cout << "\n";

    ClapTrap ClapTrapc = ClapTrapy;
    std::cout << "\n";

    ClapTrapD = ClapTrapy;
    std::cout << "\n";

    std::cout << "\033[31m" << "🔔ROUND 1️⃣ 🔔" << "\033[0m" <<std::endl;
    ClapTrapx.attack("GIGN");
    ClapTrapy.takeDamage(ClapTrapx.getAttackDamage());
    std::cout << "\n";

    std::cout << "\033[31m" << "🔔ROUND 2️⃣ 🔔" << "\033[0m" <<std::endl;
    ClapTrapy.attack("ELITE CREW");
    ClapTrapx.takeDamage(ClapTrapy.getAttackDamage());
    std::cout << "\n";

    std::cout << "\033[31m" << "🆘 🔋 🆘:" << "\033[0m" << std::endl;
    ClapTrapx.beRepaired(5);
    ClapTrapy.beRepaired(5);
    std::cout << "\n";
}