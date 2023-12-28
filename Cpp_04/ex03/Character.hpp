#pragma once

#include"ICharacter.hpp"

class AMateria;

class Character: public ICharacter
{
	private:
		AMateria *inventory[4];
		std::string _name;
		int      i;
	public:
		Character();
		~Character();
		const Character &operator=(const Character &fill);
		Character(const Character &fill);
		Character(std::string const & name);
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};
