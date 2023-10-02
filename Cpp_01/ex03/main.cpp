#include "includes/HumanA.hpp"
#include "includes/HumanB.hpp"

int main()
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.Attack();
		club.SetType("some other type of club");
		bob.Attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanA Skrkl("Skrkl", club);
		Skrkl.Attack();
		club.SetType("some other type of club");
		Skrkl.Attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.SetWeapon(club);
		jim.attack();
		club.SetType("some other type of club");
		jim.attack();
	}
	return 0;
}
