#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
    protected:
        std::string Name;
        unsigned int Hitpoints;
        unsigned int Energy_points;
        unsigned int Attack_damage;
    public :
        ClapTrap();
        ClapTrap(const ClapTrap &obj);
        ClapTrap &operator=(const ClapTrap &obj);
        ClapTrap(const std::string &obj);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        unsigned int getAttackDamage() const;
        ~ClapTrap();
        };
#endif