#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

void dogDeepcopy()
{
    // case 1 : Copy Constructor
    {
        Dog     dog;
        dog.getBrain()->setIdea(0,"Go the Sleep");
        // for(int i = 0; i < 20;i++)
        //     dog.getBrain()->setIdea(i,"Go the Sleep");
        dog.getBrain()->getIdeas();
        std::cout << "******************************************************" << std::endl;
        Dog dog2(dog);
        dog2.getBrain()->getIdeas();
        std::cout <<dog.getBrain() << std::endl << dog2.getBrain() <<std::endl;
    }
    // case 2  : Copy Assignement Operator
    // {
        // Dog  dog;
        // dog.getBrain()->setIdea(0, "Go the sleep");
        // dog.getBrain()->getIdeas();
        // std::cout << "******************************************************" << std::endl;
        // Dog dog2;
        // dog2 = dog;
        // dog2.getBrain()->getIdeas();
        // std::cout <<dog.getBrain() << std::endl << dog2.getBrain() <<std::endl;
    // }
}
void catDeepcopy()
{
    // case 1 : Copy Constructor
    {
        Cat     cat;
        cat.getBrain()->setIdea(0,"Go the EAT");
        cat.getBrain()->getIdeas();
        std::cout << "******************************************************" << std::endl;
        Cat cat2(cat);
        cat2.getBrain()->getIdeas();
        std::cout <<cat.getBrain() << std::endl << cat2.getBrain() <<std::endl;
    }
    // case 2  : Copy Assignement Operator
    {
        // Cat  cat;
        // cat.getBrain()->setIdea(0, "Go the Eat");
        // cat.getBrain()->getIdeas();
        // std::cout << "******************************************************" << std::endl;
        // Cat cat2;
        // cat2 = cat;
        // cat2.getBrain()->getIdeas();
        // std::cout <<cat.getBrain() << std::endl << cat2.getBrain() <<std::endl;
    }
}

void arrayOfanimmal()
{
    const int arrSize = 4;
    Animal* animalArray[arrSize];
        std::cout << "---------------Dogs--------------" << std::endl;
    animalArray[0] = new Dog();
    animalArray[1] = new Dog();
        std::cout << "---------------Cats--------------" << std::endl;
    animalArray[2] = new Cat();
    animalArray[3] = new Cat();   
        std::cout << "---------------Delete--------------" << std::endl;
    for (int index = 0; index < arrSize; index++)
        delete animalArray[index];
}

void    test42()
{
    {
        const Animal* j = new Dog();
        const Animal* i = new Cat();
        delete j;//should not create a leak
        delete i;
    }
}

int main()
{
    dogDeepcopy();
    // catDeepcopy();
    // arrayOfanimmal();
    // test42();
    system("leaks Animal");
}