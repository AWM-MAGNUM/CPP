#include <iostream>
#include "easyfind.hpp"
#include <vector>

int main()
{
    std::vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);

    try 
    {
        std::vector<int>::iterator res1 = easyfind(vec, 5);
        std::vector<int>::iterator res2 = easyfind(vec, 3);
        std::vector<int>::iterator res3 = easyfind(vec, 1);

        std::cout << "Valeur trouvée à l'index : " << std::distance(vec.begin(), res1) << std::endl;
        std::cout << "Valeur trouvée à l'index : " << std::distance(vec.begin(), res2) << std::endl;
        std::cout << "Valeur trouvée à l'index : " << std::distance(vec.begin(), res3) << std::endl;

    } 
    catch (const ValueException& e) 
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << std::endl;
    std::cout << "*************** Le cas D'exception ***************************" << std::endl;
    std::cout << std::endl;

    try 
    {
        std::vector<int>::iterator resExc = easyfind(vec, 6);
        std::cout << "Valeur trouvée à l'index : " << std::distance(vec.begin(), resExc) << std::endl;
    } 
    catch (const ValueException& e) 
    {
        std::cerr << e.what() << std::endl;
    }
        std::cout << std::endl;
}