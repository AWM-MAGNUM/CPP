#include "iter.hpp"

int main()
{
        int int_array[5] = {1,2,3,4,5};
        double double_array[5] = {1.2,2.3,3.4,4.5,5.6};
        std::string string_array[3] = {"1337" , "LEET" , "SPEAK"};
        char char_array[7] = "Qwerty";

        std::cout << "test of int" << std::endl; 
        iter(int_array,5,cout<int>);

        std::cout << "test of double" << std::endl;
        iter(double_array,5,cout<double>);

        std::cout << "test of string" << std::endl;
        iter(string_array,3,cout<std::string>);

        std::cout << "test of char" << std::endl;
        iter(char_array,6,cout<char>);
}