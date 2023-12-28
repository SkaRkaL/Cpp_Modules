#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
}

Cure::Cure(std::string const & type) {
	std::cout << "Cure Constructor Called" <<std::endl;
	this->m_type = type;
}

Cure::Cure(const Cure &fill) {
	std::cout << "Cure Copy Constructor Called" <<std::endl;
	*this = fill;	
}

Cure::~Cure()
{
	std::cout << "Cure Default Destructor Called" <<std::endl;
}

const Cure &Cure::operator=(const Cure &fill) {
	this->m_type = fill.getType();
	return *this;
}

void Cure::use(ICharacter& target) {
	std::cout<< "* heals " + target.getName() + "'s wounds *" <<std::endl;
}

AMateria* Cure::clone() const {
	AMateria  *cure = new Cure();
	return cure;
}