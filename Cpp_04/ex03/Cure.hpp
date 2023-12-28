#pragma once

#include"AMateria.hpp"

class Cure: public AMateria
{
	public:
		Cure();
		~Cure();
		Cure(std::string const & type);
		Cure(const Cure &fill);
		const Cure &operator=(const Cure &fill);
		AMateria* clone() const;
		void use(ICharacter& target);
};
