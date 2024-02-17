#include "RobotomyRequestForm.hpp"
#include "AForm.hpp"


RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : AForm("RobotomyRequestForm", 72, 45), target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &obj) : AForm(obj), target(obj.target)
{
    this->operator=(obj);
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &obj)
{
    if(this != &obj)
        this->target = obj.target;
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void RobotomyRequestForm::execute(Bureaucrat const &ex) const 
{
    if (ex.getGrade() > this->getexecuteG())
        throw AForm::GradeTooLowException();
    if(!this->getSigne())
        throw AForm::notSignException();
    std::cout << "*drilling noises* " << std::endl;

    srand(time(0));
    if (rand() % 2 == 0)
        std::cout << target << " has been robotomized successfully!" << std::endl;
    else
        std::cout << target << " robotomization failed." << std::endl;
}
