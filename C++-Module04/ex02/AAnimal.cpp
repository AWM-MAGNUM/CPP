#include "AAnimal.hpp"

AAnimal::AAnimal()
{
    type = "AAnimal";
    std::cout << "\033[31m" << "Default constructor(AAnimal) called An AAnimal has been created" << "\033[0m" << std::endl;    
}

AAnimal::AAnimal(const AAnimal &obj)
{
    std::cout << "\033[33m" << "Copy constructor(AAnimal) called An AAnimal has been copied" << "\033[0m" << std::endl;
    *this = obj;
}

AAnimal &AAnimal::operator=(const AAnimal &obj) 
{
    std::cout << "\033[34m" << "Copy assignment operator(AAnimal) called" << "\033[0m" << std::endl;
    if (this != &obj) 
        type = obj.type;
    return *this;
}

std::string AAnimal::getType() const
{
    return type;
}

void AAnimal::makeSound() const {}

AAnimal::~AAnimal() 
{
    std::cout << "\033[92m" << "Destructor(AAnimal) called An AAnimal has been destroyed" << "\033[0m" << std::endl;
}