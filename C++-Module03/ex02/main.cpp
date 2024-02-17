#include "FragTrap.hpp"

int main() 
{
    FragTrap FragTrapA;
    FragTrap FragTrapB;
    FragTrap FragTrapD;
    std::cout << "\n";

    FragTrap FragTrapx("ELITE CREW");
    FragTrap FragTrapy("GIGN");
    std::cout << "\n";

    FragTrap FragTrapc = FragTrapy;
    std::cout << "\n";

    FragTrapD = FragTrapy;
    std::cout << "\n";
    FragTrap highFive("HFG");
    highFive.highFivesGuys();

    std::cout << "\033[31m" << "🔔ROUND 1️⃣ 🔔" << "\033[0m" <<std::endl;
    FragTrapx.attack("GIGN");
    FragTrapy.takeDamage(FragTrapx.getAttackDamage());
    std::cout << "\n";

    std::cout << "\033[31m" << "🔔ROUND 2️⃣ 🔔" << "\033[0m" <<std::endl;
    FragTrapy.attack("ELITE CREW");
    FragTrapx.takeDamage(FragTrapy.getAttackDamage());
    std::cout << "\n";

    std::cout << "\033[31m" << "🆘 🔋 🆘:" << "\033[0m" << std::endl;
    FragTrapx.beRepaired(5);
    FragTrapy.beRepaired(5);
    std::cout << "\n";
}