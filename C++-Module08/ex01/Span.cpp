#include "Span.hpp"

Span::Span() : capacity(0) {}

Span::Span(unsigned int N) : capacity(N) {}

Span::~Span() {}

void Span::addNumber(int num) 
{
    if(data.size() >= capacity) 
        throw capacityDepasse();
    data.push_back(num);
}

int Span::shortestSpan() const 
{
    if(data.size() < 2) 
        throw NombresInsuffisants();
    
    std::vector<int> sortedData = data;
    std::sort(sortedData.begin(), sortedData.end());

    int smallDiff = sortedData[1] - sortedData[0];
    for(size_t i = 1; i < sortedData.size() - 1; i++) 
    {
        int Diff = sortedData[i + 1] - sortedData[i];
        if(Diff < smallDiff)
            smallDiff = Diff;
    }
    return smallDiff;
}

int Span::longestSpan() const 
{
    if(data.size() < 2)
        throw NombresInsuffisants();
    
    std::vector<int> sortedData = data;
    std::sort(sortedData.begin(), sortedData.end());

    int largDiff = sortedData.back() - sortedData.front();
    return largDiff;
}

