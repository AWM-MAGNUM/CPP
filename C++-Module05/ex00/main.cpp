#include "Bureaucrat.hpp"

int main() 
{
    try 
    {
        Bureaucrat bureaucrat1("GIGN", 10);
        std::cout << bureaucrat1 << std::endl;

        std::cout << "\n*************** increment & decrement ***************************" << std::endl;

        bureaucrat1.incrementGrade();
        std::cout << "After increment: " << bureaucrat1 << std::endl;

        bureaucrat1.decrementGrade();
        std::cout << "After decrement: " << bureaucrat1 << std::endl;

        std::cout << "\n****************** G.T.H ************************" << std::endl;

        Bureaucrat bureaucrat2("PHONEIX CONNEXION", 0);

        std::cout << "\n********************* G.T.L *********************" << std::endl;

        Bureaucrat bureaucrat3("ELITE CREW", 200);

        std::cout << "******************* THE END ***********************" << std::endl;

    } 
    catch (const std::exception& e) 
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }
}
