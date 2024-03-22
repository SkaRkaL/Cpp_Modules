#include "easyfind.hpp"

int main(void)
{
	std::vector<int> v;

	v.push_back(7);
	v.push_back(10);
	v.push_back(35);
	v.push_back(16);
	v.push_back(22);

	

	std::cout << *easyfind(v, 7) << std::endl; 
	
	// Test 1
	try {
		std::cout << *easyfind(v, -100) << std::endl; 
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	// Test 2
	try {
		std::cout << *easyfind(v, 10) << std::endl; 
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}
