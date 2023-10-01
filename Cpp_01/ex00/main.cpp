#include "include/Zombie.hpp"
int main()
{
	Zombie *name;

	name = newZombie("Saad");
	if (!name)
		return (1);
	name->announce();
	delete name;

	randomChump("Abderrahmane");

	return (0);
}
