#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal {
private :
    Brain *brain;
public:
    Dog();
    Dog(const Dog &obj);
    Dog &operator=(const Dog &dog);
    Brain* getBrain();
    virtual void makeSound() const ;
    virtual ~Dog();
};
#endif