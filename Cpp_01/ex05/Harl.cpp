#include "Harl.hpp"

void	Harl::debug(void) {
	std::cout << "[DEBUG] I'm debugging" << std::endl;
}

void	Harl::info(void) {
	std::cout << "[INFO] I'm informing" << std::endl;
}

void	Harl::warning(void) {
	std::cout << "[WARNING] I'm warning" << std::endl;
}

void	Harl::error(void) {
	std::cout << "[ERROR] I'm erroring" << std::endl;
}

void	Harl::complain(std::string level) {
	int	index;
	void	(Harl::*func)(void);

	std::string str[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	for (index = 1; index < 5; index++)
	{
		if (level == str[index])
			break;
	}

	switch(index) {
		case 1:
			func = &Harl::debug;
			break;
		case 2:
			func = &Harl::info;
			break;
		case 3:
			func = &Harl::warning;
			break;
		case 4:
			func = &Harl::error;
			break;
		default:
			std::cout << "[ERROR] Wrong level" << std::endl;
			func = NULL;
	}
	if (func != NULL)
		(this->*func)();
}