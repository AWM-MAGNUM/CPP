#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern() {}

Intern::Intern(const Intern &obj) : name(obj.name) 
{
    this->operator=(obj);
}

Intern &Intern::operator=(const Intern &obj)
{
    if (this != &obj)
        name = obj.name;
    return (*this);
}

const char *Intern::Error404::what() const throw()
{
    return "Error: Unknown form" ;
}

Intern::~Intern() {}

AForm *Intern::makeForm(std::string aformName, std::string target)
{
    int i;
    AForm *form = NULL;

    std::string validName[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};

    for (i = 0; i < 3; i++)
    {
        if(validName[i] == aformName)
        break;
    }

    switch(i)
    {
        case 0:
        {
            form = new PresidentialPardonForm(target);
            break;
        }
        case 1:
        { 
            form = new RobotomyRequestForm(target);
            break;
        }
        case 2:
        {
            form = new ShrubberyCreationForm(target);
            break;
        }
        default:
        {
            throw Intern::Error404();
            break;
        }
    }
    std::cout << "Intern creates " << aformName << std::endl;
    return (form);
}
