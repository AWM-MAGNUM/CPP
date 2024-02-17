#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat() 
{
    std::cout << "\033[31m" << "Default constructor (Cat) called A Cat has been created" << "\033[0m" << std::endl;
    brain = new Brain(); 
    type = "Cat";          
}

Cat::Cat(const Cat &obj) : AAnimal(obj) 
{
    std::cout << "\033[33m" << "Copy constructor (Cat) called A Cat has been copied" << "\033[0m" << std::endl;
    brain = new Brain();
    *this = obj;
}

Cat &Cat::operator=(const Cat &Cat) 
{
    std::cout << "\033[34m" << "Copy assignment operator (Cat) called" << "\033[0m" << std::endl;
    if (this != &Cat)
    {
        if (this->brain != NULL)
            delete this->brain;
        brain = new Brain(*(Cat.brain));
    }
    return *this;
}

Brain* Cat::getBrain()
{
    return brain;
}

void Cat::makeSound() const 
{
    std::cout << "\033[35m" << "Meaaaaaou!" << "\033[0m" << std::endl;
}

Cat::~Cat() 
{
    std::cout << "\033[92m" << "Destructor (Cat) called A Cat has been destroyed" << "\033[0m" << std::endl;
    delete brain;
}