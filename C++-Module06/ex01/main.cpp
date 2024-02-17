#include "Serialization.hpp"

int main(void)
{
    Data *ptr = new Data;

    ptr->value  = 777;
    std::cout << "Valeur d'origine (Value): " << ptr << std::endl;

    uintptr_t  ser_ptr    = Serializer::serialize(ptr);
    std::cout << "Valeur serialisee : " << ser_ptr << std::endl;

    Data        *des_ptr   = Serializer::deserialize(ser_ptr);
    std::cout << "Valeur désérialisée : " << des_ptr << std::endl;

    delete ptr;
    // system("leaks Serialization");
}