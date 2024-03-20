#include "ABC.hpp"

int main()
{
	Base *base = generate();
	
	// Identify by pointer
	identify(base);

	// Identify by reference
	identify(*base);

	return 0;
}