#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ClapTrap a("Sa3d");
	std::cout << std::endl;
	FragTrap b("KrkL");

	std::cout << std::endl;
	a.attack("KrkL");
	b.attack("Sa3d");
	b.takeDamage(11);
	b.beRepaired(1);
	std::cout << std::endl;
	b.highFivesGuys();
	std::cout << std::endl;
	return 0;
}

