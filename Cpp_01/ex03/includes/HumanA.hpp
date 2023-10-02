#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanA {
	private:
		std::string name;
		Weapon		&_weapon;
	public:
		HumanA(std::string name, Weapon &weapon);
		void Attack(void);

};

HumanA::HumanA(std::string name, Weapon &weapon):_weapon(weapon) {
	this->name = name;
}

void HumanA::Attack(void) {
	std::cout << this->name << " attacks with their " << this->_weapon.GetType() << std::endl;
}

#endif