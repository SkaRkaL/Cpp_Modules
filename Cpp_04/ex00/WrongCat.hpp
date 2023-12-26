
#pragma once

#include <iostream>
#include <string>

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(const WrongCat& copy);
		void makeSound() const;
		std::string getType() const;
		void setType(std::string type) { this->type = type; }
		~WrongCat();
		WrongCat& operator=(const WrongCat& copy);
};



WrongCat::WrongCat()
{
	std::cout << "Default <WrongCat> Constructor Called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& copy)
{
	std::cout << "WrongCat copy Constructor Called" << std::endl;
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
	std::cout << "Destructor <WrongCat> called" << std::endl;
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
