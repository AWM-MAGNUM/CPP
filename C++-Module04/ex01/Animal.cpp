#include "Animal.hpp"

Animal::Animal()
{
    type = "Animal";
    std::cout << "\033[31m" << "Default constructor(Animal) called An Animal has been created" << "\033[0m" << std::endl;    
}

Animal::Animal(const Animal &obj)
{
    std::cout << "\033[33m" << "Copy constructor(Animal) called An Animal has been copied" << "\033[0m" << std::endl;
    *this = obj;
}

Animal &Animal::operator=(const Animal &obj) 
{
    std::cout << "\033[34m" << "Copy assignment operator(Animal) called" << "\033[0m" << std::endl;
    if (this != &obj) 
    {
        type = obj.type;
    }
    return *this;
}

std::string Animal::getType() const
{
    return type;
}

void Animal::makeSound() const 
{
    std::cout << "\033[35m" << "Some generic animal sound" << "\033[0m" << std::endl;
}

Animal::~Animal() 
{
    std::cout << "\033[92m" << "Destructor(Animal) called An Animal has been destroyed" << "\033[0m" << std::endl;
}