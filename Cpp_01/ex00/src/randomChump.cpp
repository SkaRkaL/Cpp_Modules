#include "../include/Zombie.hpp"

void	randomChump(std::string name)
{
	Zombie zo = Zombie(name);
	zo.announce();
}
