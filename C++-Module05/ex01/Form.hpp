#ifndef Form_HPP
#define Form_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;
class Form {
    private : 
        const std::string name;
        bool signe;
        const int signG;
        const int executeG;
// Des membres privés constants qui représentent les grades nécessaires pour signer et exécuter le formulaire.
    public :
        Form();
        Form(const std::string &name, int signG, int executeG);
        Form(const Form &obj);
        Form &operator=(const Form &obj);
        ~Form();

        const std::string &getName() const;
        bool getSigne() const;
        int getSignG() const;
        int getexecuteG() const;

// Fonction pour vérifier si le bureaucrate peut signer le formulaire.
        void beSigned(Bureaucrat &bureaucrat);
        
        class GradeTooHighException : public std::exception 
        {
            public : 
            const char* what() const throw();
        };
        class GradeTooLowException : public std::exception 
        {
        public : 
            const char* what() const throw();
        };
};
std::ostream& operator<<(std::ostream& output, const Form &form);
#endif