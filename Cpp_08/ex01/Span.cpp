#include "Span.hpp"

Span::Span() : N(1) {}

Span::Span(unsigned int N) : N(N) {}

Span::~Span() {}

Span::Span(Span const &other)
{
	(void)other;
}

Span &Span::operator=(Span const &other)
{
	if (this != &other)
		*this = other;
	return *this;
}

void Span::addNumber(int n)
{
	if (vec.size() >= N)
		throw std::out_of_range("Error: There's no space");
	else
		vec.push_back(n);
}

int Span::shortestSpan(void)
{
	int temp;
	if (vec.size() >= 2)
	{
		std::sort(vec.begin(), vec.end());
		temp = INT_MAX;
		for (unsigned int i = 1; i < vec.size(); i++)
			if (vec[i] - vec[i - 1] < temp)
				temp = vec[i] - vec[i - 1];
	}
	else
		throw std::invalid_argument("Error: Your size less than 2 element here!");
	return (temp);
}

int Span::longestSpan(void)
{
	if (vec.size() < 2)
		throw std::invalid_argument("Cannot find span with less than 2 element here!");
	std::sort(vec.begin(), vec.end());
	return (vec[vec.size() - 1] - vec[0]);
}

void Span::addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if (this->vec.size() + std::distance(begin, end) >= this->N)
		throw std::invalid_argument("This span is not large enaugh");
	else
		this->vec.insert(this->vec.end(), begin, end);
}
