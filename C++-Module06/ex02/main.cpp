#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void)
{
    int  randomly = std::rand() % 3;

    if(randomly == 0)
        return new A();
    else if (randomly == 1)
        return new B();
    else   
        return new C();
}

void identify(Base* p)
{
    // je Essaye de convertir le pointeur vers un objet de type A,B,C
    if(dynamic_cast<A*>(p))
        std::cout << "PTR : A" << std::endl;
    else if(dynamic_cast<B*>(p))
        std::cout << "PTR : B" << std::endl;
    else if(dynamic_cast<C*>(p))
        std::cout << "PTR : C" << std::endl;
    else
        std::cout << "!! Erroooooooor !!" << std::endl;
}

void identify(Base& p)
{
    try
    {
        (void)dynamic_cast<A&>(p);
        std::cout << "REF : A " << std::endl;
    }
    catch(const std::exception& e)
    {
        try
        {
            (void)dynamic_cast<B&>(p);
            std::cout << "REF : B " << std::endl;
        }
        catch(const std::exception& e)
        {
            try
            {
                (void)dynamic_cast<C&>(p);
                std::cout << "REF : C " << std::endl;
            }
            catch(const std::exception& e)
            {
                std::cout << "  NON TYPE " << std::endl;
            }
        }
    }
}

int main()
{
    std::srand(std::time(0));
    
	Base *base = generate();

	identify(base);
	identify(*base);
    // system("leaks Base");
}

