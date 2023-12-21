#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ClapTrap a("Sa3d");
	
	ScavTrap b("KrkL");

	a.attack("KrkL");
	b.attack("Sa3d");
	b.takeDamage(10);
	b.beRepaired(10);
	b.guardGate();
	return 0;
}

