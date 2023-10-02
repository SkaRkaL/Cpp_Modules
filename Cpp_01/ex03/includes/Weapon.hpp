#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class Weapon {
	private:
		std::string _type;
	public:
		Weapon(std::string type);
		const	std::string &GetType(void);
		void	SetType(std::string type);
};

Weapon::Weapon(std::string type) {
	this->_type = type;
}

const	std::string &Weapon::GetType(void) {
	return (this->_type);
}

void	Weapon::SetType(std::string type) {
	this->_type = type;
}

#endif