# ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include "AForm.hpp"

class Intern {
    private : 
        std::string name;
        std::string target;
    public :
        Intern();
        Intern(std::string &name);
        Intern(const Intern &obj);
        Intern &operator=(const Intern &obj);
        ~Intern();

        AForm *makeForm(std::string formName, std::string target);
        
        class Error404 : public std::exception
        {
            public :
                const char *what() const throw();
        };

};
#endif