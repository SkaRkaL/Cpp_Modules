#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanB {
	private:
		std::string name;
		Weapon		*_weapon;
	public:
		HumanB(std::string name);
		void	SetWeapon(Weapon &weapon);
		void	attack(void);
};

HumanB::HumanB(std::string name)
{
	this->name = name;
}

void	HumanB::SetWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}

void	HumanB::attack(void)
{
	std::cout << this->name << " attacks with their " << this->_weapon->GetType() << std::endl;
}

#endif