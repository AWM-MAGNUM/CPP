#include "AForm.hpp"

AForm::AForm() : name("Default"), signe(false), signG(1), executeG(150) {}

AForm::AForm(const std::string& name, int signG, int executeG) : name(name), signe(false), signG(signG), executeG(executeG)
{
    if(signG < 1 || executeG < 1)
        throw GradeTooHighException();
    else if(signG > 150 || executeG > 150)
        throw GradeTooLowException();
}

AForm::AForm(const AForm &obj) : name (obj.name), signG(obj.signG), executeG(obj.executeG)
{
    this->operator=(obj);
}

AForm &AForm::operator=(const AForm &obj)
{
    if(this != &obj)
        signe = obj.signe;
    return (*this);
}

AForm::~AForm() {}

const std::string& AForm::getName() const 
{
    return name;
}

bool AForm::getSigne() const 
{
    return signe;
}

int AForm::getSignG() const
{
    return signG;
}

int AForm::getexecuteG() const
{
    return executeG;
}

void AForm::beSigned(const Bureaucrat &bureaucrat)
{
    if(bureaucrat.getGrade() <= signG)
        signe = true;
    else
        throw GradeTooLowException();
}

const char * AForm::GradeTooHighException::what() const throw()
{
    return "Grade too hight"; 
}

const char * AForm::GradeTooLowException::what() const throw()
{
    return "Grade too low";
}

const char * AForm::notSignException::what() const throw()
{
    return "Form Not signed";
}

std::ostream &operator<<(std::ostream& output, const AForm &aform)
{
    output  << "AForm Information" << std::endl
            << "Name: " << aform.getName() << std::endl
            << "Grade to Sign: " << aform.getSignG() << std::endl
            << "Grade to execute: " << aform.getexecuteG() << std::endl;

    if(aform.getSigne())
        output << "Signed Status : Yes" << std::endl;
    else
        output << "Signed Status : No" << std::endl;
    return output;            
}