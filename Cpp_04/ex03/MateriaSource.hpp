#pragma once

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria *Materias[4];
		int      i;
	public:
		MateriaSource();
		~MateriaSource();
		const MateriaSource &operator=(const MateriaSource &fill);
		MateriaSource(const MateriaSource &fill);
		void learnMateria(AMateria* m);
		AMateria* createMateria(std::string const & type);
};

