#include "Harl_filter.hpp"

int	main(int ac, char **av)
{
	if (ac != 2) {
		std::cerr << "Error in arguments" << std::endl;
		return (1);
	}

	Harl	my_harl;
	my_harl.complain(av[1]);

	return (0);
}