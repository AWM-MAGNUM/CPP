#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <deque>

template <typename T>
class MutantStack : public std::stack<T> {
    public:
        typedef typename std::deque<T>::iterator iterator;
        typedef typename std::deque<T>::const_iterator const_iterator;

        MutantStack() : std::stack<T>() {}
        MutantStack(const MutantStack& obj) : std::stack<T>(obj) {}
        MutantStack& operator=(const MutantStack& obj) 
        {
            if (this != &obj)
                std::stack<T>::operator=(obj);
            return *this;
        }
        ~MutantStack() {}

        iterator begin() 
        { 
            return this->c.begin(); 
        }
        iterator end() 
        { 
            return this->c.end(); 
        }
        const_iterator begin() const 
        { 
            return this->c.begin(); 
        }
        const_iterator end() const 
        { 
            return this->c.end(); 
        }
};
#endif