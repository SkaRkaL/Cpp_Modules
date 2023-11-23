#include <iostream>
#include <string>
#include <cctype>

int main(int ac, char **av) {

	std::string str;

	if (ac == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (1);
	}

	for (int i = 1; i < ac; i++) {
		str = av[i];
		for (int j = 0; j < str.length(); j++)
			std::cout << (char)toupper(str[j]);
		std::cout << " ";
	}
	std::cout << std::endl;
	return (0);
}
