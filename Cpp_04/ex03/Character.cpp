#include "Character.hpp"
#include "AMateria.hpp"

Character::Character() {
	std::cout << "Character Default Constructor Called" <<std::endl;
	this->_name = "";
}

Character::Character(std::string const & name) {
	std::cout << "Character Constructor Called" <<std::endl;
	this->_name = name;
}

Character::Character(const Character &fill) {
	std::cout << "Character Copy Constructor Called" <<std::endl;
	*this = fill;
	for(int i=0; i < 4; i++)
		inventory[i] = (fill.inventory[i] != 0) ? (fill.inventory[i]->clone()) :(0); 
}

Character::~Character()
{
	std::cout << "Character Default Destructor Called" <<std::endl;
}

const Character &Character::operator=(const Character &fill) {
	if (this == &fill)
		return *this;
	this->_name = fill.getName();
	this->i = fill.i;
	for(int j = 0; j < 4; j++) {
		if(inventory[i])
			delete inventory[i];
		inventory[i] = 0;
	}
	for(int i=0; i < 4; i++)
		inventory[i] = (fill.inventory[i] != 0) ? (fill.inventory[i]->clone()) :(0); 
	return *this;
}

std::string const & Character::getName() const {
	return this->_name;
}
void Character::equip(AMateria* m) {
	if (!m)
		return ; 
	if (i > 3)
		return ;
	this->inventory[i++] = m;
}
void Character::unequip(int idx) {
	if (idx < 0 || idx >= i)
		return ;
	for(int j=idx; j < i - 1; j++)
		this->inventory[j] = this->inventory[j + 1];
	this->inventory[--i] = 0;
}
void Character::use(int idx, ICharacter& target) {
	if (i > 0 && idx < i && idx >= 0)
		this->inventory[idx]->use(target);
}
