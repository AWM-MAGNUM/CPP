#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <stdexcept>
#include <iostream>


class Span {
private:
    std::vector<int> data;
    unsigned int capacity;

public:
    const std::vector<int>& getData() const 
    {
        return data;
    }
    Span();
    Span(unsigned int N);
    ~Span();
    void addNumber(int number);
    template <typename T>
    void addAllNumber(T start, T finish)
    {
        for (T it = start; it != finish; ++it)
            addNumber(*it);
    }
    void display() const;
    int shortestSpan() const;
    int longestSpan() const;

    class capacityDepasse : public std::exception {
        public : 
            const char* what() const throw()
            {
                return "Capacité dépassé Impossible d'ajouter plus de nombres";
            } 
    };
    class NombresInsuffisants  : public std::exception {
        public : 
            const char* what() const throw()
            {
                return "Pas assez de nombres pour calculer un écart";
            } 
    };
    
};

#endif
