#include "AMateria.hpp"

AMateria::AMateria() {
	std::cout << "AMateria Default Constructor Called" <<std::endl;
	this->m_type = "";
}

AMateria::~AMateria() {
	std::cout << "-----> AMateria Default Destructor Called" <<std::endl;
}

AMateria::AMateria(std::string const & type) {
	std::cout << "AMateria Constructor Called" <<std::endl;
	this->m_type = type;
}

void AMateria::use(ICharacter& target) {
	(void) target;
}

std::string const &AMateria::getType() const {
	return this->m_type;
}
