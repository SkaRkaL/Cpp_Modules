#include "Animal.hpp"


Animal::Animal()
{
	type = "An Animal";
	std::cout << "Animal Default Constructor called" << std::endl;
}

Animal::Animal(const Animal& copy)
{
	std::cout << "Animal Copy Constructor Called" << std::endl;
	*this = copy;
}

std::string Animal::getType() const
{
	return (type);
}

Animal	 &Animal::operator=(const Animal &copy)
{
	std::cout << "Animal Assignation Operator [=] Called" << std::endl;
	if (this != &copy)
		type = copy.type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal Destructor called" << std::endl;
}

void Animal::makeSound() const
{
	std::cout << "No specific sound !" << std::endl;
}
