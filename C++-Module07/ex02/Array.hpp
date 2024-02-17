#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <stdexcept>

template <typename T>
class Array {
private:
    T* array;
    unsigned int arr_size;

public:
    // default constructor
    Array() : array(NULL), arr_size(0) {}

    // param constructor
    Array(unsigned int n) : array(new T[n]), arr_size(n) {}

    // copy constructor
    Array(const Array& obj) : array(new T[obj.arr_size]), arr_size(obj.arr_size) 
    {
        for (unsigned int i = 0; i < arr_size; ++i)
            array[i] = obj.array[i];
    }

    // copy assignment op
    Array& operator=(const Array& obj) 
    {
        if (this != &obj)
        {
            delete[] array;
            arr_size = obj.arr_size;
            array = new T[arr_size];
            for (unsigned int i = 0; i < arr_size; ++i)
                array[i] = obj.array[i];
        }
        return *this;
    }

    // Destructor
    ~Array() {
        delete[] array;
    }

    // Classe d'exception personnalisée pour les erreurs d'indices
    class ArrayIndexException : public std::exception 
    {
    public:
        const char *what() const throw() 
        {
            return "index is out of bounds";
        }
    };

    // Opérateur de crochets
    T& operator[](int index) 
    {
        if (index < 0 || static_cast<unsigned int>(index) >= arr_size)
            throw ArrayIndexException();
        return array[index];
    }
    //Permet l'accès et la modification des éléments du tableau.

    // Opérateur de crochets const
    const T& operator[](int index) const 
    {
        if (index < 0 || static_cast<unsigned int>(index) >= arr_size)
            throw ArrayIndexException();
        return array[index];
    }
    //Permet l'accès en lecture seule aux éléments du tableau.

    unsigned int size() const 
    {
        return arr_size;
    }
};

#endif