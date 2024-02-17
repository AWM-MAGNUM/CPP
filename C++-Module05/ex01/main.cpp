#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() 
{
    try
    {
        Bureaucrat bureaucrat("GIGN", 1);
        Form form("PHONEIX CONNEXION", 50, 100);

        std::cout << bureaucrat << std::endl;
        
        bureaucrat.signForm(form);
        
        std::cout << form << std::endl;
    } 
    catch (const std::exception& e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
}