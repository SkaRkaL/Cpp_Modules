#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>
# include <new>

class Zombie {
	private:
		std::string name;
	public:
		void	announce(void);
		void	set_name(std::string name);
		~Zombie(void);
};

void Zombie::set_name(std::string name) {
	this->name = name;
}

void	Zombie::announce(void) {
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie(void) {
	std::cout << this->name << " was destroyed" << std::endl;
}

Zombie* zombieHorde(int N, std::string name);

#endif