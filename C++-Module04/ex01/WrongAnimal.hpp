#ifndef WrongAnimal_HPP
#define WrongAnimal_HPP

#include "Animal.hpp"

class WrongAnimal {
    protected:
        std::string type;
public:
    WrongAnimal();
    WrongAnimal(const WrongAnimal &obj);
    WrongAnimal &operator=(const WrongAnimal &obj);
    std::string getType() const;
    void makeSound() const ;
    ~WrongAnimal();
};

#endif