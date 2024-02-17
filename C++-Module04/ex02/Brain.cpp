#include "Brain.hpp"

Brain::Brain() 
{
    int numElements = sizeof(ideas) / sizeof(ideas[0]);
    std::cout << "\033[31m" << "Default constructor(Brain) called" << "\033[0m" << std::endl;
    for(int i = 0;i < numElements;i++)
        ideas[i] = "";
}

Brain::Brain(const Brain &obj)
{
    std::cout << "\033[33m" << "Copy constructor(Brain) called" << "\033[0m" << std::endl;
    *this = obj;
}

Brain &Brain::operator=(const Brain &obj)
{
    int numElements = sizeof(ideas) / sizeof(ideas[0]);
    std::cout << "\033[34m" << "Copy assignment operator(Brain) called" << "\033[0m" << std::endl;
     if (this != &obj) 
    {
        for(int i = 0;i < numElements;i++)
            ideas[i] = obj.ideas[i];
    }
    return *this;
}

void Brain::getIdeas()
{
    int numElements = sizeof(ideas) / sizeof(ideas[0]);
    for(int i = 0; i < numElements;i++)
        std::cout << i + 1 << ideas[i] << std::endl;
}

void    Brain::setIdea(int index, std::string idea)
{
    ideas[index] = idea; 
}

Brain::~Brain()
{
    std::cout << "\033[92m" << "Destructor(Brain) called" << "\033[0m" << std::endl;
}
