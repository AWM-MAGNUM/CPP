#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void cout(T element)
{
    std::cout << element << std::endl;
}

template <typename X , typename Y, typename J>
void iter(X array,Y length, J function)
{
    for(Y i = 0; i < length; i++)
        function(array[i]);
}

#endif

//Template X :
// Il représente le type des éléments du tableau.
// Template Y :
// Il représente le type utilisé pour la longueur du tableau.
// Template J :
// Il représente le type de la fonction à appliquer à chaque élément du tableau.