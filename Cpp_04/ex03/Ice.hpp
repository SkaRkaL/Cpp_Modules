#pragma once

#include"AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		~Ice();
		Ice(std::string const & type);
		Ice(const Ice &fill);
		const Ice &operator=(const Ice &fill);
		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);
};
