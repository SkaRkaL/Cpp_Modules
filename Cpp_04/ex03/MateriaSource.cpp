
#include"MateriaSource.hpp"

MateriaSource::MateriaSource() {
	std::cout << "MateriaSource Default Constructor Called" <<std::endl;
	this->i = 0;
}

MateriaSource::MateriaSource(const MateriaSource &fill) {
	std::cout << "MateriaSource Copy Constructor Called" <<std::endl;
	*this = fill;
	for(int i=0; i < 4; i++)
		Materias[i] = (fill.Materias[i] != NULL) ? (fill.Materias[i]->clone()) :(NULL); 
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource Default Destructor Called" <<std::endl;
		for (int j = 0; j < i; j++)
			delete Materias[j];
}

const MateriaSource &MateriaSource::operator=(const MateriaSource &fill) {
	if (this == &fill)
		return *this;
	this->i = fill.i;
	for(int j = 0; j < 4; j++) {
		if(Materias[j]) {
			delete Materias[j];
			Materias[j] = (fill.Materias[j] != NULL) ? (fill.Materias[j]->clone()) :(NULL); 
		}
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria* m) {
	if (this->i == 4 || m == NULL)
		return ;
	this->Materias[i++ % 4] = m;
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	int i = 0;
	if(type != "cure" && type != "ice")
		return 0;
	while(i < this->i)
	{
		if (type == Materias[i]->getType())
			break;
		i++;
	}
	return Materias[i];
}
