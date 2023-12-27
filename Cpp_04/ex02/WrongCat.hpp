
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

