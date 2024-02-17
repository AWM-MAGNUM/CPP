#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include "AForm.hpp"

class RobotomyRequestForm : public AForm {
    private : 
        std::string target;
    public :
        RobotomyRequestForm();
        RobotomyRequestForm(const std::string &target);
        RobotomyRequestForm(const RobotomyRequestForm &obj);
        RobotomyRequestForm &operator=(const RobotomyRequestForm &obj);
        ~RobotomyRequestForm();

        void execute(const Bureaucrat &ex) const;
};
#endif