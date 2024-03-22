#pragma once

#include <iostream>
#include <vector>

class Span {
	private:
		unsigned int N;
		std::vector<int> vec;
	public:
		Span();
		Span(unsigned int N);
		Span(Span const &other);
		Span &operator=(Span const &other);
		~Span();

		void	addNumber(int n);
		int		shortestSpan();
		int		longestSpan();
		void	addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end);
};
