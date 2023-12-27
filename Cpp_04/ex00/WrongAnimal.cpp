#include "WrongAnimal.hpp"


WrongAnimal::WrongAnimal()
{
	type = "WrongAnimal";
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
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
	std::cout << "WrongAnimal destructor called" << std::endl;
}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal sound [ SOUND ]" << std::endl;
}
