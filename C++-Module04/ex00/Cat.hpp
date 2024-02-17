#ifndef Cat_HPP
#define Cat_HPP

#include "Animal.hpp"

class Cat : public Animal {
public:
    Cat();
    Cat(const Cat &obj);
    Cat &operator=(const Cat &Cat);
    void makeSound() const ;
    ~Cat();
};

#endif