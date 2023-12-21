#include "ClapTrap.hpp"

int main()
{
	ClapTrap a("Sa3d");
	
	a.attack("ZAB");
	a.beRepaired(9);
	a.beRepaired(2);
	a.takeDamage(20);
	a.takeDamage(1);

	return 0;
}

