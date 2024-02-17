#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat {
    private : 
        const std::string name;
        int grade;

    public :
        const std::string& getName() const;
        int getGrade() const;
        void incrementGrade();
        void decrementGrade();

        Bureaucrat();
        Bureaucrat(const std::string &name, int grade);
        Bureaucrat(const Bureaucrat &obj);
        Bureaucrat& operator=(const Bureaucrat &obj);
        ~Bureaucrat();

    public : // Privqte
        class GradeTooHighException : public std::exception {
            public : 
            const char* what() const throw();
        };
        class GradeTooLowException : public std::exception {
            public : 
            const char* what() const throw();
        };
};
std::ostream& operator<<(std::ostream& output, const Bureaucrat& bureaucrat);
#endif

