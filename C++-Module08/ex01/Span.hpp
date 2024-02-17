#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <stdexcept>

class Span {
private:
    std::vector<int> data;
    unsigned int capacity;

public:
    Span();
    Span(unsigned int N);
    ~Span();
    void addNumber(int number);
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
