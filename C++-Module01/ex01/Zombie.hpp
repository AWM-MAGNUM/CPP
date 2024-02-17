#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie {
private:
    std::string name;
public:
    Zombie();
    void setName(const std::string & zombieName);
    void    announce();
    ~Zombie();
};
    Zombie* zombieHorde(int N, std::string name);
#endif