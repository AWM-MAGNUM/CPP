#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Default") , grade(150) {}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : name(name) 
{
    if(grade < 1)
        throw GradeTooHighException();
    else if(grade > 150)
        throw GradeTooLowException();
    else
        this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj) : name(obj.name), grade(obj.grade) 
{
    this->operator=(obj);
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &obj) 
{
    if (this != &obj) 
        grade = obj.grade;
    return *this;
}

const std::string& Bureaucrat::getName() const 
{
    return name;
}

int Bureaucrat::getGrade() const 
{
    return grade;
}

void Bureaucrat::incrementGrade() 
{
    if(grade > 1)
        grade--;
    else
        throw GradeTooHighException();
}

void Bureaucrat::decrementGrade() 
{
    if(grade < 150)
        grade++;
    else
        throw GradeTooLowException();
}
const char* Bureaucrat::GradeTooHighException::what() const throw() 
{
    return "Grade too high";
}
const char* Bureaucrat::GradeTooLowException::what() const throw() 
{
    return "Grade too low";
}

std::ostream& operator<<(std::ostream& output, const Bureaucrat& bureaucrat)
{
    output << bureaucrat.getName() << " bureaucrat grade " << bureaucrat.getGrade();
    return output;
}

Bureaucrat::~Bureaucrat() {}