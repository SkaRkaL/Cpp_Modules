#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "Default <WrongCat> Constructor Called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& copy)
{
	std::cout << "WrongCat Copy Constructor Called" << std::endl;
	*this = copy;
}

std::string WrongCat::getType() const
{
	return (type);
}

void WrongCat::makeSound() const
{
	std::cout << "WrongCat [Meow] : Meoooow.." << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "Destructor <WrongCat> Called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& copy)
{
	std::cout << "WrongCat Assignation Operator [=] Called" << std::endl;
	if (this != &copy)
	{
		type = copy.type;
	}
	return (*this);
}
