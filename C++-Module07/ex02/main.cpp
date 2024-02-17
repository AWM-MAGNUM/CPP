#include "Array.hpp"

class Empty{
    public :
        int p;
        Empty(){this->p = 0;}
};

int main()
{
    Array<int> Arrayint(3);

    for(unsigned int i = 0; i < Arrayint.size(); i++)
        Arrayint[i] = i;
    for(unsigned int i = 0; i < Arrayint.size(); i++)
        std::cout << Arrayint[i] << " " ;
    std::cout << std::endl;
    std::cout << "size : " << Arrayint.size() << std::endl;

    Array<char> Arraychar(3);

    for(unsigned int i = 0; i < Arraychar.size(); i++)
        Arraychar[i] = 'a';
    for(unsigned int i = 0; i < Arraychar.size();i++)
        std::cout << Arraychar[i] << " " ;
    std::cout << std::endl;
    std::cout << "size : "<< Arraychar.size() << std::endl; 

    Array<std::string> Arraystring(3);

    for(unsigned int i = 0; i < Arraystring.size() ; i++)
        Arraystring[i] = "QWERTY";
    for(unsigned int i = 0; i < Arraystring.size() ; i++)
        std::cout << Arraystring[i] << " " ;
    std::cout << std::endl;
    std::cout << "size : "<<  Arraystring.size() << std::endl;
    
    Array<Empty> ArrayEmpty(3);
    for(unsigned int i = 0; i < ArrayEmpty.size();i++)
        ArrayEmpty[i].p = 555;
    for(unsigned int i = 0;i < ArrayEmpty.size();i++)
        std::cout << ArrayEmpty[i].p << " " ;
    std::cout << std::endl;
    std::cout << "size : " << ArrayEmpty.size() << std::endl;
    try 
    {
        std::cout << Arrayint[4] << std::endl;
    }
    catch(const Array<int>::ArrayIndexException &e)
    {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
}