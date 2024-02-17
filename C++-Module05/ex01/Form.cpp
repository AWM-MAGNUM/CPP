#include "Form.hpp"

Form::Form() : name("Default"), signe(false), signG(1), executeG(150) {}

Form::Form(const std::string& name, int signG, int executeG) : name(name), signe(false), signG(signG), executeG(executeG)
{
    if(signG < 1 || executeG < 1)
        throw GradeTooHighException();
    else if(signG > 150 || executeG > 150)
        throw GradeTooLowException();
}

Form::Form(const Form &obj) : name (obj.name), signG(obj.signG), executeG(obj.executeG)
{
    this->operator=(obj);
}

Form &Form::operator=(const Form &obj)
{
    if(this != &obj)
        signe = obj.signe;
    return *this;
}

Form::~Form() {}

const std::string& Form::getName() const 
{
    return name;
}

bool Form::getSigne() const 
{
    return signe;
}

int Form::getSignG() const
{
    return signG;
}

int Form::getexecuteG() const
{
    return executeG;
}

void Form::beSigned(Bureaucrat &bureaucrat)
{
    if(bureaucrat.getGrade() <= signG)
        signe = true;
    else
        throw GradeTooLowException();
}


const char * Form::GradeTooHighException::what() const throw()
{
    return "Grade too hight"; 
}

const char * Form::GradeTooLowException::what() const throw()
{
    return "Grade too low";
}

std::ostream &operator<<(std::ostream& output, const Form &form)
{
    output  << "Form Information" << std::endl
            << "Name: " << form.getName() << std::endl
            << "Grade to Sign: " << form.getSignG() << std::endl
            << "Grade to execute: " << form.getexecuteG() << std::endl;

    if(form.getSigne())
        output << "Signed Status : Yes" << std::endl;
    else
        output << "Signed Status : No" << std::endl;
    return output;            
}