#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"
#include <fstream>


ShrubberyCreationForm::ShrubberyCreationForm()  : AForm("ShrubberyCreationForm",145,137) {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm("ShrubberyCreationForm",145,137), target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &obj) : AForm(obj), target(obj.target)
{
    this->operator=(obj);
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &obj)
{
    if(this != &obj)
        this->target = obj.target;
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void ShrubberyCreationForm::execute(Bureaucrat const &ex) const 
{
    if (ex.getGrade() > getexecuteG())
        throw AForm::GradeTooLowException();
    if(!this->getSigne())
        throw AForm::notSignException();
    else
        {
        std::ofstream file;
            file.open(target + "_shrubbery");
            if(!file)
            {
                std::cout << "Ooooopsss !! ^Sorry^" << std::endl;
                return ;
            }
            file  << "                       _{{\\ _{{\\/}}/}}__" << std::endl;
            file  << "                      {{/\\}/}{{/\\}(\\}{/\\} _" << std::endl;
            file  << "                     {{/\\}/}{{/\\}(_)}{/{\\}  _" << std::endl;
            file  << "                  {{\\{/\\}\\}{{/\\}\\}{/){/\\}}}/}" << std::endl;
            file  << "                 {{/{/(_)/}{{\\{/){\\(_){/}/}/}/}" << std::endl;
            file  << "                _{{\\{/{/{\\{/{/(_)/}/}/}\\(\\)/}/}/}" << std::endl;
            file  << "               {{/{/{\\{\\{\\(/}{\\{\\/}/}{\\}(_){\\/}\\}" << std::endl;
            file  << "               _{{\\{/{\\{/(\\)/}{/{/{/\\}\\})\\}{/{/\\}" << std::endl;
            file  << "              {{/{/{\\{/(}{/{\\{\\{\\/})/}{\\(_)/}/}\\}" << std::endl;
            file  << "               {{\\{\\/}(_){\\{\\{\\/}/}(_){\\/}{\\/}/})/}" << std::endl;
            file  << "                {{/{\\{\\/}{/{\\{\\/}/}{\\{\\/}/}\\}(_)" << std::endl;
            file  << "               {{/{\\{\\/}{/){\\{\\/}/}{\\{\\(/}/}\\}/}" << std::endl;
            file  << "                {{/{\\{\\/}(_){\\{\\{\\(/}/}{\\(_)/}/}\\}" << std::endl;
            file  << "                  {{/({/{\\{/{\\{\\/}(_){\\/}/}\\}/}(\\}" << std::endl;
            file  << "                   (_){/{\\/}{\\{\\/}/}{\\{\\)/}/}(_)" << std::endl;
            file  << "                     {{/{/{\\{\\/}{/{\\{\\{\\(_)/}" << std::endl;
            file  << "                      {{/{\\{\\{\\/}/}{\\{\\\\}/}" << std::endl;
            file  << "                       {){/ {\\/{\\/} \\}\\}" << std::endl;
            file  << "                       (_)  \\.-'.-/" << std::endl;
            file  << "                   __...--- |'-.-'| --...__" << std::endl;
            file  << "            _...--.   .-'   |'-.-'|  ' -.  ..--.." << std::endl;
            file  << "          -.    ' .  . '    |.'-._| '  . .  '   " << std::endl;
            file  << "          .  '-  '    .--'  | '-.'|    .  '  . '" << std::endl;
            file  << "                   ' ..     |'-_.-|" << std::endl;
            file  << "           .  '  .       _.-|-._ -|-._  .  '  ." << std::endl;
            file  << "                       .'   |'- .-|   '." << std::endl;
            file  << "           ..-'   ' .  '.   `-._.-´   .'  '  - ." << std::endl;
            file  << "            .-' '        '-._______.-'     '  ." << std::endl;
            file.close();
            }
}
