#ifndef WrongCat_HPP
#define WrongCat_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
public:
    WrongCat();
    WrongCat(const WrongCat &obj);
    WrongCat &operator=(const WrongCat &WrongCat);
    void makeSound() const ;
    ~WrongCat();
};

#endif