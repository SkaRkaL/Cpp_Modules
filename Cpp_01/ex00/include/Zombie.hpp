#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <new>

class	Zombie
{
	private:
		std::string name;

	public:
		Zombie(std::string name);
		~Zombie(void);
		void	announce(void);
};

Zombie::Zombie(std::string name)
{
	this->name = name;
}

Zombie::~Zombie(void)
{
	std::cout << this->name << " was destroyed" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	randomChump(std::string name);
Zombie	*newZombie(std::string name);

#endif