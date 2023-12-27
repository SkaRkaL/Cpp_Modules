
#pragma once

#include "Animal.hpp"

class Dog : public Animal{
	public:
		Dog();
		Dog(const Dog& copy);
		void makeSound() const;
		std::string getType() const;
		void setType(std::string type) { this->type = type; }
		virtual ~Dog();
		Dog& operator=(const Dog& copy);
};
