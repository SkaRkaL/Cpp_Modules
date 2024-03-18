#include <iostream>

int main()
{
	float f = 42.42f;
	int i;
	i = reinterpret_cast<int &>(f);
	std::cout << i << std::endl;

	float fptr = reinterpret_cast<float &>(i);
	std::cout << fptr << std::endl;
}
