#pragma once

#include <iostream>
#include <string>

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



