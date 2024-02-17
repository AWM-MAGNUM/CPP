#ifndef AForm_HPP
#define AForm_HPP

#include <iostream>
#include "Bureaucrat.hpp"
class Bureaucrat;
class AForm {
    private : 
        const std::string name;
        bool signe;
        const int signG;
        const int executeG;
    public :
        AForm();
        AForm(const std::string &name, int signG, int executeG);
        AForm(const AForm &obj);
        AForm &operator=(const AForm &obj);
        virtual ~AForm();

        const std::string &getName() const;
        bool getSigne() const;
        int getSignG() const;
        int getexecuteG() const;

        void beSigned(const Bureaucrat &bureaucrat);
       
        //méthodes virtuelles pures
        virtual void execute(const Bureaucrat &ex) const = 0;

        class GradeTooHighException : public std::exception 
        {
            public : 
            virtual const char* what() const throw();
        };
        class GradeTooLowException : public std::exception 
        {
        public : 
            virtual const char* what() const throw();
        };
        class notSignException : public std::exception {
            public:
            virtual const char* what() const throw();
        };
};
std::ostream& operator<<(std::ostream& output, const AForm &aform);
#endif