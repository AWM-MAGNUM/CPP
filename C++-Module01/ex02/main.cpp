#include <iostream>
#include <string>

int main()
{
    std::string x = "HI THIS IS BRAIN";
    std::string *stringPTR = &x;
    std::string &stringREF = x;

    std::cout << "x = " << x << std::endl;
    std::cout << "stringPTR POINTS TO :  = " <<  *stringPTR << std::endl;
    std::cout << "stringREF REFERES TO : " << stringREF << std::endl;

    std::cout << "Address of x:              " << &x << std::endl;
    std::cout << "Address held by stringPTR: " << stringPTR << std::endl;
    std::cout << "Address held by stringREF: " << &stringREF << std::endl; 
}
