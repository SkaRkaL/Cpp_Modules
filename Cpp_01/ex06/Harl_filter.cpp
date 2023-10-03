#include "Harl_filter.hpp"

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
	
	for (index = 0; index < 4; index++)
	{
		if (level == str[index])
			break;
	}

	switch(index) {
		case 0:
			func = &Harl::debug;
			(this->*func)();
		case 1:
			func = &Harl::info;
			(this->*func)();
		case 2:
			func = &Harl::warning;
			(this->*func)();
		case 3:
			func = &Harl::error;
			(this->*func)();
			break;
		default:
			std::cout << "[ERROR] Wrong level" << std::endl;
			func = NULL;
	}
}