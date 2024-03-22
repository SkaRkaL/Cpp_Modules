#include "Span.hpp"

int main()
{
try {
    Span sp = Span(50);
    std::vector<int> v;

    for (int i = 1; i < 50 ; i++)
    {
        unsigned short j = random();
        v.push_back(j);
    }

    sp.addNumbers(v.begin(), v.end());
    // sp.addNumber(6);
    // sp.addNumber(4);
    // sp.addNumber(17);
    // sp.addNumber(9);
    // sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
}
catch (std::exception &e)
{
    std::cout << e.what(); 
}
    return 0;
}
