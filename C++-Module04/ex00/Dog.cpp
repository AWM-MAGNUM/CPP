#include "Dog.hpp"

Dog::Dog()
{
    type = "Dog";
    std::cout << "\033[31m" << "Default constructor (Dog) called A Dog has been created" << "\033[0m" << std::endl;
}

Dog::Dog(const Dog &obj)
{
    std::cout << "\033[33m" << "Copy constructor (Dog) called A Dog has been copied" << "\033[0m" << std::endl;
    *this = obj;
}

Dog &Dog::operator=(const Dog &dog) 
{
    std::cout << "\033[34m" << "Copy assignment operator (Dog) called" << "\033[0m" << std::endl;
    if (this == &dog)
        return *this;
    return *this;
}

void Dog::makeSound() const 
{
    std::cout << "\033[35m" << "Dog*Dog!" << "\033[0m" << std::endl;
}

Dog::~Dog() 
{
    std::cout << "\033[92m" << "Destructor (Dog) called A Dog has been destroyed" << "\033[0m" << std::endl;
}
