#ifndef Cat_HPP
#define Cat_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal {
private :
    Brain *brain;
public:
    Cat();
    Cat(const Cat &obj);
    Cat &operator=(const Cat &Cat);
    Brain* getBrain();
    virtual void makeSound() const ;
    virtual ~Cat();
};

#endif