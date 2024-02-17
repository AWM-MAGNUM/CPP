#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    type = "WrongCat";
    std::cout << "\033[31m" << "Default constructor (WrongCat) called A WrongCat has been created" << "\033[0m" << std::endl;
}

WrongCat::WrongCat(const WrongCat &obj)
{
    std::cout << "\033[33m" << "Copy constructor (WrongCat) called A WrongCat has been copied" << "\033[0m" << std::endl;
    *this = obj;
}

WrongCat &WrongCat::operator=(const WrongCat &WrongCat) 
{
    std::cout << "\033[34m" << "Copy assignment operator (WrongCat) called" << "\033[0m" << std::endl;
    if (this == &WrongCat) 
        return *this;
    return *this;
}

void WrongCat::makeSound() const 
{
    std::cout << "\033[35m" << "WrongCat Sound!" << "\033[0m" << std::endl;
}

WrongCat::~WrongCat() 
{
    std::cout << "\033[92m" << "Destructor (WrongCat) called A WrongCat has been destroyed" << "\033[0m" << std::endl;
}
