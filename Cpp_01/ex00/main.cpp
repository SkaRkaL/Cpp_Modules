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

void Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << this->name << " was destroyed" << std::endl;
}

Zombie	*newZombie(std::string name)
{
	Zombie *zo = new Zombie(name);
	return (zo);
}

void	randomChump(std::string name)
{
	Zombie zo = Zombie(name);
	zo.announce();
}

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
