#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <deque>

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container> {
public:
    typedef typename Container::iterator iterator;

    MutantStack() : std::stack<T, Container>() {}

    // Constructeur de copie
    MutantStack(const MutantStack& obj) : std::stack<T, Container>(obj) {}

    // Opérateur d'affectation
    MutantStack& operator=(const MutantStack& obj) {
        if (this != &obj)
            std::stack<T, Container>::operator=(obj);
        return *this;
    }

    // Destructeur
    ~MutantStack() {}
    
    // Renvoie un iterateur pointant sur le premier element du stack
    iterator begin() {
        return std::stack<T, Container>::c.begin();
    }

    // Renvoie un iterateur pointant après le dernier element du stack
    iterator end() {
        return std::stack<T, Container>::c.end();
    }
};

#endif
