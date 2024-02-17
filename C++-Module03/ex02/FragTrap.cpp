#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout <<"Default constructor(FragTrap) called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &obj) : ClapTrap(obj)
{
    std::cout << "Copy constructor(FragTrap) called" << std::endl;
    *this = obj;
}

FragTrap &FragTrap::operator=(const FragTrap &obj)
{
    std::cout << "Copy assignment operator(FragTrap) called" << std::endl;
    
    if(this != &obj)
    {
        Name = obj.Name;   
        Hitpoints = obj.Hitpoints;
        Energy_points = obj.Energy_points;
        Attack_damage = obj.Attack_damage;
    }
    return *this;
}

FragTrap::FragTrap(std::string const &obj) : ClapTrap(obj)
{
    std::cout <<"Constructor parameter(FragTrap) called" << std::endl;
    Hitpoints = 100;
    Energy_points = 50;
    Attack_damage = 20;
}

unsigned int FragTrap::getAttackDamage() const
{
    return Attack_damage;
}

void FragTrap::attack(const std::string& target)
{
    if(Energy_points > 0)
    {
        Energy_points--;
        std::cout << "FragTrap " << Name << " attacks " << target << ", causing " << Attack_damage << " points of damage!" << std::endl;
    }
    else
        std::cout << "FragTrap " << Name << "is out of energy and connot attack!" << std::endl;
}

void FragTrap::highFivesGuys(void) const
{
    std::cout << "FragTrap" << Name <<  " requests a positive high five!" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "Destructor(FragTrap) called" << std::endl;
}