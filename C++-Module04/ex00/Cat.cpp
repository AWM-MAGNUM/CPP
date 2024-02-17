#include "Cat.hpp"

Cat::Cat()
{
    type = "Cat";
    std::cout << "\033[31m" << "Default constructor (Cat) called A Cat has been created" << "\033[0m" << std::endl;
}

Cat::Cat(const Cat &obj)
{
    std::cout << "\033[33m" << "Copy constructor (Cat) called A Cat has been copied" << "\033[0m" << std::endl;
    *this = obj;
}

Cat &Cat::operator=(const Cat &Cat) 
{
    std::cout << "\033[34m" << "Copy assignment operator (Cat) called" << "\033[0m" << std::endl;
    if (this == &Cat)
        return *this;
    return *this;
}

void Cat::makeSound() const 
{
    std::cout << "\033[35m" << "Meaaaaaou!" << "\033[0m" << std::endl;
}

Cat::~Cat() 
{
    std::cout << "\033[92m" << "Destructor (Cat) called A Cat has been destroyed" << "\033[0m" << std::endl;
}
