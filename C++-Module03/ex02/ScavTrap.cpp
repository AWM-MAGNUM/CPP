#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "Default constructor(ScavTrap) called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &obj) : ClapTrap(obj)
{
    std::cout << "Copy constructor(ScavTrap) called" << std::endl;
    *this = obj;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &obj)
{
    std::cout << "Copy assignment operator(ScavTrap) called" << std::endl;
    
    if(this != &obj)
    {
        Name = obj.Name;   
        Hitpoints = obj.Hitpoints;
        Energy_points = obj.Energy_points;
        Attack_damage = obj.Attack_damage;
    }
    return *this;
}

ScavTrap::ScavTrap(std::string const &obj) : ClapTrap(obj)
{
    std::cout << "Constructor parameter(ScavTrap) called " << std::endl;
    Hitpoints = 100;
    Energy_points = 50;
    Attack_damage = 20;
}

unsigned int ScavTrap::getAttackDamage() const
{
    return Attack_damage;
}

void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap" << Name << " is now in Gate keeper mode!!" << std::endl;
}

void ScavTrap::attack(const std::string& target) 
{
    if (Energy_points > 0) 
    {
        Energy_points--;
        std::cout << "ScavTrap " << Name << " attacks " << target << ", causing " << Attack_damage << " points of damage!" << std::endl;
    } 
    else 
        std::cout << "ScavTrap " << Name << " is out of energy and cannot attack!" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "Destructor(ScavTrap) called" << std::endl;
}