#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    Animal* meta = new Animal();
    Animal* j = new Dog();
    Animal* i = new Cat();
    WrongAnimal* x = new WrongAnimal();
    WrongAnimal* z = new WrongCat();

    std::cout << "\033[93m" << j->getType() << " " << "\033[0m" << std::endl;
    std::cout << "\033[93m" << i->getType() << " " << "\033[0m" << std::endl;
    std::cout << "\033[93m" << x->getType() << " " << "\033[0m" << std::endl;
    std::cout << "\033[93m" << z->getType() << " " << "\033[0m" << std::endl;

    meta->makeSound();
    j->makeSound();
    i->makeSound();
    x->makeSound();
    z->makeSound();
    delete(meta);
    delete(j);
    delete(i);
    delete(x);
    delete(z);
    // system("leaks Animal");
}