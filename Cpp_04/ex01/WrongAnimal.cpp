#include "WrongAnimal.hpp"


WrongAnimal::WrongAnimal()
{
	type = "WrongAnimal";
	std::cout << "WrongAnimal Default Constructor Called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy)
{
	std::cout << "WrongAnimal Copy Constructor Called" << std::endl;
	*this = copy;
}

std::string WrongAnimal::getType() const
{
	return (type);
}

WrongAnimal	 &WrongAnimal::operator=(const WrongAnimal &copy)
{
	std::cout << "WrongAnimal Assignation Operator [=] Called" << std::endl;
	if (this != &copy)
		type = copy.type;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor Called" << std::endl;
}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal Sound [ SOUND ]" << std::endl;
}
