#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Default <Dog> Constructor Called" << std::endl;
}

Dog::Dog(const Dog& copy)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = copy;
}

std::string Dog::getType() const
{
	return (type);
}

void Dog::makeSound() const
{
	std::cout << "Dog [Bark] : Haw Haw Haw.." << std::endl;
}

Dog::~Dog()
{
	std::cout << "Destructor <Dog> called" << std::endl;
}

Dog& Dog::operator=(const Dog& copy)
{
	std::cout << "Dog Assignation Operator [=] Called." << std::endl;
	if (this != &copy)
	{
		type = copy.type;
	}
	return (*this);
}
