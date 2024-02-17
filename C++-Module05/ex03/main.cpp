#include "Intern.hpp"
#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <cstdlib>

int main()
{
        AForm *shrubberyCreationForm = NULL;
        AForm *robotomyRequestForm = NULL;
        AForm *presidentialPardonForm = NULL;
    try
    {
        std::cout << "***************** Bureaucrat *******************\n" << std::endl;

        Bureaucrat bureaucrat("PHONEIX CONNEXION",10);
        std::cout << bureaucrat << std::endl;

        std::cout << "*****************  Intern *******************\n" << std::endl;

        Intern someRandomIntern;

        shrubberyCreationForm = someRandomIntern.makeForm("shrubbery creation","shrubbery");
        robotomyRequestForm = someRandomIntern.makeForm("robotomy request","robot");
        presidentialPardonForm = someRandomIntern.makeForm("presidential pardon","president");
        // presidentialPardonForm = someRandomIntern.makeForm("ff pardon","ff");

        std::cout << "\n***************** shrubberyCreationForm *******************\n" << std::endl;

        bureaucrat.signForm(*shrubberyCreationForm);
        bureaucrat.executeForm(*shrubberyCreationForm);
        std::cout << *shrubberyCreationForm << std::endl;

        std::cout << "\n***************** RobotomyRequestForm *******************\n" << std::endl;
        
        bureaucrat.signForm(*robotomyRequestForm);
        bureaucrat.executeForm(*robotomyRequestForm);
        std::cout << *robotomyRequestForm << std::endl;

        std::cout << "\n***************** PresidentialPardonForm *******************\n" << std::endl;

        bureaucrat.signForm(*presidentialPardonForm);
        bureaucrat.executeForm(*presidentialPardonForm);
        std::cout << *presidentialPardonForm << std::endl;

        std::cout << "\n***************** THE END *******************\n" << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Exception : " << e.what() << std::endl; 
    }
    delete shrubberyCreationForm;
    delete robotomyRequestForm;
    delete presidentialPardonForm;
}
