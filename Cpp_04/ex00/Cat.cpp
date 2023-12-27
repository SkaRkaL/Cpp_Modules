#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Default <Cat> Constructor Called" << std::endl;
}

Cat::Cat(const Cat& copy)
{
	std::cout << "Cat copy Constructor Called" << std::endl;
	*this = copy;
}

std::string Cat::getType() const
{
	return (type);
}

void Cat::makeSound() const
{
	std::cout << "Cat [Meow] : Meoooow.." << std::endl;
}

Cat::~Cat()
{
	std::cout << "Destructor <Cat> called" << std::endl;
}

Cat& Cat::operator=(const Cat& copy)
{
	std::cout << "Cat Assignation Operator [=] Called" << std::endl;
	if (this != &copy)
	{
		type = copy.type;
	}
	return (*this);
}
