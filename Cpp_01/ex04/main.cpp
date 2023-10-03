#include "replace.hpp"

int main(int ac, char **av)
{
	if (ac != 4) {
		std::cout << "Error : Bad arguments" << std::endl;
		return(1);
	}
	else {
		Replace sed_02(av[1]);
		sed_02.replace(av[2], av[3]);
	}
	return (0);
}