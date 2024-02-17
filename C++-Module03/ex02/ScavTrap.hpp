#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
public:
    ScavTrap();
    ScavTrap(const ScavTrap &obj);
    ScavTrap(const std::string &obj);
    ScavTrap &operator=(const ScavTrap &obj);
    void guardGate();
    void attack(const std::string& target);
    unsigned int getAttackDamage() const;
    ~ScavTrap();
};

#endif