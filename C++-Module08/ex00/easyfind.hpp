#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <stdexcept>

class ValueException : public std::exception {
public:
    const char* what() const throw()  {
        return "Value not found in container";
    }
};

template <typename T>
typename T::iterator easyfind(T &container, int valeur) 
{
    typename T::iterator it;
    it = std::find(container.begin(), container.end(), valeur);
    if (it == container.end())
        throw ValueException();
    return it;
}

#endif