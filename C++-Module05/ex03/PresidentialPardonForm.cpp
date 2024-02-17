#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()  :  AForm("Presidential pardon Form",25,5) {}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target): AForm("Presidential pardon Form",25,5), target(target) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &obj) : AForm(obj), target(obj.target)
{
    this->operator=(obj);
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &obj)
{
    if(this != &obj)
        this->target = obj.target;
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

void PresidentialPardonForm::execute(const Bureaucrat &ex) const
{
    if(ex.getGrade() > this->getexecuteG())
        throw AForm::GradeTooLowException();
    if (!this->getSigne())
        throw AForm::notSignException();
    else
        std::cout << "has been pardoned by Zaphod Beeblebrox" << std::endl;
}
