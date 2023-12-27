#pragma once

#include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat(const Cat& copy);
		void makeSound() const;
		std::string getType() const;
		void setType(std::string type) { this->type = type; }
		virtual ~Cat();
		Cat& operator=(const Cat& copy);
};
