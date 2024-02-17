#ifndef SERLIALIZATION_HPP
#define SERLIALIZATION_HPP

#include <iostream>

struct Data {
    int value;
};

class Serializer {
    private :
        Serializer();
        Serializer(const Serializer &obj);
        Serializer &operator=(const Serializer &obj);
        ~Serializer();
    public : 
        static uintptr_t serialize(Data *ptr);
        static Data *deserialize(uintptr_t raw);
};

#endif