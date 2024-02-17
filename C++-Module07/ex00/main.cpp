#include "whatever.hpp"

class my{
    public :
    int a;
    int b;
    char c;

    my(int x,int y,char z)
    {
        a = x;
        b = y;
        c = z;
    }

    my operator=(const my &obj)
    {
        if(this != &obj)
        {
            a = obj.a;
            b = obj.b;
            // c = obj.c;
        }
        return *this;
    }

    bool operator>(const my &obj) const
    {
        return (this->a > obj.a);
    }

    bool operator<(const my &obj) const
    {
        return (this->a < obj.a);
    }

};

std::ostream &operator<<(std::ostream &out, const my &a)
{
    out << a.a << " " << a.b << " " << a.c << std::endl;
    return out; 
}
int main() 
{
    my a(10,11,'a');
    my b(20,22,'b');

    std::cout << std::min(a,b) << std::endl;
    std::cout << std::max(a,b) << std::endl;
}